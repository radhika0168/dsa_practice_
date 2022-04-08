#include<iostream>
using namespace std;

template<class T>
class Queue{
    private:
        int size;
        int front;
        int rear;
        int arrsize=10000;
        T* arr;
    
    public:
        Queue(){
            size=0;
            front=-1;
            rear=-1;
            arr=new T[100000];

        }

        void enqueue(T element){
            if(rear==arrsize-1){
                cout<<"queue is full\n";
                return;
            }
            rear++;
            arr[rear] = element;
        }

        T dequeue(){
            if(front==rear){
                cout<<"Queue is empty\n";
                return -1;
            }
            front++;
            return arr[front];
        }

        T top(){
            if(front==rear){
                cout<<"Your queue is empty\n";
                return NULL;
            }
            return arr[front+1];
        }
        
};
int main(){
    Queue<int>q;
    q.enqueue(5);
    q.enqueue(6);
    cout<<q.dequeue()<<"\n";
    cout<<q.dequeue()<<"\n";
    q.enqueue(1);
    cout<<q.top();
    cout<<q.dequeue()<<"\n";
    cout<<q.dequeue()<<"\n";
    return 0;
}