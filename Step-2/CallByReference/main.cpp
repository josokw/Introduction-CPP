/* C uses call by value for passing function arguments.
 * We need a call by reference for changing an argument value
 * outside the function.
 *
 * C++: new syntax for call by reference, without using pointers!
 */

#include <iostream>

// C and C++ call by value, won't swap, a and b are copied
void swapByValue(int a, int b);
// C and C++ call by reference using pointers, complex and error prone
void swap(int *pA, int *pB);
// C++ call by reference without pointers, function overloading
void swap(int &a, int &b);

using namespace std;

int main()
{
   int x = 2;
   int y = 3;

   cout << "Initial values              x = " << x << " y = " << y << "\n\n";
   // Call by value
   swapByValue(x, y);
   cout << "swapByValue(x, y);  Result: x = " << x << " y = " << y << "\n\n";

   x = 2;
   y = 3;
   // Call by reference, by pointers
   swap(&x, &y);
   cout << "swap(&x, &y);       Result: x = " << x << " y = " << y << "\n\n";

   x = 2;
   y = 3;
   // Call by reference, no pointers
   swap(x, y);
   cout << "swap(x, y);         Result: x = " << x << " y = " << y << "\n\n";

   return 0;
}

// Call by value
void swapByValue(int a, int b)
{
   int temp = a;
   a = b;
   b = temp;
}

// Call by reference using pointers
void swap(int *pA, int *pB)
{
   int temp = *pA;
   *pA = *pB;
   *pB = temp;
}

// Call by reference, no pointers anymore in the implementation
void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}
