#include<bits/stdc++.h>

using namespace std;



bool isSorted(vector<int> &arr){

	if(std::is_sorted(arr.begin(), arr.end())){

		return true;
	}
	else{
		return false;
	}
}

bool canSort(vector<int> &arr, int k){

	if(k>=2 || isSorted(arr)){

		return true;
	}

	else{
		return false;
	}


}

int main(){
	int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << (canSort(arr, k) ? "YES" : "NO") << endl;
    }
    return 0;
}