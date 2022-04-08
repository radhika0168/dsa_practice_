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
    int phone;

// behaviour
// constructor....default constructor 
    Human(){
        cout<<"Hii i am here!!!";
    }
    // parameterized constructor .....
    Human(string n, int a,int p){
         name = n;
         age = a;
         phone = p;
    }

    void sleep(){
        cout<<"I am sleeping";
    }
    void play(){
        cout<<"I am playing";
    }
    void eat(){
        cout<<"I am eating";
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
    // Human Satyam;
    // Satyam.sleep();
    // Sum s;
    // cout<<s.sum(3,5)<<endl;
    // cout<<s.sum(5.6,8.2)<<" ";
    // Satyam.setpin(9890);
    Human Satyam("satyam",21,887766);
    cout<<Satyam.name<<" "<<Satyam.age<<" "<<Satyam.phone<<" "<<endl;
    
    return 0;
}