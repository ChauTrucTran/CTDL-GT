#include <iostream>
using namespace std;
#define SIZE 100
class Queue
{
private:
int array[SIZE];
int front, rear;
public:
Queue()
bool isEmpty()
bool isFull()
void Enqueue(int x)
void Dequeue()
int Front()
int Rear()
void printQueue()
};
Queue()
{
front = -1;
rear = -1;
}
bool IsEmpty()
{
return (front == -1 && rear == -1);
}
bool IsFull()
{
return (rear+1)%MAX_SIZE == front ? true : false;
}
int Front()
{
if(front == -1)
{
cout<<"Error: cannot return front from
empty queue\n";
return -1;
}
return array[front];
}
int Rear()
{
if(rear == -1)
{
cout<<"Error: cannot return front from empty queue\n";
return -1;
}
return array[rear];
}
void Enqueue(int x)
{
cout<<"Enqueuing "<<x<<" \n";
if(isFull())
{
cout<<"Error: Queue is Full\n";
return;
}
if (isEmpty())
{
front = rear = 0;
}
else
{
rear = rear + 1;
}
array[rear] = x;
}
void Dequeue()
{
cout<<"Dequeuing \n";
if(isEmpty())
{
cout<<"Error: Queue is Empty\n";
return;
}
else if(front == rear )
{
rear = front = -1;
}
else
{
front = front + 1;
}
}
void printQueue()
{
cout<<"Queue: ";
for(int i = front; i <= rear; i++)
{
cout<<array[i]<<" ";
}
cout<<"\n\n";
}
void printQueue()
{
cout<<"Queue: ";
for(int i = front; i <= rear; i++)
{
cout<<array[i]<<" ";
}
cout<<"\n\n";
}
