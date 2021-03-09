#include<iostream>
using namespace std;
class Queue
{
    int a[10];
    int size, front, rear;
    public:
    Queue()
    {
        rear=0;
        front=0;
        size=10;
    }
    void enqueue(int item)
    {
        if(rear>size)
        {
            cout<<"\nQueue is full.";
            return;
        }
        else
        { 
            a[rear]=item;
            rear=rear+1;
        }
        return;
    }
    void dequeue()
    {
        if(front==rear)
        {
            cout<<"\nQueue is Empty.";
            return;
        }
        else
        {
            cout<<"\n"<<a[front]<<" is removed";
            front=front+1;
        }
    }
    void display()
    {
        if(front==rear)
        {
            cout<<"\nQueue is Empty.";
            return;
        }
        else
        {
            for(int i=front;i<rear;i++)
            {
              cout<<a[i]<<" ";
            }
        }
    }
};
int main()
{
    Queue Q;
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    Q.enqueue(50);
    Q.display();
    Q.dequeue();
    Q.dequeue();
    Q.display();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.display();
    return 0;
}
