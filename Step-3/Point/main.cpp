#include "Point.h"

#include <array>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
   Point p1;
   Point p2(1, 2);
   Point p3(5, 5);

   cout << "p1 = ";
   p1.print();
   cout << endl << "p2 = ";
   p2.print();
   cout << endl << "p3 = ";
   p3.print();
   cout << endl << endl;

   // Arguments for points ctor are 3 anonymous Point objects and p2
   // in an initializer list.
   array<Point, 4> points = {{Point(), Point(1, 0), Point(0, 1), p2}};

   for (size_t i = 0; i < points.size(); i++) {
      for (size_t j = i + 1; j < points.size(); j++) {
         cout << "Distance points[" << i << "] to points[" << j
              << "] = " << points[i].distance(points[j]) << endl;
      }
   }
   cout << endl;

   return 0;
}
