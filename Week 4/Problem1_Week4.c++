#include<iostream>
#include<string>
using namespace std;

class Book{
public:
    int bookID;
    string title, author;
    float price;

    Book(){
        bookID=0;
        title="Default Title";
        author="Default Author";
        price=0.0;
    }

    Book(int id, string t, string a, float p){
        bookID=id;
        title=t;
        author=a;
        price=p;
    }

    void displayBookInfo(){
        cout<<"Book ID: "<<bookID<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main(){
    Book b1;
    b1.displayBookInfo();
    cout<<endl;

    Book b2(1, "Sherlock Holmes", "Arthur Conan Doyle", 500.0);
    b2.displayBookInfo();
    return 0;
}
