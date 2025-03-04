#include<iostream>
using namespace std;

class Car{
private:
    string brand, model;
    double price;
    int year;

public:
    Car(string brand, string model, double price, int year){
        this->brand=brand;
        this->model=model;
        this->price=price;
        this->year=year;
    }

    void displayCarInfo(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Year: "<<year<<endl;
    }

    static int totalCars;
};

int Car::totalCars=0;

int main(){
    Car c1("Toyota", "Corolla", 20000, 2021);
    c1.displayCarInfo();
    Car::totalCars++;
    cout<<endl;
    
    Car c2("Suzuki", "Cultus", 15000, 2020);
    c2.displayCarInfo();
    Car::totalCars++;
    cout<<endl;
    
    Car c3("Honda", "Civic", 25000, 2022);
    c3.displayCarInfo();
    Car::totalCars++;
    cout<<endl;

    cout<<"Total cars in inventory: "<<Car::totalCars<<endl;
    return 0;
}
