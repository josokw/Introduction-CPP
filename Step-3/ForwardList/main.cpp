#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
   forward_list<int> sll{1, 20, 300};

   for (auto &node : sll) {
      cout << node << endl;
   }
   cout << endl;

   sll.push_front(4000);
   for (auto &node : sll) {
      cout << node << endl;
   }
   cout << endl;

   sll.pop_front();
   sll.pop_front();
   for (auto &node : sll) {
      cout << node << endl;
   }
   cout << endl;

   return 0;
}