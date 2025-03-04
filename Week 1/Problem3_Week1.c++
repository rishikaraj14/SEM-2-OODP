#include <iostream>
using namespace std;

class Activities{
public:
    int num;

    // Function to take the input
    void getNum(){
        cout<<"Enter the number: ";
        cin>>num;
        return;
    }

    // Function to calculate the cube
    void calc(){
        while(num%2!=0 || num%3!=0){
            cout<<"Cube of "<<num<<" is: "<<(num*num*num)<<endl;
            getNum();
        }
        cout<<"EXIT"<<endl;
        return;
    }
};

int main(){
    Activities a;
    a.getNum();
    a.calc();
    return 0;
}
