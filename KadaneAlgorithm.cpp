#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum=0;

    int max_val=INT_MIN;

    for(int j=0;j<n;j++){

        sum+=arr[j];

        if(sum>=max_val){
            max_val=sum;
        }

        if(sum<0){
            sum=0;
        }
    }

    cout<<max_val<<endl;

}
