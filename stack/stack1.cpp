#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<int> st;
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
}