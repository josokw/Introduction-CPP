#include <iostream>

// Namespaces are necessary in large programs.
// You can now use same names in different parts of programs.
// The C++ standard lib is implemented in the namespace std.
// The next example shows variables and functions in different namespaces:
// first and second.

namespace first {
int i = 1;
double d = 1.1;

void f()
{
   std::cout << "first namespace\n";
}
} // namespace first

namespace second {
int i = 2;
double d = 2.2;

void f()
{
   std::cout << "second namespace\n\n";
}
} // namespace second

// ::  scope resolution operator

double d = 3.3; // Global variable

int main()
{
   double d = 4.4; // Local variable in main()

   std::cout << "first::i = " << first::i << "  second::i = " << second::i
             << std::endl;
   std::cout << "local d = " << d << "  global ::d =" << ::d
             << "  first::d = " << first::d << "  second::d = " << second::d
             << std::endl
             << std::endl;

   first::f();
   second::f();

   return 0;
}
