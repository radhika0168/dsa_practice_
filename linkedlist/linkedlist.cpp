#include<iostream>
using namespace std;

template <typename T>
class Node{
    public:
    T data;
    Node<T>* next;

    Node(T user_data){
        this->data = user_data;
        this->next = NULL;
    }

};

template<typename T>
class Linkedlist{

    private:
    Node<T>* head;
    int length;

    public:

    Linkedlist(){
        head=NULL;
        length=0;
    }

    int size(){
        return length;
    }

    void insertion_at_start(T data){
        Node<T>* ptr = new Node<T>(data);
        
        if(head==NULL){
           head = ptr;
        }
        else{
            ptr->next = head;
            head = ptr;
        }
        length++;
    }

    void insertion_at_end(T data){
        Node<T>* ptr = new Node<T>(data);
         
        if(head==NULL){
            head = ptr;
        }
        else{
            Node<T>* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr = temp;
            
        }
        length++;
    }

    T delete_at_head(){
        T deleted_data = NULL;

        if(head==NULL){
            cout<<"No data to be deleted....list is empty\n";
            
        }
        else if(head->next==NULL){
            deleted_data = head->data;
            delete(head);
            head=NULL;
            length--;
        }
        else{
            Node<T>*temp = head;
            head = head->next ;
            deleted_data = temp->data;
            delete(temp);
            length--;

        }
        return deleted_data;
       
    }

    T delete_at_end(){
        T deleted_item = NULL;

        if(head==NULL){
            cout<<"No item to be deleted...as list is empty";
        }
        else if(head->next==NULL){
            deleted_item = head->data;
            delete(head);
            head = NULL;
            length--;
        }
        else{
            Node<T>* temp = head;
            Node<T>* prev = head;
            while(temp->next->next!=NULL){
                prev = temp->next;
                temp = temp->next;
            }
            prev = temp;
            deleted_item = temp->next->data;
            temp=temp->next;
            delete(temp);
            prev->next = NULL;
            length--;

        }
        return deleted_item;
    }

    void insert_at_k(T data, T pos){
        if(pos>length){
            cout<<"enter valid position";
        }
        else if(head==NULL){
            cout<<"list is null";
        }
        
        else{
            Node<T>*temp = head;
            Node<T>*node = new Node<T>(data);
            while(--pos){
                temp=temp->next;
                // pos = pos-1;
            }
            node->next = temp->next;
            temp->next = node;
            length++;
        }
    }

      T delete_at_k(int pos){
        
        T deleted_item;
        if(head==NULL){
            cout<<"list ie empty!!!!...No element can't be deleted...";
        }
        else if(pos>length){
            cout<<"enter valid position";
        }
        else{
            Node<T>* temp = head;
            pos--;
            while(--pos){
                temp = temp->next;
            }
            deleted_item = temp->next->data;
            Node<T>* node = temp->next;
            temp->next = temp->next->next;
            delete(node);
            return deleted_item;
        }
    }

    void display(){
        Node<T>* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }
};

int main(){
    Linkedlist<int> l;
    // l.insertion_at_start(3);
    // l.display();
    // l.insertion_at_start(4);
    // l.display();
    //  l.insertion_at_start(100);
    // l.display();
    //  l.insertion_at_start(34);
    // l.display();

    l.insertion_at_end(3);
    l.display();
    l.insertion_at_end(4);
    l.display();
    l.insertion_at_end(100);
    l.display();
    l.insertion_at_end(34);
    l.display();
    // cout<<l.delete_at_head()<<"\n";
    // cout<<l.delete_at_head()<<"\n";
    // cout<<l.delete_at_head()<<"\n";
    // cout<<l.delete_at_head()<<"\n";
    // cout<<l.delete_at_head()<<"\n";

    // cout<<l.delete_at_end()<<"\n";
    // cout<<l.delete_at_end()<<"\n";
    // cout<<l.delete_at_end()<<"\n";
    // cout<<l.delete_at_end()<<"\n";
    // cout<<l.delete_at_end()<<"\n";
    l.insert_at_k(1,2);
    l.display();

    l.insert_at_k(2,5);
    l.display();

    //  cout<<l.delete_at_end()<<"\n";

    cout<<l.delete_at_k(3)<<"\n";
    l.display();

    return 0;
}