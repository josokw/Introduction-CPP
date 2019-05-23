#include <iostream>
#include <string>

// C++ string type: defined in a class, looks like a C struct but now also
// contains functions (member class functions).
// The contained string is an dynamic array (can be resized during run time.

using namespace std;

int main()
{
   string str = "Hello C++ World"; // str is a string object

   cout << str << endl;

   str += " and a lot of developers";
   cout << str << endl;

   // Can be used as an C char array and index operator []
   str[10] = 'w';
   cout << str << "  str[12] = " << str[12] << endl;

   str.clear();
   str = "New text";
   cout << str << "  " << str.substr(0, 3) << "  " << endl
        << str.erase(0, 4) << endl;
   cout << str << endl;

   str.replace(1, 2, "QWERTY");
   cout << str << endl;

   return 0;
}
