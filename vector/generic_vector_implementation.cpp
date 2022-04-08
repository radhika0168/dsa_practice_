#include<iostream>
using namespace std;

template<typename T>

class vector{
    private:
    T* arr;
    int curr_size;
    int counter;

    public:
    vector(){
        arr = new T[2];
        curr_size = 2;
        counter= 0;
    }

    T push(T data){
        if(curr_size==counter){
            T* temp = new T[curr_size*2];

            for(int i=0;i<curr_size;i++){
                temp[i] = arr[i];
            }

            T* temp2 = arr;
            arr = temp;
            delete(temp2);
            curr_size*=2;

       }
        arr[counter] = data;
        counter++;
    }

    T size(){
        return counter;
    }

    void display(){
        for(int i=0;i<counter;i++){
            cout<<arr[i]<<" , ";
        }
        cout<<"\n";
    }

    T pop(){

        if(counter==0){
            cout<<"No elemented to deleted ..vector is empty!!!...";
            return 0;
        }

        if(2*counter==curr_size){
            T* temp = new T[curr_size/2];

            for(int i=0;i<curr_size/2;i++){
                temp[i] = arr[i];
            }

            T* temp2 = arr;
            arr = temp;
            delete(temp2);
            curr_size/=2;
        }

        //  int deleted_item = arr[counter-1];
        // arr[counter-1] = -1;
        counter--;
        // return deleted_item;
        return arr[counter];
    }

    T get(T index){
        if(index>counter){
            cout<<"Invalid index";
        }

        return arr[index];
    }

   
};

int main(){
    
    vector<int> arr;
    arr.push(1);
    arr.display();

    arr.push(2);
    arr.display();

    arr.push(3);
    arr.display();
    
    arr.push(4);
    arr.display();

    cout<<arr.size();

    cout<<"\n"<<arr.pop()<<"\n";
    cout<<arr.size();

    cout<<"\n"<<arr.pop()<<"\n";
    cout<<arr.size();

    cout<<"\n"<<arr.get(0);

    return 0;
}