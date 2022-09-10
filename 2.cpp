#include <iostream>
using namespace std;

int main()
{
    const int price = 2;
    int starth {0};
    cout << "Enter starting time (hours)" << endl;
    cin >> starth;
    int startm {0};
    cout << "Enter starting time (minutes)" << endl;
    cin >> startm;
    int starts {0};
    cout << "Enter starting time (seconds)" << endl;
    cin >> starts;
    
    int endh {0};
    cout << "Enter finishing time (hours)" << endl;
    cin >> endh;
    int endm {0};
    cout << "Enter finishing time (minutes)" << endl;
    cin >> endm;
    int ends {0};
    cout << "Enter finishing time (seconds)" << endl;
    cin >> ends;
    
    int totalseconds = 3600*(endh-starth) + 60*(endm-startm) + (ends-starts);
    int totalminutes = totalseconds / 60; 
    int totalcost = totalminutes * price;
    cout << "Total cost will be " << totalcost << " UAH" << endl;

    return 0;
}
