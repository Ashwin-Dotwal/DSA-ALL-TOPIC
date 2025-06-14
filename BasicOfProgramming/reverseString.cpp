#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverseString(string &reverse)
{
  int s = 0;
  int e = reverse.size() - 1;
  while (s <= e)
  {
    swap(reverse[s], reverse[e]);
    s++;
    e--;
  }
}

int main()
{

  string reverse;
  cout << "enter string" << endl;
  cin >> reverse;

  reverseString(reverse);
  cout << reverse << "reverse string";

  return 0;
}