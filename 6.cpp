#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long y1, m1, d1;
    long long y2, m2, d2;
    
    if (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2) {
        long long total_days1 = y1 * 360 + m1 * 30 + d1;
        long long total_days2 = y2 * 360 + m2 * 30 + d2;
        
        long long diff = total_days1 - total_days2;
        
        long long y_diff = diff / 360;
        long long m_diff = (diff % 360) / 30;
        long long d_diff = diff % 30;
        
        bool first = true;
        
        if (y_diff > 0) {
            cout << y_diff << (y_diff == 1 ? " Year" : " Years");
            first = false;
        }
        
        if (m_diff > 0) {
            if (!first) cout << " ";
            cout << m_diff << (m_diff == 1 ? " Month" : " Months");
            first = false;
        }
        
        if (d_diff > 0) {
            if (!first) cout << " ";
            cout << d_diff << (d_diff == 1 ? " Day" : " Days");
        }
        
        cout << "\n";
    }
    
    return 0;
}
