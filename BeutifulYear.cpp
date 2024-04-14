#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include <numeric>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

bool uniqueDigits(int n){

    unordered_map<int,bool> check;
    int temp=n;
    while(temp>0){
        if(check[temp%10]){
            return false;
        }
        check[temp%10]=true;
        temp=temp/10;
    }
    return true;
}

void solve() {
    
   int n,ans=0;
   cin>>n;
   while(n<INT_MAX){
        n++;
        if(uniqueDigits(n)){
            ans=n;
            break;
        }
   }
   cout<<ans<<nline;

}

int main(){


    #ifdef Saahilrathore
        freopen("Saahil.txt", "w", stderr);
    #endif
        fastio();
        auto start1 = high_resolution_clock::now();

        // while(t--){
           solve();
        // }
        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);
    #ifdef Saahilrathore
        cerr << "Time: " << duration . count() / 1000 << endl;
    #endif

}
