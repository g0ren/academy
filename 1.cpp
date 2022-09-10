#include <iostream>
using namespace std;

int main()
{
    double distance {0};
    cout << "Enter distance (km)" << endl;
    cin >> distance;
    double t {0};
    cout << "Enter time (h)" << endl;
    cin >> t;
    double speed = distance/t;
    cout << "Required speed is " << speed << " km/h." << endl;

    return 0;
}
