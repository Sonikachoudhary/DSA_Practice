#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    bool isPrime = n >= 2;
    for (int divisor = 2; divisor <= n / divisor && isPrime; ++divisor) {
        if (n % divisor == 0) {
            isPrime = false;
        }
    }

    if (isPrime) {
        cout << n << " is prime.\n";
    } else {
        cout << n << " is not prime.\n";
    }
    return 0;
}
