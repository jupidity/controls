# Copyright (C) 2017 Electric Movement Inc.
# All Rights Reserved.

# Author: Brandon Kinman


class PIDController:
    def __init__(self, kp = 0.0, ki = 0.0, kd = 0.0, max_windup = 10):
        #TODO
        self.kp_ = kp
        self.ki_ = ki
        self.kd_ = kd

        self.start_time_ = 0.0
        self.error_sum_ = 0.0
        self.last_timestamp_ = 0.0
        self.last_error_ = 0.0
        
    def reset(self):
        #TODO
        pass

    def setTarget(self, target):
        #TODO
        pass

    def setKP(self, kp):
        #TODO
        pass

    def setKI(self, ki):
        #TODO
        pass

    def setKD(self, kd):
        #TODO
        pass

    def setMaxWindup(self, max_windup):
        #TODO
        pass

    def update(self, measured_value, timestamp):
        #TODO
        pass
