#include <iostream>
using namespace std;

int main()
{
    double distance {0};
    cout << "Enter distance (km)" << endl;
    cin >> distance;
    
    double consumption {0};
    cout << "Enter fuel consumption (l per km)" << endl;
    cin >> consumption;
    
    double price1 {0};
    cout << "Enter the price of 88 octane gas ($ per l): ";
    cin >> price1;
    
    double price2 {0};
    cout << "Enter the price of 95 octane gas ($ per l): ";
    cin >> price2;
    
    double price3 {0};
    cout << "Enter the price of diesel fuel ($ per l): ";
    cin >> price3;
    
    double totalcons = distance * consumption;
    double cost1 = totalcons * price1;
    double cost2 = totalcons * price2;
    double cost3 = totalcons * price3;
    cout << endl;
    cout << "Petrol type | Total trip cost" << endl <<
            "-----------------------------" << endl <<
            "88 octane   | " << cost1       << endl <<
            "95 octane   | " << cost2       << endl <<
            "Diesel      | " << cost3       << endl;

    return 0;
}
