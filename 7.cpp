#include <iostream>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    // The unit digits of 7^n for n = 0, 1, 2, 3...
    // 7^0 = 1
    // 7^1 = 7
    // 7^2 = 49 (ends in 9)
    // 7^3 = 343 (ends in 3)
    // 7^4 = 2401 (ends in 1, cycle repeats!)
    int last_digits[] = {1, 7, 9, 3};

    // n % 4 will always return 0, 1, 2, or 3
    cout << last_digits[n % 4] << "\n";

    return 0;
}
