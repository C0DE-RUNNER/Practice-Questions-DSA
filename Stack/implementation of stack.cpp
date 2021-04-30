#include<bits/stdc++.h>
using namespace std;

#define size 10

class Stack{
    int top;
    public:
    int arr[size];
    Stack(){
        top=-1;
    }    
    void push(int x);
    int pop();
    bool isEmpty();
    int peek();
};

void Stack :: push(int x){
    if(top>=size){
        cout<<"Stack overflow"<<endl;
        return;
    }
    arr[++top]=x;
}

bool Stack :: isEmpty(){
    if(top<0)
    return true;
    return false;
}

int Stack :: pop(){
    if(top<0){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    int x=arr[top];
    top--;
    return x; 
}
int Stack :: peek(){
    if(top<0){
        cout<<"stack is empty"<<endl;
    }
    return arr[top];
}

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        cout<<s.peek()<<" ";
        s.pop();
    }
 
    return 0;
}
