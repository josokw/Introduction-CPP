#ifndef POINT_H
#define POINT_H

// Never use 'using namespace std;' in header files

class Point
{
public:
   Point();
   Point(double x, double y);
   double get_x() const;
   double get_y() const;
   void set_x(double x);
   void set_y(double y);
   void print() const;

private:
   double x_;
   double y_;
};

#endif // POINT_H
