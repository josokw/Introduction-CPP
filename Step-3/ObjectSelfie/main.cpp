#include <iostream>

// Class Selfie shows the memory allocation of its data and functions.
// Every object has its own this pointer.
class Selfie
{
public:
   // static data mutatedby a static function, can not be const.
   // static data and functions are not accessable by a this pointer.
   static int getCommon() { return common_s; }

   Selfie() = default;

   void f() { i1_++; }

   void show() const
   {
      std::cout << "this         = " << this << std::endl;
      std::cout << "&common_s    = " << &common_s << std::endl;
      std::cout << "&i1_         = " << &i1_ << std::endl;
      std::cout << "&getCommon() = "
                << reinterpret_cast<void *>(&Selfie::getCommon) << std::endl;
      std::cout << "&show()      = " << reinterpret_cast<void *>(&Selfie::show)
                << std::endl;
      std::cout << "&f()         = "
                << reinterpret_cast<const void *>(&Selfie::f) << std::endl;
      std::cout << std::endl;
   }

private:
   // Static class data members are shared by all objects of the class.
   // There is only one in memory available.
   static int common_s;
   int i1_;
};

// Static data is already available when no objects exist.
int Selfie::common_s = 100;

// Global Selfie object
Selfie s0;

int main()
{
   std::cout << "Object selfie: pointers to member data and functions\n\n";
   std::cout << "Size of a Selfie object = " << sizeof(Selfie) << " bytes\n\n";

   std::cout << "Shared commnon_s = " << Selfie::getCommon() << "\n\n";

   std::cout << "---- Memory info s0 (global):\n";
   s0.show();

   std::cout << "---- Memory info s1:\n";
   Selfie s1;
   s1.show();

   std::cout << "---- Memory info s2:\n";
   Selfie s2;
   s2.show();

   return 0;
}
