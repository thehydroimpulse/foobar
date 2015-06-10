#include "mbed.h"
#include "accelerometer.h"

Accelerometer::Accelerometer(PinName x, PinName y, PinName z)
  : m_x(x), m_y(y), m_z(z)
{}

Axes<int> Accelerometer::gforce() {
  Axes<int> tuple;
  // Read the voltages from each axis.
  tuple.x = (int)((this->m_x.read() * 3.3) * 1000.0) / 800;
  tuple.y = (int)((this->m_y.read() * 3.3) * 1000.0) / 800;
  tuple.z = (int)((this->m_z.read() * 3.3) * 1000.0) / 800;
  
  return tuple;
}
