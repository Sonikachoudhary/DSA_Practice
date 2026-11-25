#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer (0 to 20): ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Please enter a number from 0 to 20.\n";
        return 0;
    }

    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    cout << n << "! = " << factorial << '\n';
    return 0;
}
