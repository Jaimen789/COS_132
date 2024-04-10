#include<iostream>
using namespace std;

int main(){
    float normalDay[4];
    float midWeek[4];
    float loyaltyCard[4];

    float midWeekFactor, loyaltyCardFactor;

    float *p = normalDay;
    //string *FreqCustomers = new string(n);

    for(int counter = 0; counter < 4 ; counter++){
        float price;

        while(price <= 0){
            cout << "Enter the base price of the item: " << counter + 1 << "(greater than 0): ";
            cin >> price;
        }

        *p = price; // store base price using the pointer

        while(midWeekFactor >= 0 || midWeekFactor <= 1 ){
            cout << "Enter the midweek factor for the item: " << counter + 1 << "(between 0 and 1): ";
            cin >> midWeekFactor;
        }

        p = midWeek;
        *p = price * midWeekFactor;

        while(loyaltyCardFactor >=0 || loyaltyCardFactor <= midWeekFactor){
            cout << "Enter loyalty card factor: " << counter + 1 << endl;
            cin >> loyaltyCardFactor;
        }

        p = loyaltyCard;
        *p = price * loyaltyCardFactor;

        p = normalDay;

    }

    // Output the updated arrays
    cout << "Normal Day Prices: ";
    for (int counter = 0; counter < 4; ++counter) {
        cout << normalDay[counter] << " ";
    }
    cout << endl;

    cout << "Mid-Week Prices: ";
    for (int counter = 0; counter < 4; ++counter) {
        cout << midWeek[counter] << " ";
    }
    cout << endl;

    cout << "Loyalty Card Prices: ";
    for (int counter = 0; counter < 4; ++counter) {
        cout << loyaltyCard[counter] << " ";
    }
    cout << endl;

    return 0;
}