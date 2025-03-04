#include<iostream>
using namespace std;

class Employee{
public:
    int empID;
    string name, designation;
    float salary;

    Employee(int empID, string name, float salary, string designation){
        this->empID=empID;
        this->name=name;
        this->salary=salary;
        this->designation=designation;
    }

    Employee(const Employee &e){
        empID=e.empID;
        name=e.name;
        salary=e.salary;
        designation=e.designation;
    }

    void displayDetails(){
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Designation: "<<designation<<endl;
    }

    ~Employee(){
        cout<<"Employee object deleted"<<endl;
    }
};

int main(){
    Employee e1(1, "John", 50000, "Manager");
    Employee e2(e1);

    e1.displayDetails();
    cout<<endl;
    e2.displayDetails();
}
