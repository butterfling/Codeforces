
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);

    vector<int> res(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    res[0]=arr[0];

    int curr_sum=res[0];

    for(int i=1;i<n;i++){

        int ele = arr[i]-curr_sum;

        res[i]=ele;
        curr_sum+=ele; 

    }

    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}

