#include<iostream>
using namespace std;

class Product{
public: 
    int num1, num2;

    // Function to get data
    void getData(){
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        return;
    }

    // Function to calculate the product
    int product(){
        return num1*num2;
    }

    // Function to count the digits
    int countDigits(int n){
        int count=0;
        while(n!=0){
            n=n/10;
            count++;
        }
        if(count==0){
            return 1;
        }
        return count;
    }
};

int main(){
    Product p;  // Creation of object instance
    p.getData();
    int ans=p.product();
    cout<<"Product: "<<ans<<endl;
    cout<<"Count of digits: "<<p.countDigits(ans)<<endl;
    return 0;
}
