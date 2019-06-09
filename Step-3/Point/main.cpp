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
         double delta_x = points[i].get_x() - points[j].get_x();
         double delta_y = points[i].get_y() - points[j].get_y();
         double distance =
            sqrt(delta_x * delta_x + delta_y * delta_y);

         cout << "Distance points[" << i << "] to points[" << j
              << "] = " << distance << endl;
      }
   }
   cout << endl;

   return 0;
}
