#include<iostream>
using namespace std;

template<typename T>
class Node{
    public:
        T data;
        Node<T>* next;
        Node(T data){
            this->data = data;
            this->next = NULL;
        }
};

template<typename T>
class Linkedlist{
    private:
        int size=0;
        Node<T>* head;
    public:
        Linkedlist(){
            head=NULL;
        }

        void insert(T data){
            Node<T>* temp= new Node(data);
            if(head==NULL){
                head = temp;
            }
            else{
                Node<T>* curr = head;
                while(curr->next){
                    curr = curr->next;
                }
                curr->next = temp;
            }
        }

        void display(){
            Node<T>* start = head;
            if(start==NULL){
                cout<<"List is empty!!!\n";
            }
            while(start!=NULL){
                cout<< start->data <<" ";
                start = start->next;
            }
            cout<<"\n";
        }

        void change(){
            if(head==NULL){
                return ;
            }
            Node<T>* temp = head;
            Node<T>*prev = head;
            while(temp->next!=NULL){
                prev = prev->next;
                temp = prev->next;
            }
            prev->next = NULL;
            temp->next = head;
            head = temp;
        }

};
int main(){
    Linkedlist<int> L;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        L.insert(data);
    }
    L.display();
    L.change();
    L.display();
    return 0;
}