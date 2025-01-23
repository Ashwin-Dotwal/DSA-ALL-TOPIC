#include <iostream>
#include <queue>
using namespace std;

int main()
{
  // creation

  queue<int> q;

  // insertion
  q.push(5);
  q.push(15);
  q.push(25);
  q.push(35);
  q.push(45);
  q.push(55);

  // size
  cout << "size of queue " << q.size() << endl;

  // removel
  q.pop();

  cout << "size of queue " << q.size() << endl;
  // check queue is empty or not
  if (q.empty())
  {
    cout << "q is empty" << endl;
  }
  else
  {
    cout << "q is not empty" << endl;
  }

  // print front element
  cout << "front element is " << q.front() << endl;

  // print back element
  cout << "back element is " << q.back() << endl;
  return 0;
}