#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H

#include "mbed.h"
#include <src/vec3.h>

class Accelerometer {
public:
  Accelerometer(PinName x, PinName y, PinName z);
  Vec3<int> gforce();

private:
  AnalogIn m_x;
  AnalogIn m_y;
  AnalogIn m_z;
};

#endif
