#include<iostream>
using namespace std;

class StudentMarks{
public:
    void enterMarks(int* arr, int n){
        cout<<"Enter marks of N students: ";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    }

    void displayMarks(int* arr, int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void calculateAverageMarks(int* arr){
        int sum=0;
        for(int i=0; i<6; i++){
            sum+=arr[i];
        }
        cout<<"Average marks of the class: "<<sum/6<<endl;
    }

    void findHighestAndLowestMarks(int* arr){
        int max=arr[0], min=arr[0];
        for(int i=0; i<6; i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        cout<<"Highest marks: "<<max<<endl;
        cout<<"Lowest marks: "<<min<<endl;
    }
};

int main(){
    cout<<"Student Marks Manager"<<endl;
    cout<<"1. Enter marks of N students"<<endl;
    cout<<"2. Calculate the average marks of the class"<<endl;
    cout<<"3. Find the highest and lowest marks"<<endl;
    cout<<"4. Exit"<<endl;

    StudentMarks s;
    int arr[100]={95,99,90,90,80,85};

    int ch;
    cout<<"Enter the choice: ";
    cin>>ch;

    if(ch==1){
        int n;
        cout<<"Enter number of students (1-100): ";
        cin>>n;
        s.enterMarks(arr,n);

        cout<<"Marks of N students: ";
        s.displayMarks(arr,n);
    }
    else if(ch==2){
        s.calculateAverageMarks(arr);
    }
    else if(ch==3){
        s.findHighestAndLowestMarks(arr);
    }
    else if(ch==4){
        cout<<"Exiting..."<<endl;
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
    return 0;
}
