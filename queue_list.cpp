#include<iostream>
using namespace std;

class Node
{
   public:
   int data;
   Node *next;
   Node(int d)
   {
     data=d;
     next= NULL;
   }
};
class Queue
{
    public:
    Node *head;
    Queue()
    {
     head =NULL;
    }
    void display()
    {
        
        Node *ptr;
        ptr=head;
        
        while(ptr)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<"\n";
        
    }
    void enqueue(int d)
    {
        Node *ptr;
        ptr=head;
        Node *newnode = new Node(d);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
    void dequeue()
    {
        if(head==NULL)
        {
            cout<<"List is Empty.";
            return;
        }
        else
        {
            head=head->next;
        }
    }
    void show()
    {
        if(head==NULL)
        {
            cout<<"List is Empty.";
            return;
        }
        else
        {
            cout<<"\nThe front element is: "<<head->data<<"\n";
        }
    }
};
int main()
{
    Queue Q;
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.display();
    Q.show();
    Q.enqueue(40);
    Q.enqueue(70);
    Q.display();
    Q.dequeue();
    Q.display();
    Q.show();
    return 0;
}
