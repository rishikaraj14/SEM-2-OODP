#include <iostream>
using namespace std;

class Fraction{
private:
    int num1, num2, den1, den2;
    int prodNum, prodDen;
    char slash;

public:
    // Function to take the input
    int getData(){
        cout<<"Enter first fraction: ";
        cin>>num1>>slash>>den1;
        if(slash!='/'){
            cout<<"Invalid character found"<<endl;
            return -1;
        }

        cout<<"Enter second fraction: ";
        cin>>num2>>slash>>den2;
        if(slash!='/'){
            cout<<"Invalid character found"<<endl;
            return -1;
        }
        return 0;
    }

    void product(){
        prodNum=num1*num2;
        prodDen=den1*den2;
        cout<<"Product: "<<prodNum<<"/"<<prodDen<<endl;
        return;
    }
};

int main(){
    Fraction a;
    int check=a.getData();
    if(check==-1) return -1;
    a.product();
    return 0;
}
