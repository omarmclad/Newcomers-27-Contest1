#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c; 
    cin >> a >> b >> c;

    long long max_sum = 0;

    if (a % 3 == 0) max_sum = max(max_sum, a);
    if (b % 3 == 0) max_sum = max(max_sum, b);
    if (c % 3 == 0) max_sum = max(max_sum, c);

    if ((a + b) % 3 == 0) max_sum = max(max_sum, a + b);
    if ((a + c) % 3 == 0) max_sum = max(max_sum, a + c);
    if ((b + c) % 3 == 0) max_sum = max(max_sum, b + c);

    if ((a + b + c) % 3 == 0) max_sum = max(max_sum, a + b + c);

    cout << max_sum << "\n";

    return 0;
}
