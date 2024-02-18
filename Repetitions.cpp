#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int maxLen = 1, currentLen = 1;

    // Start from the second character and compare it with the previous one
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            // If the current character is the same as the previous, increase the current length
            currentLen++;
        } else {
            // If not, update the max length if the current length is greater and reset the current length
            maxLen = max(maxLen, currentLen);
            currentLen = 1;
        }
    }

    // Update the max length for the last repetition, if it's the longest
    maxLen = max(maxLen, currentLen);

    cout << maxLen << endl;
    
    return 0;
}
