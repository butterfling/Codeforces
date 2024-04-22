#pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include <numeric>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define set_bits __builtin_popcountll
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
    for(int i=static_cast<int>(sqrt(N)) + 1; i <= N; i++) {
        if(prime[i]) {
            primes.push_back(i);
        }
    }
}

/*****************************************************************************************************************************/


void printB(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<nline;
}


bool is_set(unsigned int n,int x){
    return (n>>x)&1;
}

void solve() {

    int n;
    cin >> n;
    vector<int> a(n+1);
    map<int,int> mp;
    for (int i = 1;i<=n;i++){
        cin >> a[i];
        mp[a[i]] = i;
    }
    vector<pair<int,int>> ans;
    for (int i = 1;i<=n;i++){
        if (i!=a[i]){
            ans.push_back({mp[i],mp[a[i]]});
            int x = mp[i];
            int y = mp[a[i]];
            mp[i] = y;
            mp[a[i]] = x;
            swap (a[x],a[y]);
        }
    }
    cout<<ans.size()<<nline;
    for(auto [x,y]:ans){
        cout<<min(x,y)<<" "<<max(x,y)<<nline;
    }
}   

int main(){
    #ifdef Saahilrathore
        freopen("Saahil.txt", "w", stderr);
    #endif
        fastio();
        solve();
}