#include <iostream>
#include <string>
using namespace std;

int countVowels(const string &s)
{
  int count = 0;
  for (char c : s)
  {
    c = tolower(c); // Make case-insensitive
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
      ++count;
    }
  }
  return count;
}

int main()
{
  string input;
  cout << "Enter a string: ";
  getline(cin, input); // allows spaces
  int vowelCount = countVowels(input);
  cout << "Number of vowels: " << vowelCount << endl;
  return 0;
}
