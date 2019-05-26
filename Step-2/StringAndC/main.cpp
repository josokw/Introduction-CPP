#include <iostream>
#include <string>

// C++ string objects can be used as a C char array for C functions.

using namespace std;

// C function
int countChar(const char *str, char c);

int main()
{
   string str1 = "Hello C++ World";
   char c = '+';

   cout << "Counting " << c << " in \"" << str1 << "\" = "
        << countChar(str1.c_str(), c) << endl;

   return 0;
}

int countChar(const char *str, char c)
{
   int count = 0;
   int i = 0;

   while (str[i] != '\0') {
      if (str[i] == c) {
         count++;
      }
      i++;
   }
   return count;
}
