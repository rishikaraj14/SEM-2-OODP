#include<iostream>
using namespace std;

class Product{
public:
    int productID, quantity;
    string productName;
    float price;

    Product(){
        productID=0;
        productName="Default Product";
        price=0.0;
        quantity=0;
    }

    Product(int id, string n, float p, int q){
        productID=id;
        productName=n;
        price=p;
        quantity=q;
    }

    void calculateTotalPrice(){
        cout<<"Total Price: "<<price*quantity<<endl;
    }

    ~Product(){
        cout<<"Product object removed"<<endl;
    }
};

void displayProductDetails(Product p[], int n){
    for(int i=0; i<n; i++){
        cout<<"Product ID: "<<p[i].productID<<endl;
        cout<<"Product Name: "<<p[i].productName<<endl;
        cout<<"Price: "<<p[i].price<<endl;
        cout<<"Quantity: "<<p[i].quantity<<endl;
        p[i].calculateTotalPrice();
        cout<<endl;
    }
}

int main(){
    Product p[2];
    displayProductDetails(p, 2);
    return 0;
}
