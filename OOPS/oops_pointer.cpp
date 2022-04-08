#include<iostream>
using namespace std;

// private class meh ...you can't change the value of thr variable untill and unless u don't know about the function which can change the value of that variable ....hence this improves the security level of the program or of that variable ..
class Human{
     public:

// properties........
    int legs;
    int ears;
    int height;
    string name;
    int age;
    int phone,standard;

// behaviour
// constructor....default constructor 
    Human(){
        cout<<"Hii i am here!!!\n";
        this->standard = 5;
    }
    // parameterized constructor .....
    Human(string n, int a,int p, int s){
         name = n;
         age = a;
         phone = p;
        //standard = s;
    }

    void hii(int age, int phone, int standard){
        cout<< age<< " "<< phone<<" "<<this->standard;
    }

    void sleep(){
        cout<<"I am sleeping";
    }
    

    void setpin(int x){
        cout<<"enter your password: ";
        string p;
        cin>>p;
        if(p==password){
            pin = x;
            cout<<pin<<endl;
        }
        else{
            cout<<"enter correct password";
        }
    }

    private:
    int pin;
    int salary;
    string password="radhika";
    
};
// polymorphism.......
class Sum{
    public:
        int sum(int a, int b){
            return a+b;
        }
        float sum(float a, float b){
            return a+b;
        }
        float sum(double a,double b){
            return a+b;
        }
};

int main(){
    // satyam is an object which is having a class human
    Human Satyam;
    // Human jeenesh("jeenesh",12,67676900,12);
    // Satyam.sleep();
    // Sum s;
    // Satyam.setpin(9890);
    // Human Satyam("satyam",21,887766);
    Human *p = new Human("satyam",21,8879,4);

    // cout<<Satyam.name<<" "<<Satyam.age<<" "<<Satyam.phone<<" "<<endl;
    cout<< p->name <<" "<< p->age <<" "<< p->phone <<" "<<p->standard<<endl;
    // cout<<jeenesh.name<<" "<<jeenesh.age<<" "<<jeenesh.phone<<" "<<jeenesh.standard<<endl;
    // understanding the concept of "this" ...
    Satyam.hii(10,545,2);
    
    return 0;
}