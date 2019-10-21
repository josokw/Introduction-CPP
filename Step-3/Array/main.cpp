// C++ class std::array<T, size> is a templated container class that
// encapsulates a fixed size array (no dynamic memory allocation).

#include <algorithm>
#include <array>
#include <iostream>
#include <limits>

using namespace std;

int maxArray(const array<int, 4> &data);
int maxArray2(const array<int, 4> &data);

int main()
{
   // array is a container templated class
   array<int, 4> a1{-1, 2, -3, 4}; // list initialisation
   array<int, 4> ar2{a1};          // copy ctor

   cout << "Max value in array a1 = " << maxArray(a1) << endl;
   cout << "Max value in array a1 = " << maxArray2(a1) << endl;

   cout << "All values in ar2 = ";
   // Range based for loop, no index anymore!
   // data contains the value of an ar2 element.
   for (auto element : ar2) {
      cout << element << " ";
   }
   cout << endl;
   cout << "Sorted ar2 = ";
   sort(begin(ar2), end(ar2));
   for (auto element : ar2) {
      cout << element << " ";
   }
   cout << endl;

   return 0;
}

int maxArray(const array<int, 4> &data)
{
   auto max = data[0]; // automatic type deduction

   for (auto i = 1; i < data.size(); i++) {
      if (data[i] > max) {
         max = data[i];
      }
   }

   return max;
}

// Modern C++ implementation, less code!
int maxArray2(const array<int, 4> &data)
{
   auto max = std::numeric_limits<int>::min();

   for (auto d : data) {
      max = std::max(max, d);
   }

   return max;
}
