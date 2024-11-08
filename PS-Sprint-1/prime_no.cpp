#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not prime";
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime";
    } else {
        cout << "Not prime";
    }

    return 0;
}
