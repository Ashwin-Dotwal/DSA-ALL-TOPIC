#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &palindome)
{
  int s = 0;
  int e = palindome.size() - 1;

  while (s <= e)
  {
    if (palindome[s] != palindome[e])
      return false;
    s++;
    e--;
  }
  return true;
}

int main()
{
  string palindrome;
  cout << "enter string :" << endl;

  cin >> palindrome;

  if (isPalindrome(palindrome))

    cout << "string is palindrom" << endl;

  else
  {
    cout << "string is not palindrom" << endl;
  }

  return 0;
}
