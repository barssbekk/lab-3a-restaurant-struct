// COMSC-210 | Lab 3A | Barsbek
#include <iostream>
#include <string>
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
    cout << kfc.alcohol;

    return 0;
}

Restaurant populateRestaurant() {
    Restaurant temp;
    cout << "Enter the address: ";
    getline(cin, temp.address);

    cout << "Enter rating: ";
    cin >> temp.rating;
    cin.ignore();

    cout << "Enter the number of seats: ";
    cin >> temp.numSeats;
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
