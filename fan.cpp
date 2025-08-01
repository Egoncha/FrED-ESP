#include <iostream>
#include <Arduino.h>

class Fan{

private:
  const int pwmPin;
  const int pwmChannel;
  const int pwmFrequency;
  const int pwmResolution;
  int dutyCycle;

  std::vector<int> dutyCycleLog;

public:
  Fan(int pin, int channel = 0, int frequency = 25000,int resolutions =8):
    pwmPin{pin},
    pwmChannel {channel},
    pwmFreqiency {frequency},
    pwmResolution{resolution},
    dutyCycle{0}
  {}

  void begin(){
    ledcSetup(pwmChannel,pwmFrequency,pwmResolution);
    ledcAttachPin(pwmPin, pwmChannel);
    Serial.println("Fan controller initiated.");
  }

  void start(int initialDutyCycle) {
    updateDutyCycle(initialdutyCycle);
    Serial.println("Fan started");
  }

  void stop() {
    updateDutyCycle(0);
    Serial.println("Fan stopped.");
  }

  void updateDutyCycle( int newDutyCycle) {
    newDutyCycle = constrain(newDutyCycle, 0, 100);
    dutyCycle = newDutyCycle;
    int maxDuty = (1<<pwmResolution) -1;
    int pmwValue = dutyCycle * maxDuty / 100;
    ledcWrite(pwmChannel, pwmValue);
    dutyCycleLog.push_back{dutyCycle);
    Serial.println("Duty cycle updated");
    
  }
  void controlLoop(){
    try {
      for(int dc = 0; dc <= 100; dc+= 20} {
          updateDutyCycle(dc);
          delay(1000);
          }
    }
    catch(...){
    Serial.println("error in fan control loop");
    }
  }
};

Fan fan(13);

void setup(){
  Serial.begin(115200);
  fan.begin();
  fan.start(30);
  delay(2000);
  fan.updateDutyCycle(70);
  delay(2000);
  fan.controlLoop();
  fan.stop();
}

void loop(){

}
