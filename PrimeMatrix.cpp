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


int min_moves_to_prime_row_or_column(vector<vector<int>>& matrix, int n, int m) {
    int min_moves = INT_MAX;
    vector<int> row_moves(n, 0), col_moves(m, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int current_val = matrix[i][j];
            if (!prime[current_val]) {
                auto it = lower_bound(primes.begin(), primes.end(), current_val);
                int moves_needed = *it - current_val;
                row_moves[i] += moves_needed;
                col_moves[j] += moves_needed;
            }
        }
    }
    for (int moves : row_moves) min_moves = min(min_moves, moves);
    for (int moves : col_moves) min_moves = min(min_moves, moves);

    return min_moves;
}



void solve() {
   
    sieve();
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int result = min_moves_to_prime_row_or_column(matrix, n, m);
    cout << result << endl;
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
