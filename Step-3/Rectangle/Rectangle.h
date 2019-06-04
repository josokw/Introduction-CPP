#ifndef RECTANGLE_H
#define RECTANGLE_H

// Class Rectangle represents a rectangle.
// A rectangle has 2 attributes: width and height.
class Rectangle
{
public:
   // default ctor
   Rectangle();
   // overloaded constructor
   Rectangle(double width, double height);

   // setters and getters
   double getWidth() const;
   void setWidth(double width);
   double getHeight() const;
   void setHeight(double height);

   void print() const;
   double surfaceArea() const;

private:
   double width_;
   double height_;
};

#endif
