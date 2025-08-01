#include <iostream>
#include <vector>

class database{

private:
  std::vector<double> timereadings(1000); 

  std::vector<double> camaraTimestamps(1000); 
  std::vector<double> temperatureTimestamps(1000); 
  std::vector<double> spoolerTimestamps(1000); 

  std::vector<double> temperatureDeltaTime(1000); 
  std::vector<double> temperatureReadings(1000); 
  std::vector<double> temperatureError(1000); 
  std::vector<double> temperaturePIDOutput(1000); 
  std::vector<double> temperatureKp(1000); 
  std::vector<double> temperatureKi(1000); 
  std::vector<double> temperatureKd(1000); 
  std::vector<double> extruderRPM(1000); 

  std::vector<double> diameterDeltaTime(1000); 
  std::vector<double> diameterReadings(1000); 
  std::vector<double> diameterSetPoint(1000); 

  std::vector<double> spoolerDeltaTime(1000); 
  std::vector<double> spoolerSetpoint(1000); 
  std::vector<double> spoolerKp(1000); 
  std::vector<double> spoolerKi(1000); 
  std::vector<double> spoolerKd(1000); 
  std::vector<double> spoolerRPM(1000); 

  std::vector<double> fanDutyCycle(1000); 
}
