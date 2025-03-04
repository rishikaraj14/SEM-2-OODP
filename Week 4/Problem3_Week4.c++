#include<iostream>
using namespace std;

class MovieTicket{
public:
    string movieName;
    int seatNumber;
    float price;
    bool isBooked;

    MovieTicket(string movieName, int seatNumber, float price){
        this->movieName=movieName;
        this->seatNumber=seatNumber;
        this->price=price;
        this->isBooked=false;
    }

    void bookTicket(){
        if(isBooked){
            cout<<"Ticket is already booked"<<endl;
        }
        else{
            isBooked=true;
            cout<<"Ticket booked successfully"<<endl;
        }
    }

    void cancelTicket(){
        if(isBooked){
            isBooked=false;
            cout<<"Ticket cancelled successfully"<<endl;
        }
        else{
            cout<<"Ticket is not booked"<<endl;
        }
    }

    void displayTicketDetails(){
        cout<<"Movie Name: "<<movieName<<endl;
        cout<<"Seat Number: "<<seatNumber<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Is Booked: "<<isBooked<<endl;
    }

    ~MovieTicket(){
        cout<<"Ticket object deleted"<<endl;
    }
};

int main(){
    MovieTicket ticket1("Avengers", 1, 200);
    MovieTicket ticket2("Iron", 2, 150);

    ticket1.displayTicketDetails();
    ticket1.bookTicket();
    cout<<endl;
    ticket2.displayTicketDetails();
    ticket2.bookTicket();
    cout<<endl;
    ticket1.cancelTicket();
    ticket1.displayTicketDetails();
    cout<<endl;
    ticket2.cancelTicket();
    ticket2.displayTicketDetails();
    cout<<endl;
    return 0;
}
