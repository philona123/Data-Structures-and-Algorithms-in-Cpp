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
    class operations
    {
        public:
        Node *head;
        operations() {
            head =NULL;
        }
        void insertfirst(int d)
        {
            Node *newnode = new Node(d);
        
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
        
        while(ptr)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<"\n";
        
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
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
    void deletefirst()
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
    void deletenode(int d)
    {
        Node *ptr;
        Node *ptr1;
        ptr=head;
        if(head->data==d)
        {
            head=head->next;
            return;
        }
        while(ptr->data!=d)
        {
            if(ptr->next==NULL)
            {
                cout<<"Node not found.\n";
                return;
            }
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=ptr->next;
    }
    void deletelast()
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
};
int main() {
    operations o;
    o.insertfirst(4);
    o.insertfirst(3);
    o.insertafter(3,5);
    o.insertlast(1);
    o.insertlast(7);
    o.deletenode(4);
    o.display();
    o.deletelast();
    o.display();
    return 0;
}
