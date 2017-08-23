/*

PID controller class

Author: Sean Cassero

*/


class PIDController{

private:

  float _kp; // proportional control constant
  float _kd; // derivative control parameter
  float _ki; // integral control parameter
  float _last_error; // last error measured
  float _last_timestamp; // last recorded timestamp
  float _error_sum; // sum of all state errors, used for integral control
  float _max_windup; // max windup value


public:

  PIDController(); // class constructor
  void reset(); // reset the instance
  void setTarget(float target); // specify the desired state for PID class
  void setKP(float kp){this->_kp=kp;}; // set kp
  void setKI(float ki){this->_ki=ki;};// set ki
  void setKD(float kd){this->_kd=kd;}; // set kd
  void setMaxWindup(float max_windup){this-> _max_windup = max_windup ;}; // set max windup
  void update(float measured_value, float timestamp); // update the PID class

};

void PIDController::update(float measured_value, float timestamp){}

void PIDController::reset(){}


int main() {

  return 0;
}
