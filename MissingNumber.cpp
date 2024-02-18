#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    if(N == 0) {
        cout << "1" << endl; // Assuming sequence starts from 1 and N=0 means 1 is missing.
        return 0;
    }

    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    // If there's only one element, check if it's 1. If not, 1 is missing. Otherwise, 2 is missing.
    if(N == 1) {
        cout << ((arr[0] == 1) ? 2 : 1) << endl;
        return 0;
    }

    // Check for missing number in the sequence
    for(int i = 1; i < N; i++) {
        if(arr[i] - arr[i-1] > 1) {
            cout << arr[i] - 1 << endl;
            return 0;
        }
    }

    // If no missing number is found, the missing number is next after the last element.
    cout << arr[N-1] + 1 << endl;

    return 0;
}
