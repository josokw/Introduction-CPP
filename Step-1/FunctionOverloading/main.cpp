// Always only include necessary header files.
#include <iostream>

// Namespace std for C++ standard lib
using namespace std;

// Function overloading (in C every function should have a unique name).
// In C++ function can have the same name but the parameter lists must be
// different.
int add(int i1, int i2);
int add(int i1, int i2, int i3);

int main()
{
   cout << "add(2, 5) = " << add(2, 5) << endl;
   cout << "add(3, 5, 7) = " << add(3, 5, 7) << endl;

   int input = 5;
   int result = 2 * add(add(1, 2), input);

   cout << add(input, 4) << " " << result << endl;

   return 0;
}

int add(int i1, int i2)
{
   return i1 + i2;
}

int add(int i1, int i2, int i3)
{
   return i1 + i2 + i3;
}
