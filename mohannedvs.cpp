#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mxs, mys, mxf, myf, mt;
    long long axs, ays, axf, ayf, at;

    cin >> mxs >> mys >> mxf >> myf >> mt;
    cin >> axs >> ays >> axf >> ayf >> at;

    long long dx1 = mxf - mxs;
    long long dy1 = myf - mys;

    long long dx2 = axf - axs;
    long long dy2 = ayf - ays;

    long long d1 = dx1 * dx1 + dy1 * dy1;
    long long d2 = dx2 * dx2 + dy2 * dy2;

    double speed1 = sqrt((double)d1) / mt;
    double speed2 = sqrt((double)d2) / at;

    cout << fixed << setprecision(6);

    if (speed1 > speed2) {
        cout << "Mohanned " << speed1 - speed2 << '\n';
    } else {
        cout << "Abdalraheem " << speed2 - speed1 << '\n';
    }

    return 0;
}
