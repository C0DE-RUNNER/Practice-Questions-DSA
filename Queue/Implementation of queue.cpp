#include <iostream>
using namespace std;
#define size 10
class Queue{
    int front,rear;
    public:
    int a[size];
    Queue(){
        front=-1;
        rear=-1;
    }
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
};

void Queue :: enqueue(int x){
    if(rear>=size){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(front==-1){
        a[++front]=x;
        rear=front;
    }
    else{
        a[++rear]=x;
    }
}

int Queue :: dequeue(){
    if(front==-1){
        cout<<"queue is empty"<<endl;
        return -1;
    }
    int x=a[rear];
    rear--;
    return x;
}

bool Queue :: isEmpty(){
    if(front==-1)
    return true;
    return false;
}

int main()
{
     Queue queue;
 
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
 
    cout << queue.dequeue() << " dequeued from queue\n";

    return 0;
}
