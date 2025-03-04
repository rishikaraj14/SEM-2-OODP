#include<iostream>
using namespace std;

class ReverseArray{
public:
    void enterArray(int* arr, int n){
        cout<<"Enter N integers: ";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    }

    void reverseArray(int* arr, int n){
        int* start=arr;
        int* end=arr+n-1;
        while(start<end){
            int temp=*start;
            *start=*end;
            *end=temp;
            start++;
            end--;
        }
    }

    void displayArray(int* arr, int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    ReverseArray r;
    int arr[100];
    int n;
    cout<<"Enter the number of integers: ";
    cin>>n;

    r.enterArray(arr, n);
    cout<<"Original array: ";
    r.displayArray(arr, n);

    r.reverseArray(arr, n);

    cout<<"Reversed array: ";
    r.displayArray(arr, n);
    return 0;
}