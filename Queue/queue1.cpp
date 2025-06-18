#include <iostream>
#include <queue>
using namespace std;

int main()
{
  // creation
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);

  cout << "size of queue" << q.size() << endl;
  q.pop();
  cout << "size of queue" << q.size() << endl;
  cout << "front of the queue" << q.front() << endl;

  if (q.empty())
  {
    cout << "queue is empty" << endl;
  }
  else
  {
    cout << "queue is not empty" << endl;
  }
  return 0;
}