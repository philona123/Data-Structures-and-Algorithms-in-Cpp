#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};
class Doubly
{
    public:
    Node *head;
    Node *last;
    Doubly()
    {
        head=NULL;
        last=NULL;
    }
    void insertfirst(int d)
    {
        Node *newnode=new Node(d);
        if(head==NULL)
        {
            head=newnode;
            last=newnode;
            return;
        }
        else
        {
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    void insertafter(int d, int key)
    {
        Node *newnode=new Node(d);
        if(head==NULL)
        {
            head=newnode;
            last=newnode;
            newnode->next=NULL;
            newnode->prev=NULL;
            return;
        }
        else if (last->data==key)
        {
            last->next=newnode;
            newnode->prev=last;
            last=newnode;
            newnode->next==NULL;
        }
        
        else
        {
            Node *ptr;
            ptr=head;
            while(ptr->data!=key)
            {
                if(ptr->next==NULL)
                {
                    cout<<"\nKey not found.";
                    return;
                }
                ptr=ptr->next;
            }
            Node *ptr1;
            ptr1=ptr->next;
            newnode->prev=ptr;
            newnode->next=ptr->next;
            ptr1->prev=newnode;
            ptr->next=newnode;
        }
    }
    void traverseforward()
    {
        Node *ptr;
        ptr=head;
        if(head==NULL)
        {
            cout<<"\nList is Empty.";
            return;
        }
        else
        {
            while(ptr!=NULL)
            {
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            }
            cout<<"\n";
        }
    }
    void traverseback()
    {
        Node *ptr;
        ptr=last;
        if(head==NULL)
        {
            cout<<"\nList is empty\n";
            return;
        }
        else
        {
            while(ptr!=NULL)
            {
                cout<<ptr->data<<" ";
                ptr=ptr->prev;
            }
            cout<<"\n";
        }
    }
    void insertlast(int d)
    {
        Node *newnode=new Node(d);
        if(head==NULL)
        {
            head=newnode;
            last=newnode;
            return;
        }
        else
        {
            last->next=newnode;
            newnode->prev=last;
            last=newnode;
            newnode->next=NULL;
        }
    }
    void deletefirst()
    {
        if(head==NULL)
        {
            cout<<"\nList is Empty\n";
            return;
        }
        else 
        {
            head=head->next;
            head->prev=NULL;
        }
    }
    void deletenode(int d)
    {
        if(head==NULL)
        {
            cout<<"\nList is Empty\n";
            return;
        }
        else if(head->data==d)
        {
            head=head->next;
            head->prev=NULL;
        }
        else if(last->data==d)
        {
            last=last->prev;
            last->next=NULL;
        }
        else
        {
            Node *ptr;
            ptr=head;
            while(ptr->data!=d)
            {
                if(ptr->next==NULL)
                {
                    cout<<"\nNode not found\n";
                    return;
                }
                ptr=ptr->next;
            }
            Node*ptr1;
            ptr1=ptr->prev;
            Node *ptr2;
            ptr2=ptr->next;
            ptr1->next=ptr->next;
            ptr2->prev=ptr1;
        }
    }
    void deletelast()
    {
        if(head==NULL||last==NULL)
        {
            cout<<"\nList is Emty\n";
            return;
        }
        else
        {
            last=last->prev;
            last->next=NULL;
        }
    }
};
int main()
{
    Doubly D;
    D.insertfirst(10);
    D.insertfirst(20);
    D.insertfirst(30);
    D.insertafter(9,20);
    D.traverseforward();
    D.traverseback();
    D.insertlast(40);
    D.traverseforward();
    D.insertafter(50,40);
    D.traverseforward();
    D.deletefirst();
    D.traverseforward();
    D.deletenode(10);
    D.traverseforward();
    D.deletelast();
    D.traverseforward();
    return 0;
}
