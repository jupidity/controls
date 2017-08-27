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
  float _target; // desired value
  float _start_time; // PID controller start time


public:

  explicit PIDController(float kp = 0.0, float ki = 0.0, float kd = 0.0, float max_windup = 0.0) : _kd(kd) , _ki(ki), _kp(kp), _max_windup(max_windup)
    {
      this->_last_timestamp = 0.0; // intialize at zero
      this->_error_sum = 0.0;
      this->_last_error = 0.0;

    };
    
  void reset(); // reset the instance
  void setTarget(float target); // specify the desired state for PID class
  void setKP(float kp){this->_kp=kp;}; // set kp
  void setKI(float ki){this->_ki=ki;};// set ki
  void setKD(float kd){this->_kd=kd;}; // set kd
  void setMaxWindup(float max_windup){this-> _max_windup = max_windup ;}; // set max windup
  void update(float measured_value, float timestamp); // update the PID class

};
