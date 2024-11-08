#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the year to be checked: ";
    cin >> n;
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
        cout << "Leap year";
    } else {
        cout << "Not Leap year";
    }
    return 0;
}
