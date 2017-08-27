/*

PID controller class

Author: Sean Cassero

*/

#include "pid_controller.h"



 // specify the desired state for PID class
void setTarget(float target){}



// update the PID class
void PIDController::update(float measured_value, float timestamp){}




void PIDController::reset(){

  // reset the accumulated data/info
  this->_last_timestamp = 0.0; // intialize at zero
  this->_error_sum = 0.0;
  this->_last_error = 0.0;

}


int main() {

  return 0;
}
