#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum from 1 to " << n << " = " << sum << '\n';
    return 0;
}
