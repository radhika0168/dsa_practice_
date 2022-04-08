#include <iostream>
using namespace std;

template<typename T>
class devansh{
    public:
    devansh(){
        cout<<"Hii Mr.Devansh..!!!\n     (*_*)Hope you are having a productive day!!\n";
    }

};
int main() {
    devansh<string> devansh;
    // devansh.progress_message();
    string confirmation;
    cout<<"would u like to proceed further?(yes/no)\n";
    cin>>confirmation;
        if(confirmation=="yes" or confirmation=="Yes" or confirmation=="YES"){
            string c;
            cout<<"\nThanks for proceeding further..!!\n ...so basically there are few demands from your junior for you..\n";
            cout<<"Would you like to see those demands??(yes)\n";
            cin>>c;
            if(c=="yes" or c=="Yes" or c=="YES"){
            cout<<"\nFirst Demand: If there is a plan for attending college any day ...then call radhika she will give lift...she is always waiting for call...\n";
            cout<<"(*_*)\nNext demand: ";
            cout<<"If any new pic clicked ....plz send radhika...if possible";
            cout<<"\n(*-*)\nNext demand: Getting bored???...send a msg to radhika just say HIII....hahaha";
            }    
        }
        else if(confirmation=="no" or confirmation=="No" or confirmation=="NO"){
            cout<<"Ok no problem...Hope you will come back soon";
        }
        else{
            cout<<"Please enter a valid option sir ";
        }

    return 0;
}
