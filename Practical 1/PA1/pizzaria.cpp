#include <iostream>

using namespace std;

int main(){
    
    double base_pizza = 40.00;
    double add_olives = 15.50;
    double add_onions = 11;
    double add_cheese = 12.30;
    double add_salami = 22.00;
    double add_shrimps = 25.40;

    double budget = 100.00;
    double invoice = 0.00;

    int user_input = 0;

    double update_budget = 0.00;
    double update_invoice = 0.00;

    cout << "Welcome to Antonio's Pizzaria!" << endl;
    
    //update budget and invoice
    update_budget = budget - base_pizza;
    update_invoice = invoice + base_pizza;
    cout << "=============================================" << endl;
    cout << "Your current invoice " << endl;
    cout << "Budget: " << update_budget << endl;
    cout << "Invoice: " << update_invoice << endl;
    cout << "=============================================" << endl;


    if (update_invoice >= 40 && update_budget >= 0 ){
        cout << "Would you like to add olives? (y = 1/n = 2)" << endl;
        cin >> user_input;

        if (user_input == 1){
            update_budget = update_budget - add_olives;
            update_invoice = update_invoice + add_olives;
        }

        cout << "=============================================" << endl;
        cout << "Your current invoice " << endl;
        cout << "Budget: " << update_budget << endl;
        cout << "Invoice: " << update_invoice << endl;
        cout << "=============================================" << endl;
    }else{
        cout << "You don't have enough money to add olives" << endl;
    }

    if (update_invoice >= 40.00 && update_budget >= 0.0 ){
        cout << "Would you like to add onions? (y = 1/n = 2)" << endl;
        cin >> user_input;

        if (user_input == 1){
            update_budget = update_budget - add_onions;
            update_invoice = update_invoice + add_onions;
        }

        cout << "=============================================" << endl;
        cout << "Your current invoice " << endl;
        cout << "Budget: " << update_budget << endl;
        cout << "Invoice: " << update_invoice << endl;
        cout << "=============================================" << endl;
    }else{
        cout << "You don't have enough money to add onions" << endl;
    }

    if (update_invoice >= 40.00 && update_budget >= 0.0 ){
        cout << "Would you like to add cheese? (y = 1/n = 2)" << endl;
        cin >> user_input;

        if (user_input == 1){
            update_budget = update_budget - add_cheese;
            update_invoice = update_invoice + add_cheese;
        }

        cout << "=============================================" << endl;
        cout << "Your current invoice " << endl;
        cout << "Budget: " << update_budget << endl;
        cout << "Invoice: " << update_invoice << endl;
        cout << "=============================================" << endl;
    }else{
        cout << "You don't have enough money to add cheese" << endl;
    }

    if (update_invoice >= 40.00 && update_budget >= 0.0){
        cout << "Would you like to add salami? (y = 1/n = 2)" << endl;
        cin >> user_input;

        if (user_input == 1){
            update_budget = update_budget - add_salami;
            update_invoice = update_invoice + add_salami;
        }

        cout << "=============================================" << endl;
        cout << "Your current invoice " << endl;
        cout << "Budget: " << update_budget << endl;
        cout << "Invoice: " << update_invoice << endl;
        cout << "=============================================" << endl;
    }else{
        cout << "You don't have enough money to add salami" << endl;
    }


    if (update_invoice >= 40.00 && update_budget >= 0.0){
        cout << "Would you like to add shrimp? (y = 1/n = 2)" << endl;
        cin >> user_input;

        if (user_input == 1){
            update_budget = update_budget - add_shrimps;
            update_invoice = update_invoice + add_shrimps;
        }

        cout << "=============================================" << endl;
        cout << "Your current invoice " << endl;
        cout << "Budget: " << update_budget << endl;
        cout << "Invoice: " << update_invoice << endl;
        cout << "=============================================" << endl;
    }else{
        cout << "You don't have enough money to add shrimp" << endl;
    }

    return 0;
}