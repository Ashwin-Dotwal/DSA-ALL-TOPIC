#include <iostream>
#include <string>
using namespace std;
void printfibonacci(int n)
{

  int a = 5;
  int b = 6;

  // cout << "fibbonacci series up to " << n << "terms";

  for (int i = 0; i < n; i++)
  {
    cout << a << " ";
    int next = a + b;
    a = b;
    b = next;
  }
}

int main()
{

  int n;

  cout << "enter number" << endl;
  cin >> n;
  if (n <= 1)
  {
    cout << "pleace enter a positive integer " << endl;
  }
  else
  {
    printfibonacci(n);
  }
  return 0;
}
