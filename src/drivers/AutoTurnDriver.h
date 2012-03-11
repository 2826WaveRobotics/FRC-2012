#ifndef AUTO_TURN_DRIVER_H
#define AUTO_TURN_DRIVER_H

#include "drivers/Driver.h"

class Timer;
class Encoder;
class Gyro;

/**
 * @author Eric Bakan
 *
 * A baselock drive controller
 * Holds current position, but can adjust based on joystick input
 */
class AutoTurnDriver : public Driver {
 public:
  AutoTurnDriver(Drive* drive);
  virtual void Reset();
  void SetAngle(double angle);
  virtual bool UpdateDriver();
 private:
  double angle_;
  Gyro* gyro_;
  Encoder* leftEncoder_;
  Encoder* rightEncoder_;
  Timer* timer_;
  double lastPosL_;
  double lastTimer_;
};

#endif
