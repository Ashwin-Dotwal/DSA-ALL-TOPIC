#include <iostream>
using namespace std;

int main()
{
  int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int B[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  int C[2][2] = {0};

  // Multiply A x B
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  // Output
  cout << "Product of matrices:\n";
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
