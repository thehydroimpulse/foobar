#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H

#include "mbed.h"

template<typename T>
struct Axes {
  T x;
  T y;
  T z;
};

class Accelerometer {
public:
  Accelerometer(PinName x, PinName y, PinName z);
  Axes<int> gforce();

private:
  AnalogIn m_x;
  AnalogIn m_y;
  AnalogIn m_z;
};

#endif
