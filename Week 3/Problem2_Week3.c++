#include<iostream>
using namespace std;

class Student{
private:
    int studentID;
    string name;
    int marks[5];

public:
    Student(int stuID, string name, int arr[]){
        studentID=stuID;
        this->name=name;
        for(int i=0; i<5; i++){
            marks[i]=arr[i];
        }
    }

    float calculateAverage(){
        float sum=0;
        for(int i=0; i<5; i++){
            sum+=marks[i];
        }
        return sum/5;
    }

    void displayDetails(){
        cout<<"Student ID: "<<studentID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: ";
        for(int i=0; i<5; i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        cout<<"Average Marks: "<<calculateAverage()<<endl;
    }
};

int main(){
    int arr1[5]={90,80,70,60,50};
    Student s1(1, "Rishi", arr1);
    s1.displayDetails();
    cout<<endl;

    int arr2[5]={85,75,65,55,45};
    Student s2(2, "Ranbir", arr2);
    s2.displayDetails();

    return 0;
}
