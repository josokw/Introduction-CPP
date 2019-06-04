#include "Rectangle.h"

#include <iostream>

using namespace std;

Rectangle::Rectangle()
   : width_(1.0)
   , height_(1.0)
{
}

Rectangle::Rectangle(double width, double height)
   : width_(width)
   , height_(height)
{
}

double Rectangle::getWidth() const
{
   return width_;
}

void Rectangle::setWidth(double width)
{
   width_ = width;
}

double Rectangle::getHeight() const
{
   return height_;
}

void Rectangle::setHeight(double height)
{
   height_ = height;
}

void Rectangle::print() const
{
   cout << "[" << width_ << "," << height_ << "]";
}

double Rectangle::surfaceArea() const
{
   return width_ * height_;
}
