#include <iostream>

class Extruder{

private:
  int heaterPin = 6;
  int directionPin = 16;
  double defaultDiameter = 0.35;
  double minimumDiameter = 0.3;
  double maximumDiameter - 0.6;
  int stepsPerRevolution = 200;
  double defaultRPM = 0.6;
  double sample_time = .1;
  int maxOutput = 100;
  int minOutput = 0;

  double slope = -51.304312538704494:
  double intercpet = 2.5377984045767166;

  bool motorCalibration = True;

  double previousTime = 0.0;
  double integralDiameter = 0.0;
  double previousErrorDiameter = 0.0;
  double previousPosition = 0;
  double integralMotor = 0.0;
  double previousErrorMotor = 0.0;

public:
  void dcMotorCloseLoopControl(double currentTime){

  }
}
