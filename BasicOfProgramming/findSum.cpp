#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter number" << endl;

  cin >> n;
  int sum = 0;
  for (int i = 2; i <= n; i += 1)
  {

    sum = sum + i;
  }

  cout << sum << endl;
}