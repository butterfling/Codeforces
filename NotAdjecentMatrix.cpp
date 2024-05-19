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
const int N=1e5+7;
vector<int> primes;
vector<bool> prime(N+1,true);

void sieve(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=N;i++){
        if(prime[i]){
            primes.push_back(i);
            for(ll j=(ll)i*i;j<=N;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i = static_cast<int>(sqrt(N)) + 1; i <= N; i++) {
        if (prime[i]) {
            primes.push_back(i);
        }
    }
}   

void solve() {
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<vector<int>>mat(n,vector<int>(n));
        int odd=1,even=2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(odd<=n*n){
                   mat[i][j]=odd;
                   odd+=2;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                   mat[i][j]=even;
                   even+=2;
                }
            }
        }

        if(n==2){
            cout<<-1<<nline;
        }

        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<mat[i][j]<<" ";
                }
                cout<<nline;
            }
        }

    }
}

int main(){


    #ifdef Saahilrathore
        freopen("Saahil.txt", "w", stderr);
    #endif
        fastio();
        auto start1 = high_resolution_clock::now();
        solve();
        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);
    #ifdef Saahilrathore
        cerr << "Time: " << duration . count() / 1000 << endl;
    #endif

}