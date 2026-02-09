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

int main() {
    Restaurant kfc{populateRestaurant()};
    return 0;
}

Restaurant populateRestaurant() {
    Restaurant temp;
    cout << "Enter the address: ";
    getline(cin, temp.address);

}
