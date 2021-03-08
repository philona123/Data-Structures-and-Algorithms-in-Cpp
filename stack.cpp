#include<iostream>
using namespace std;
class Stack
{
    int a[100];
    int size,top;
    public:
    Stack()
    {
        top=0;
        size=10;
    }
    void push(int item)
    {
        if(top>size)
        {
            cout<<"\nStack overflow";
            return;
        }
        else
        {
            top=top+1;
            a[top]=item;
        }
    }
    void pop()
    {
        if(top<=0)
        {
            cout<<"\nStack underflow";
            return;
        }
        else
        {
            cout<<"\n"<<a[top]<<" is popped\n";
            top=top-1;
        }
    }
    void display()
    {
        for(int i=1;i<=top;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    void peek()
    {
        cout<<"\nThe top element is: "<<a[top]<<"\n";
    }
};
int main()
{
    Stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    S.peek();
    S.display();
    S.pop();
    S.display();
    S.peek();
    return 0;
}
