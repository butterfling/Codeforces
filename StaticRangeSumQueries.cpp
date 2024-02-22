
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q;
    cin>>n>>q;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<long long> prefixSum(n+1);

    prefixSum[0]=0;

    for(int j=1;j<=n;j++){
        prefixSum[j]= prefixSum[j-1]+arr[j-1];
    }



    while(q--){

        int a,b;
        cin>>a>>b;

        long long res= prefixSum[b]-prefixSum[a-1];

        cout<<res<<endl;

    }

   
}

