#ifndef BACKBOARD_FINDER_H_
#define BACKBOARD_FINDER_H_

#include "vision/VisionProcess.h"

/**
 * @author Tom Bottglieri
 * 
 * Task which updates information regarding distance, angle, and other 
 * vision-targetting information. 
 */
class BackboardFinder : public VisionProcess {
 public:
  /**
   * The current distance offset from the target's center axis.
   * @return offset from target center
   */
  double GetX();
  
  /**
   * The current distance to the target.
   * @return distance to target
   */
  double GetDistance();
  
  /**
   * The angular difference between the horizontal axis of the scoring 
   * apparatus and the target.
   * @return vertical angle to target
   */
  double GetAngle();
  
  /**
   * Checks whether there is line-of-sight from the sensor to the target.
   * @return true if target appears in sensor, false otherwise.
   */
  bool SeesTarget();
  
  /**
   * Updates sensor information regarding target data.
   */
  void DoVision();
  
 private:
  double x_;
  double distance_;
  double angle_;
  bool seesTarget_;
};


#endif