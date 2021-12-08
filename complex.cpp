#include<iostream>
using namespace std;
template <class T>
class complex{
    private: 
        T a;
        T b;

        public:
        
        complex(T a , T b){
             this->a = a;
             this->b = b;
         }
        void display(){
             cout<<a <<"+ i"<<b<<"\n";
         }
         T real(){
             return a;
         }
         T imaginary(){
             return b;
         }
        complex<T> operator+(complex<T> x){
            complex<T> res(this->real()+x.real(), this->imaginary()+x.imaginary());
            return res;
        }
        complex<T> operator-(complex<T> x){
            complex<T> res(this->real()-x.real(), this->imaginary()-x.imaginary());
            return res;
        }
};
int main(){
    complex<int> c1(5,7);
    complex<int> c2(3,2);
    complex<int> res=c1-c2;
    c1.display();
    c2.display();
    res.display();
    return 0;
}