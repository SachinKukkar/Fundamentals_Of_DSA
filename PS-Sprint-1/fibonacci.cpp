#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms of the Fibonacci series: ";
    cin >> n;

    int a = 0;
    int b = 1;

    // Print the first term (0) if n is 1
    if (n >= 1) {
        cout << a << " ";
    }
    
    // Print the second term (1) if n is greater than 1
    if (n >= 2) {
        cout << b << " ";
    }

    // Print the rest of the Fibonacci terms
    for (int i = 3; i <= n; i++) {
        int temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }

    cout << endl;
    return 0;
}
