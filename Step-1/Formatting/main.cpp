#include <iostream>
#include <string>

using namespace std;

int main()
{
   int n = 70;

   cout << "n = " << dec << n << " hex = " << hex << n << endl
        << "n = " << dec << n << " dec = " << dec << n << endl;

   // Use cout object functions and format flags in namespace ios
   cout.flags(ios::right | ios::hex | ios::showbase);
   cout.width(40);
   cout << 100 << endl << endl;

   cout.flags(ios::left | ios::dec | ios::showbase);
   cout.width(25);
   cout << 100 << endl << endl;

   // formatting booleans in text or value format
   bool bft = true;

   cout << "boolean bft = " << boolalpha << bft << endl;
   cout << "boolean bft = " << noboolalpha << bft << endl;
   cout << endl;

   // formatting doubles
   double a = 3.1415926534;
   double b = 2006.0;
   double c = 1.123e-10; // scientific notation

   cout.precision(5);
   cout << a << '\t' << b << '\t' << c << endl << endl;
   cout << fixed << a << '\t' << b << '\t' << c << endl << endl;
   cout << scientific << a << '\t' << b << '\t' << c << endl << endl;

   return 0;
}
