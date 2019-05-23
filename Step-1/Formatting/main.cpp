#include <iostream>
#include <string>

using namespace std;

int main()
{
   int n = 70;
   // std::dec and std::hex I/O manipulaters
   cout << "n = " << dec << n << " hex = " << hex << n << endl;
   cout << 255 << " reset to dec " << dec << 255 << endl;

   // Store default format status cout
   std::ios_base::fmtflags fmtf(cout.flags());

   // formatting booleans in text or value format
   bool bft = true;

   cout << "boolean bft = " << boolalpha << bft << ", " << not bft << endl;
   cout << "boolean bft = " << noboolalpha << bft << ", " << not bft << endl;
   cout << endl;

   // Restore default format status cout
   cout.flags(fmtf);

   // Formatting doubles
   double a = 3.1415926534;
   double b = 2019.0;
   double c = 1.123e-10; // scientific notation

   cout << "Default: \n" << a << "  " << b << "  " << c << endl << endl;
   for (int pcs = 0; pcs < 9; pcs++) {
      cout.precision(pcs);
      cout << a << "   " << b << "    " << c << endl;
   }
   cout.precision(5); // maximum number of digits == 5
   cout << "\nfixed:\n" << fixed << a << "  " << b << "  " << c << endl << endl;
   cout << "scientific:\n"
        << scientific << a << "  " << b << "  " << c << endl
        << endl;

   // Restore default format status cout
   cout.flags(fmtf);
   // Use cout member functions and format flags in namespace ios
   // ios::showbase will prefix hex values by 0x
   cout.flags(ios::right | ios::hex | ios::showbase);
   cout.width(30);
   cout.fill('.');
   cout << 100 << endl << 10000 << endl;

   cout.flags(ios::left | ios::dec | ios::showbase);
   cout.width(30);
   cout << 100 << endl << 10000 << endl;

   return 0;
}
