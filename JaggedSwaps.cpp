#include<bits/stdc++.h>

using namespace std;


bool isSortedArray(const vector<int>&arr){

    int n=arr.size();

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}


string checkPermutation(vector<int>& arr) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 1; i < arr.size() - 1; ++i) {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);

    if(isSortedArray(arr)){
        return "YES";
    }
    else{
        return "NO";
    }
}





int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int>permutation;

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            permutation.push_back(temp);
        }

        if(isSortedArray(permutation)){
            cout<<"YES"<<endl;
        }

        else {
            string res = checkPermutation(permutation);
            cout<<res<<endl;
        }    
        
    }

}