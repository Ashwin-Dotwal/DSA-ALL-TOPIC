#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isprime(int n)
{
  if (n <= 1)
    return false;

  if (n % 2 == 1)
  {
    return true;
  }
  return false;
}

int main()
{
  int n;
  cout << "enter the value" << endl;

  cin >> n;
  if (isprime(n))
  {
    cout << "number is prime" << endl;
  }

  else
  {

    cout << "not a Prime" << endl;
  }

  return 0;
}