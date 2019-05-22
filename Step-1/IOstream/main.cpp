// C++ program

// Interfaces to the C++ standard lib: header files without .h
#include <cmath>
#include <iostream>

// Namespace std for C++ standard lib
using namespace std;

int main()
{
   // Output streams, cout = console out, data stream to stdout.
   cout << "Hello C++ World!" << endl;

   // No C programming format specifiers %d %lf %s %p etc. anymore.
   // The C++ compiler will solve this for the developer.
   cout << "One = " << 1 << endl << "PI = " << M_PI << endl << endl;

   // Input stream, cin = console in, data stream from stdin.
   int data;
   cout << "Enter integer: ";
   cin >> data;
   cout << "data = " << data << endl;
   cout << "10.5 * data = " << 10.5 * data << endl;

   return 0;
}
