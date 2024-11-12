#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;

    int originalNumber = n;
    int sum = 0;
    int numDigits = 0;

    // Find the number of digits in the number
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        numDigits++;
    }

    // Calculate the sum of digits raised to the power of the number of digits
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        int powerResult = 1;
        
        // Calculate digit raised to the power of numDigits manually
        for (int i = 0; i < numDigits; i++) {
            powerResult *= digit;
        }
        
        sum += powerResult;
        temp = temp / 10;
    }

    // Check if the number is an Armstrong number
    if (sum == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    } else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }

    return 0;
}
