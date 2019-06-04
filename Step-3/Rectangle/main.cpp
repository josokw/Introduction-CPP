#include "Rectangle.h"

#include <iostream>

using namespace std;

int main()
{
   Rectangle r1;
   Rectangle r2(1.0, 3.0);

   r1.setWidth(r2.getWidth() * r2.getWidth());

   cout << "r2 = ";
   r2.print();
   cout << endl;
   cout << "Surface area r2 = " << r2.surfaceArea() << endl;

   return 0;
}
