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
    }
};
class operations
{
    public:
    Node *head;
    Node *ptr;
    void insertfirst(int d)
    {
        Node *newnode = new Node(d);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            newnode->next=head;
            head=newnode;
        }
        
    }
    void display()
    {
        Node *ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
    void insertafter(int key, int d)
    {
        Node *ptr;
        ptr=head;
        while(ptr->data!=key)
        {
            if(ptr->next==NULL)
            {
                cout<<"Key not found";
                return;
            }
            ptr=ptr->next;
        }
        Node *newnode=new Node(d);
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
    void insertlast(int d)
    {
        Node *ptr;
        ptr=head;
        Node *newnode = new Node(d);
        newnode->next=NULL;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
};
int main()
{
    operations o;
    o.insertfirst(4);
    o.insertfirst(3);
    o.insertafter(3,5);
    o.insertlast(1);
    o.display();
    return 0;
}
