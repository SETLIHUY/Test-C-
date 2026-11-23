// Project: Movie Ticket Booking System
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // variable for store
    string name , seatType;
    int age, quantity; 
    double ticketPrice, priceSeat;

    cout << "===== Welcome to Moive =====\n";
    // 1.ទទួលឈ្មោះអតិថិជន (name)។
    cout << "Enter customer name: "; getline(cin, name) ;

    // 2.ទទួលអាយុ (age)។
    cout << "Enter age: "; cin >> age;

    // 7.ប្រសិនបើអាយុតិចជាង 0 ត្រូវបង្ហាញ Invalid Age។
    if (age < 0) {
        cout << "Invalid Age: " << age << "\n";
    } else {

        // 3.ទទួលប្រភេទកៅអី (seatType)។
        cout << "Enter seat type (Normal/VIP): "; cin >> seatType;

        // 8.ប្រសិនបើប្រភេទកៅអីមិនត្រឹមត្រូវ ត្រូវបង្ហាញ Invalid Seat Type។
        if (seatType == "VIP" || seatType == "Normal") {

            // 9.បញ្ចូលចំនួនសំបុត្រ (quantity) ហើយគណនាតម្លៃសរុប។
            cout << "Enter quantity: "; cin >> quantity;
            cout << "=============================\n\n";

            if (quantity <= 0 ) {
                cout << "Invalid quantity : " << quantity << "\n";
            } else {
                // 4.កំណត់តម្លៃសំបុត្រ៖
                if (age <= 12) {
                    ticketPrice = 3.00;
                } else if (age <= 18) {
                    ticketPrice = 4.00;
                } else if (age > 18) {
                    ticketPrice = 5.00;
                }

                // 5.ប្រភេទកៅអី VIP បន្ថែម $2។
                if (seatType == "VIP") {
                    priceSeat = 2.00;
                }  else if (seatType == "Normal") {
                    priceSeat = 0.00;
                } 
                
                // 6.បង្ហាញវិក្កយបត្រចុងក្រោយ។
                cout << "\n===== MOVIE TICKET =====\n";
                cout << "Customer: " << name << "\n";
                cout << "Age: " << age << "\n";
                cout << "Seat: " << seatType << "\n";
                cout << "Ticket Price: $" << ticketPrice << "\n";
                cout << "VIP Charge: $" << priceSeat << "\n";
                cout << "------------------------\n";
                cout << "Total Price: $" << (ticketPrice + priceSeat) * quantity << "\n";
                cout << "========================\n";
            }
            
        } else {
            cout << "Invalid Seat Type: " << seatType << "\n";
        }   

    }

    return 0;
}