#include <iostream>
#include <string>

// C++ string type: defined in a class, looks like a C struct but now also
// contains functions (class member functions) besides data members.
// The contained string is an dynamic array (can be resized during run time).

using namespace std;

// Counting the number of char c in str (call by reference).
int countChar(const string &str, char c);

int main()
{
   // C++11 uniform initialisation  {...}
   string str1{"Hello C++ World"}; // str is a string object

   cout << "1. str1 = " << str1 << endl;

   str1 += " and a lot of developers";
   cout << "2. str1 = " << str1 << endl;

   // Can be used as an C char array and index operator []
   str1[10] = 'w';
   cout << "3. str1 = " << str1 << ", str1[7] = " << str1[7] << endl;

   str1.clear();
   // Assign C-style string to string object
   str1 = "New text";
   cout << "4. str1 = " << str1 << "  str1.substr(0, 3) = " << str1.substr(0, 3)
        << "  " << endl;
   str1.erase(0, 4);
   cout << "5. str1 = " << str1 << endl;

   str1.replace(1, 2, "QWERTY");
   cout << "6. str1 = " << str1 << endl;

   // C++11 uniform initialisation
   string str2{"Blah blah blah"};
   // Assign one string object to another, copy str1 to str2
   str2 = str1;
   cout << "7. str2 = " << str2 << endl;

   // Compare two strings
   if (str1 == str2) {
      cout << "8. str1 equals str2" << endl;
   }

   char c = 't';
   cout << "9. counted '" << c << "' in str1 = " << countChar(str1, c) << endl;

   return 0;
}

int countChar(const string &str, char c)
{
   int count = 0;

   for (size_t i = 0; i < str.size(); i++) {
      if (str[i] == c) {
         count++;
      }
   }
   return count;
}
 
// int countChar(const string &str, char c)
// {
//    int count = 0;
      // C++11 range based for loop, string container class
//    for (const auto c_in_str: str) {
//       if (c_in_str == c) {
//          count++;
//       }
//    }
//    return count;
// }
