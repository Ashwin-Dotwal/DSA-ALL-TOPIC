#include <iostream>
using namespace std;
class dqueue
{
public:
  int *arr;
  int size;
  int front;
  int rear;

  dqueue(int size)
  {
    this->size = size;
    arr = new int[size];
    front = -1;
    rear = -1;
  }
  void pushrear(int data)
  {
    // queue full

    // single elementcase->firstelement

    // circuler nature

    // normal flow

    if (front == 0 && rear == size - 1)
    {
      cout << "queue is full" << endl;
      return;
    }
    else if (front == -1)
    {
      front = rear = 0;
    }
    else if (rear == size - 1 && front != 0)
    {
      rear = 0;
    }
    else
    {
      rear++;
    }
    arr[rear] = data;
  }
  // for push front data

  void pushfront(int data)
  {

    if (front == 0 && rear == size - 1)
    {
      cout << "queue is full" << endl;
      return;
    }
    else if (front == -1)
    {
      front = rear = 0;
    }
    else if (front == 0 && rear != size - 1)
    {
      front = size - 1;
    }
    else
    {
      front--;
    }
    arr[front] = data;
  }
  // for pop front
  void popfront()
  {
    if (front == -1)
    {
      cout << "queue is empty,cannot pop" << endl;
      return;
    }
    else if (front == rear)
    {
      arr[front] = -1;
      front = -1;
      rear = -1;
    }
    else if (front == size - 1)
    {
      front = 0;
    }
    else
    {
      front++;
    }
  }

  // pop rear

  void pop()
  {
    if (front == -1)
    {
      cout << "queue is empty,cannot pop" << endl;
      return;
    }
    else if (front == rear)
    {
      arr[front] = -1;
      front = -1;
      rear = -1;
    }
    else if (rear == 0)
    {
      rear = size - 1;
    }
    else
    {
      rear--;
    }
  }

  void print()
  {
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};
int main()
{
  dqueue dq(10);
  dq.print();

  dq.pushrear(10);
  dq.pushrear(20);
  dq.pushrear(30);
  dq.pushrear(40);
  dq.pushrear(50);
  dq.pushrear(60);
  dq.pushrear(70);
  dq.pushrear(80);
  dq.pushrear(90);
  dq.pushrear(100);

  dq.print();
  return 0;
}