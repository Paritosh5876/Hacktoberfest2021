#include<iostream>
using namespace std;

class queue
{
public:
    int size;
    int front = -1;
    int rear = -1;
    int* Q;
    void enqueue(int x, int size);
    int dequeue();
    void display();
};

void queue :: enqueue(int x, int size)/* int s*/
{
    if(rear==size-1)
        cout<<"queue is full"<<endl;
    else
    {
       rear++;
       Q[rear] = x;
    }
}
int queue :: dequeue()
{
    int x;
    if(front==rear)
        cout<<"stack is empty "<<endl;
    else
    {
       front++;
       x = Q[front];
    }
}
void queue :: display()
{
    for(int i=0 ; i>front && i<=rear ; i++)
    {
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  int size;
  queue q;
  cout<<"enter size "<<endl;
  cin>>size;
//  q.enqueue(10);
// q.enqueue(11);
  q.enqueue(12,size);
  q.enqueue(13,size);
  q.dequeue();
  q.display();
}