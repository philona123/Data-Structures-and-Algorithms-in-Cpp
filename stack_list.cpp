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
class Stack
{
    public:
    Node *head;
    Stack()
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
    void push(int d)
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
    void pop()
    {
        Node *ptr;
        Node *ptr1;
        ptr=head;
        if(head==NULL)
        {
            cout<<"List is Empty.\n";
            return;
        }
        else
        {
            while(ptr->next!=NULL)
            {
                ptr1=ptr;
                ptr=ptr->next;
            }
            ptr1->next=NULL;
        }
    }
    void peek()
    {
        Node *ptr;
        Node *ptr1;
        ptr=head;
        if(head==NULL)
        {
            cout<<"List is Empty.\n";
            return;
        }
        else
        {
            while(ptr->next!=NULL)
            {
                ptr1=ptr;
                ptr=ptr->next;
            }
            cout<<"the top of the stack is: "<<ptr->data<<"\n";
        }   
    }
};
int main() {
    Stack S;
    S.push(1);
    S.push(7);
    S.push(8);
    S.push(10);
    S.push(11);
    S.display();
    S.peek();
    S.pop();
    S.display();
    S.peek();
    S.pop();
    S.peek();
    S.display();
    S.push(13);
    return 0;
}
