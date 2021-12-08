#include<iostream>
using namespace std;


class A{
    public:
      void hii(){
          cout<<"Hii from A,this is compile time binding";
      }


      virtual void hello(){
          cout<<"this is runtime binding";
      }
};

class B: public A{
    public :
    int x;

    void hii(){
        cout<<" hii from B,this is compile time binding";
    }
    void hello(){
          cout<<"hii from B,this is runtime binding";
      }
};

int main(){
    // B* p = new B;
    // p->x = 20;
    // cout<<p->x<<" ";
    // p->hii();

// in this case c is a pointer initialized to the class A however it is an object of class B but first it will act as pointer to the class A during compilation time.
    A* c = new B;
    c->hii();

    cout<<"\n";
// in this case z is a pointer intialized to the class A however it is an object of class B but when it checks virtual keyword it understands that now it have to work according the dynamic memory allocation.
// which means that now B have to work according to class B , so it will return the hello function of the B .
    A *z =  new B;
    z-> hello();
    return 0;
}