#include<iostream>
using namespace std;

class Product{
private:
    int productID;
    string productName;
    double price;
    int quantity;

public:
    Product(int prodID, string prodName, double price, int quantity){
        productID=prodID;
        productName=prodName;
        this->price=price;
        this->quantity=quantity;
    }

    double calculateTotalPrice(){
        return price*quantity;
    }

    void productDetails(){
        cout<<"Product ID: "<<productID<<endl;
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Total Price: "<<calculateTotalPrice()<<endl;
    }
};

int main(){
    Product p1(568, "Keyboard", 1549.50, 5);
    p1.calculateTotalPrice();
    p1.productDetails();
    cout<<endl;

    
    Product p2(777, "Mouse", 599.699, 14);
    p2.calculateTotalPrice();
    p2.productDetails();
    return 0;
}
