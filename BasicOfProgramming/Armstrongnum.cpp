#include <iostream>
using namespace std;

int main()
{
  int num, sum = 0, temp, digit;

  cout << "Enter a 3-digit number: ";
  cin >> num;

  temp = num;

  // Calculate sum of cubes of digits
  while (temp > 0)
  {
    digit = temp % 10;
    sum += digit * digit * digit;
    temp /= 10;
  }

  // Check if it's an Armstrong number
  if (sum == num)
    cout << num << " is an Armstrong number." << endl;
  else
    cout << num << " is not an Armstrong number." << endl;

  return 0;
}
