#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;

    long long ans = 1; 
    
    for(int i = 0; i < n; i++) {
        ans = (ans * 2) % MOD;
    }

    cout << ans << endl;

    return 0;
}
