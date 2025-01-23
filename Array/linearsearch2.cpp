#include <iostream>
using namespace std;
int main()
{
   int arr[5] = {1, 4, 5, 7, 9};
   int size = 5;
   cout << "enter the key" << endl;
   int key;
   cin >> key;
   bool flag = 0;
   for (int i = 0; i < size; i++)
   {
      if (arr[i] == key)
      {

         flag = 1;
         break;
      }
   }
   if (flag)
      cout << "found" << endl;
   else
      cout << "not found" << endl;

   return 0;
}