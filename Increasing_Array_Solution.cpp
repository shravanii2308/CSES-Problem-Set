#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    int N;
    ll x, mx, sum;
    
    cin >> N;
    cin >> mx;

    for (int i = 1; i < N; i++) {
        cin >> x;
        mx = max(mx, x);
        sum += (mx - x);
    }
    
    cout << sum << endl;
    return 0;
}
