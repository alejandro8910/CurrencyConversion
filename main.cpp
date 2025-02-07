#include <iostream>
#include <iomanip>
using namespace std;


double convertCurrency(double amount, double rate) {
    return amount * rate;
}

int main() {
    double USD_TO_EUR = 0.85, USD_TO_GBP = 0.75, USD_TO_JPY = 110.0;
    double EUR_TO_USD = 1.18, GBP_TO_USD = 1.33, JPY_TO_USD = 0.0091;
    double amount;
    string from, to;

    cout << "Enter amount that will be exchanged: ";
    cin >> amount;
    cout << "Convert from (USD), (EUR), (GBP), (JPY): ";
    cin >> from;
    cout << "Convert to (USD), (EUR), (GBP), (JPY): ";
    cin >> to;

    double rate = 1.0;

    if (from == "USD" && to == "EUR") rate = USD_TO_EUR;
    else if (from == "USD" && to == "GBP") rate = USD_TO_GBP;
    else if (from == "USD" && to == "JPY") rate = USD_TO_JPY;
    else if (from == "EUR" && to == "USD") rate = EUR_TO_USD;
    else if (from == "GBP" && to == "USD") rate = GBP_TO_USD;
    else if (from == "JPY" && to == "USD") rate = JPY_TO_USD;
    else {
        cout << "Invalid Selection" << endl;
        return 1;
    }


    cout << fixed << setprecision(2);
    cout << "Converted amount: " << convertCurrency(amount, rate) <<endl;


    double promo = 1.10;
    double* ratePromotion = &rate;
    double* modRate = const_cast<double*>(ratePromotion);
    *modRate *= promo;

    cout <<"Promotional converted amount(BLACK FRIDAY SPECIAL): " << convertCurrency(amount, *modRate) << endl;
    cout<<"Have a nice day!"<<endl;

    return 0;
}


