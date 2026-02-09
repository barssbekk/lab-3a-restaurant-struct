// COMSC-210 | Lab 3A | Barsbek
#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;

struct Restaurant {
    string address;
    int rating;
    int numSeats;
    bool alcohol;
    double deliveryFee;
};

Restaurant populateRestaurant();
void printRestaurant(const Restaurant& userRestaurant);

int main() {
    Restaurant kfc{populateRestaurant()};
    printRestaurant(kfc);
    return 0;
}

Restaurant populateRestaurant() {
    Restaurant temp;
    cout << "Enter the address: ";
    getline(cin, temp.address);

    cout << "Enter rating: ";
    cin >> temp.rating;
    while (temp.rating > 10 || temp.rating < 0) {
        cout << "Please, rate 0-10: ";
        cin >> temp.rating;
    }
    cin.ignore();

    cout << "Enter the number of seats: ";
    cin >> temp.numSeats;
    while (temp.numSeats < 0) {
        cout << "It can't be negative! Try again: ";
        cin >> temp.numSeats;
    }
    cin.ignore();

    cout << "Alcohol? Y/N: ";
    char input;
    cin >> input;
    input = toupper(input);
    while (input != 'Y' && input != 'N') {
        cout << "Wrong input! Try again.\n Y/N only: ";
        cin >> input;
        input = toupper(input);
    }

    cout << "Enter the delivery fee: ";
    cin >> temp.deliveryFee;
    cin.ignore();

    if (input == 'Y')
        temp.alcohol = true;
    else
        temp.alcohol = false;

    return temp;
}

void printRestaurant(const Restaurant& userRestaurant) {
    cout << "-------------------------------\n";
    cout << "\tAddress: " << userRestaurant.address << '\n';
    cout << "\tRating: " << userRestaurant.rating << '\n';
    cout << "\tNumber of Seats: " << userRestaurant.numSeats << '\n';
    cout << "\tAlcohol: ";
    if (userRestaurant.alcohol)
        cout << "Yes";
    else
        cout << "No";
    cout << '\n';
    cout << fixed << setprecision(2);
    cout << "\tDelivery Fee: " << userRestaurant.deliveryFee << '\n';
    cout << "-------------------------------\n";
}