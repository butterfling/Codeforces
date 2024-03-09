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

#ifdef Saahilrathore
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef __int128 ell;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#define  rep(i,a,b) for (int i=a;i<b;i++);


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 
/*--------------------------------------------------------------------------------------------------------------------------*/


// void stringPermutations(vector<vector<char>>&ans, vector<char>&ds, const string &s, vector<bool> &freq){

//     //base case when 

//     //['a', 'b']

//     if(ds.size()==s.size()){  

//         ans.push_back(ds);

//         return;
//     }

//     int n=s.size();

//     for(int i=0;i<n;i++){

//         if(!freq[i]){
//             ds.push_back(s[i]);
//             freq[i]=1;
//             stringPermutations(ans, ds, s, freq);
//             freq[i]=0;
//             ds.pop_back();
//         }
//     }

// }


// vector<vector<char>> permute(const string &s){

//     vector<vector<char>> ans;
//     vector<char> ds;

//     int n=s.size();
//     vector<bool> freq(n, false);

//     stringPermutations(ans,ds, s, freq);

//     return ans;
// }



// vector<bool> sieveOfErostostheses(int n){

//     vector<bool> prime(n+1, true);

//     for(int i=2;i*i<=n;i++){

//         if(prime[i]){

//             for(int j=i;j<=n;j+=i){
//                 prime[j]=false;
//             }
//         }
//     }

//     return prime;

// }


// void coinPiles(int a, int b, int flag){

//     if(a==0 && b==0){
//         cout<<"YES"<<nline;
//         return;
//     }

//      if (a < 0 || b < 0 || (a == 0 && b % 2 != 0) || (b == 0 && a % 2 != 0)) {
//         cout << "NO" <<nline;
//         return;
//     }

//     if(flag==0){
        
//         coinPiles(a-2,b-1,!flag);
//     }

//     if(flag==1){
//         coinPiles(a-1,b-2,!flag);
//     }

// }


// void productExceptSelf(vector<int>& nums) {

//         int n= nums.size();
//         vector<int> leftArr(n+1);
//         vector<int> rightArr(n+1);

//         leftArr[0]=1;
//         rightArr[n-1] = 1;

//         for(int i=1;i<=n;i++){
//             leftArr[i] = leftArr[i-1]*nums[i-1];
//         }

//         for(int j=n-2;j>=0;j--){
//             rightArr[j] = rightArr[j+1]*nums[j];
//         }

//         for(const auto &it: rightArr){
//             cout<<it<<endl;
//         }

//         // vector<int> ans;

//         // for(int i=0;i<ans.size();i++){

//         //     ans.push_back(leftArr[i]*rightArr[i])
//         // }

//         // return ans;
        
// }















// int findMissingElement(const vector<int> &arr){

//     int n=arr.size();
//     vector<bool>elements(n+1, false);

//     for(int i=0;i<n;i++){
        
//         if (arr[i] <= n && arr[i] > 0) { 
//             elements[arr[i]] = true;
//         }
//     }

//     for(int i=1;i<=n;i++){
//         if(!elements[i]){
//             return i;
//         }
//     }

//     return n+1;
// }

// bool isPowerOfTwo(long long n){

//     return (n && !(n&(n-1)));
// }


// string toBinaryString(int num, int n) {
//     return bitset<64>(num).to_string().substr(64 - n); 
// }



// bool compare(pair<int, int> &a, pair<int, int> &b){

//     return a.second>b.second;

// }


void TowerOfHanoi(int n, int firstTower, int AuxillaryTower, int DestinationTower){

    if(n<=0){
        return;
    }

    TowerOfHanoi(n-1, firstTower, DestinationTower, AuxillaryTower);
    cout<<firstTower<<" "<<DestinationTower<<nline;
    TowerOfHanoi(n-1, AuxillaryTower, firstTower, DestinationTower);
    
}


void solve() {
    
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int xor_sum=0;

    for(int i=0;i<n;i++){
        xor_sum = xor_sum ^ arr[i];
    }

    cout<<xor_sum<<nline;

    


    // vector<int> charFreq(26, 0);

    // int n=str.size();

    // for(int i=0;i<n;i++){
        
    //     if(str[i]!=' '){
    //         int index = str[i]-'a';
    //         charFreq[index]++;
    //     }
    // }

    // for(const auto &it:charFreq){
    //     cout<<it<<" ";
    // }

     
    // int n;
    // cin>>n;

    // vector<int> arr(n);

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }


    // map<int, int> mp;

    // for(int i=0;i<n;i++){
    //     mp[arr[i]]++;
    // }


    // vector<pair<int, int>> p;


    // for(const auto&it : mp){
    //     p.push_back(it);
    // }


    // sort(p.begin(), p.end(), compare);

    
 


    // vector<int> ans;

    // for(auto &it: p){

    //     while(it.second--){
    //         ans.push_back(it.first);
    //     }
    // }


    // // for(const auto &it: mp){

    // //     cout<<it.first<<" " <<it.second<<endl;
    // // }

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
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








// class Solution {
// public:

//     vector<int> greaterEle(vector<int> &nums2){

//         stack<int> st;
//         vector<int> ans;

//         for(int i=nums2.size()-1; i>=0; i--) {

//             while(!st.empty() && nums2[i] >= st.top()) {
//                 st.pop();
//             }

//             if(st.empty()) {
//                 ans.push_back(-1);
//             } else {
//                 ans.push_back(st.top());
//             }

//             st.push(nums2[i]);
//         }

//         reverse(ans.begin(), ans.end());
//         return ans;

//     }

//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      
//         vector<int> solution;
//         vector<int> finalans = greaterEle(nums2);

//         for(int i=0; i<nums1.size(); i++) {
//             int index = find(nums2.begin(), nums2.end(), nums1[i]) - nums2.begin();
//             if(index != nums2.size()-1 && finalans[index] != -1) {
//                 solution.push_back(finalans[index]);
//             } else {
//                 solution.push_back(-1);
//             }
//         }

//         return solution;
//     }
// };


