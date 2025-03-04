#include<iostream>
using namespace std;

class Activities{
public:
    int temp;

    // Function to get the data
    void getData(){
        cout<<"Enter the temperature: ";
        cin>>temp;
        return;
    }

    // Function for activities
    void activity(){
        if(temp>=80){
            cout<<"Swimming"<<endl;
        }
        else if(temp>=60 && temp<80){
            cout<<"Tennis"<<endl;
        }
        else if(temp>=40 && temp<60){
            cout<<"Golf"<<endl;
        }
        else if(temp<40){
            cout<<"Skiing"<<endl;
        }
        return;
    }
};

int main(){
    Activities a;  // Creation of object instance
    a.getData();
    a.activity();
    return 0;
}
