#include "Point.h"

#include <cmath>
#include <iostream>

Point::Point()
   : x_(0)
   , y_(0)
{
}

Point::Point(double x, double y)
   : x_(x)
   , y_(y)
{
}

double Point::get_x() const
{
   return x_;
}

double Point::get_y() const
{
   return y_;
}

void Point::set_x(double x)
{
   x_ = x;
}

void Point::set_y(double y)
{
   y_ = y;
}

double Point::distance(const Point &pnt) const
{
   return std::sqrt((x_ - pnt.x_) * (x_ - pnt.x_) +
                    (y_ - pnt.y_) * (y_ - pnt.y_));
}

void Point::print() const
{
   std::cout << "[" << x_ << "," << y_ << "]";
}
