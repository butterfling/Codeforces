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
// typedef __int128 ell;
// typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key



// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// /*---------------------------------------------------------------------------------------------------------------------------*/
// ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
// ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
// void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
// ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
// ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
// bool revsort(ll a, ll b) {return a > b;}
// ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
// void google(int t) {cout << "Case #" << t << ": ";}
// vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
// ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
// ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
// ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
// ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
// ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 
// /*--------------------------------------------------------------------------------------------------------------------------*/


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

// 



// // vector<vector<char>> permute(const string &s){

// //     vector<vector<char>> ans;
// //     vector<char> ds;

// //     int n=s.size();
// //     vector<bool> freq(n, false);

// //     stringPermutations(ans,ds, s, freq);

// //     return ans;
// // }



// // vector<bool> sieveOfErostostheses(int n){

// //     vector<bool> prime(n+1, true);

// //     for(int i=2;i*i<=n;i++){

// //         if(prime[i]){

// //             for(int j=i;j<=n;j+=i){
// //                 prime[j]=false;
// //             }
// //         }
// //     }

// //     return prime;

// // }





// // void coinPiles(int a, int b, int flag){

// //     if(a==0 && b==0){
// //         cout<<"YES"<<nline;
// //         return;
// //     }

// //      if (a < 0 || b < 0 || (a == 0 && b % 2 != 0) || (b == 0 && a % 2 != 0)) {
// //         cout << "NO" <<nline;
// //         return;
// //     }

// //     if(flag==0){
        
// //         coinPiles(a-2,b-1,!flag);
// //     }

// //     if(flag==1){
// //         coinPiles(a-1,b-2,!flag);
// //     }

// // }


// // void productExceptSelf(vector<int>& nums) {

// //         int n= nums.size();
// //         vector<int> leftArr(n+1);
// //         vector<int> rightArr(n+1);

// //         leftArr[0]=1;
// //         rightArr[n-1] = 1;

// //         for(int i=1;i<=n;i++){
// //             leftArr[i] = leftArr[i-1]*nums[i-1];
// //         }

// //         for(int j=n-2;j>=0;j--){
// //             rightArr[j] = rightArr[j+1]*nums[j];
// //         }

// //         for(const auto &it: rightArr){
// //             cout<<it<<endl;
// //         }

// //         // vector<int> ans;

// //         // for(int i=0;i<ans.size();i++){

// //         //     ans.push_back(leftArr[i]*rightArr[i])
// //         // }

// //         // return ans;
        
// // }




int checkSubstr(string &s1, string &s2){

    if(s1.find(s2)!=string::npos){
        return s1.find(s2);
    }
    else{
        return -1;
    }
}





















// // int findMissingElement(const vector<int> &arr){

// //     int n=arr.size();
// //     vector<bool>elements(n+1, false);

// //     for(int i=0;i<n;i++){
        
// //         if (arr[i] <= n && arr[i] > 0) { 
// //             elements[arr[i]] = true;
// //         }
// //     }

// //     for(int i=1;i<=n;i++){
// //         if(!elements[i]){
// //             return i;
// //         }
// //     } 

// //     return n+1;
// // }

// // bool isPowerOfTwo(long long n){

// //     return (n && !(n&(n-1)));
// // }


// // string toBinaryString(int num, int n) {
// //     return bitset<64>(num).to_string().substr(64 - n); 
// // }



// // bool compare(pair<int, int> &a, pair<int, int> &b){

// //     return a.second>b.second;

// // }




// bool powerOFThree(int n){

//     if(n==1){
//         return true;
//     }

//     if(n<=0 || n%3!=0){
//         return false;
//     }

//     return powerOFThree(n/3);
// }






// // vector<vector<int>> permute(vector<int> &arr, ){

// //     vector<

// // }




// int twoSum(vector<int> &arr, int x, int n){

//     map<int, int> mp;

//     int count=0;

//     for(int i=0;i<n;i++){
//         if(mp.count(x-arr[i])){
//             printf("%d %d\n", mp[x-arr[i]], i);
//             return 0;
//         }

//         mp[x-arr[i]]=i;
//     }

//     printf("IMPOSSIBLE");
//     return 0;

// }


void sortingar(vector<int> &arr){

    int n=arr.size();

    int count_0=0;
    int count_1 =0;
    int count_2=0;

    for(const auto &it:arr){

        if(it==0){
            count_0++;
        }

        if(it==1){
            count_1++;
        }

        if(it==2){
            count_2++;
        }

    }

    int i=0;
    while(i<n){

        while(count_0--){
            arr[i]=0;
            i++;
        }

        while(count_1--){
            arr[i]=1;
            i++;
        }

        while(count_2--){
            arr[i]=2;
            i++;
        }

    }

    for(const auto &it:arr){
        cout<<it<<" ";
    }

}








// int maxSumSubarray(vector<int> &arr){

//     int n=arr.size();

//     int sum=0;

//     int i=0,j=i+1;

//     while(j<n){

//         sum+=arr[j];



//     }

// }



// vector<int> MaxsubArrayIndex(vector<int> &arr){

//     int n=arr.size();
//     vector<int> indices;

//     int j=0;

//     int sum=0,max=INT_MIN;

//     while(j<n){

//         sum=sum+arr[j];

//         if(sum<0){
//             sum=0;
//         }

//         if(sum>max){
//             max=sum;
//             ans=j;
//         }
//         j++;

//     }


// }





// void BubbleSort(vector<int>&arr, int n){

//     if(n==1){
//         return;
//     }

//     for(int i=1;i<=n-1;i++){
//         if(arr[i-1]>arr[i]){
//             swap(arr[i-1],arr[i]);
//         }
//     }

//     BubbleSort(arr,n-1);
// }


// int findMaxInd(vector<int>&arr, int n){

//     int max=arr[0];

//     for(int i=0;i<n;i++){

//         if(arr[i]>max){
//             max=i;
//         }
//     }

//     return max;

// }

// void selectionSort(vector<int>&arr, int n, int start){

//     if(start >=n-1){
//         return;
//     }

//     int max_index = findMaxInd(arr,n-start);

//     swap(arr[n-start-1], arr[max_index]);

//     selectionSort(arr,n-1,start+1);
// }





// int findNumberOfRotationsInCircularArray(vector<int> &arr){


//     int low=0;
//     int n= arr.size();
//     int high=n-1;

//     while(low<=high){

//         int mid = low+(high-low)/2;

//         int next = (mid+1)%n;
//         int prev = (mid-1+n)%n;

//         if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){

//             return mid;
//         }

//         else if(arr[mid]<=arr[high]){
//             high=mid-1;
//         }

//         else if(arr[mid]>=arr[high]){
//             low=mid+1;
//         }

//     }

//     return -1;


// }


// //smallest index where the value at that index is greater than or equal to x
// int lowerbound(vector<int> &arr,int x){

//     int low =0;
//     int high = arr.size()-1;
//     int ans = -1;

//     while(low<=high){

//         int mid = low +(high-low)/2;

//         if(arr[mid]>=x){
//             ans=mid;
//             high=mid-1;
//         }

//         else{
//             low = mid+1;
//         }

//     }

//     return ans;
// }






// //smallest index where the value at that index 
// int upperbound(vector<int> &arr, int x){

//     int low = 0;
//     int high = arr.size()-1;

//     int ans=-1;

//     while(low<=high){

//         int mid= low+ (high-low)/2;

//         if(arr[mid]>=x){
//             ans=mid;
//             high=mid-1;
//         }

//         else{
//             low = mid+1;
//         }

//     }

//     return ans;

// }

// int binarySearch(vector<int> &arr, int low, int high, int target){

//     if (low>high) {
//         return -1; 
//     }

//     int mid = low+(high-low) / 2;

//     if(arr[mid]==target){
//         return mid;
//     }

//     if(arr[mid]<target){
//         return binarySearch(arr,mid+1,high, target);
//     }

//     else {
//         return binarySearch(arr,low, mid-1, target);
//     }

// 


// int searchInRotatedSortedArray(vector<int> &arr){

    // int n=arr.size();
    // int low=0,high=n-1;

    // while(low<=high){

    //     int mid = low + (high-low)/2;

    //     if(arr[mid]==target){
    //         return mid;
    //     }

        //sort it by left


// //     }
// // }


// vector<vector<int>> mergeIntervals(vector<vector<int>> &arr){

//     int n=arr.size();
//     vector<vector<int>> ans;
//     for(int i=0;i<n;i++){

//         if(ans.empty() || ans.back()[1]<arr[i][0]){
//             ans.push_back(arr[i]);
//         }
//         else{
//             ans.back()[1]=max(ans.back()[1],arr[i][1]);
//         }
//     }

//     return ans;

// }









// // // int allpairCombinations(vector<int> &ferrisWheel){

// // //     int n= ferrisWheel.size();

// // //     int totalCombinations = (1<<n)-1;

// // //     for(int mask=0;mask<totalCombinations;mask++){

// // //         for(int i=0;i<n;i++){
// // //             if(mask & (1<<i)!=0){

// // //             }
// // //         }
// // //     }
// // // }







// // void TowerOfHanoi(int n, int firstTower, int AuxillaryTower, int DestinationTower){

// //     if(n<=0){
// //         return;
// //     }

// //     TowerOfHanoi(n-1, firstTower, DestinationTower, AuxillaryTower);
// //     cout<<firstTower<<" "<<DestinationTower<<nline;
// //     TowerOfHanoi(n-1, AuxillaryTower, firstTower, DestinationTower);
    
// // }






// int maxSubArraySum(vector<int> &arr){

//     int sum=0,maxi=INT_MIN;
//     for(int i=0;i<arr.size();i++){

//         sum+=arr[i];

//         if(sum>=maxi){
//             maxi=sum;
//         }

//         if(sum<0){
//             sum=0;
//         }

//     }

//     return sum;

// }



// int maxSumOfDistinctSubarraysofLengthK(vector<int> &arr, int k){

//     int i=0,j=i+1;

//     int sum=arr[0];
//     int n=arr.size();

//     int max=INT_MIN;

//     unordered_map<int,int> up;

//     while(j<n){

//         sum+=arr[j];

//         up[arr[j]]++;

//         while(j-i+1 >k){
//             sum-=arr[i];
//             i++;
//         }

//         if(j-i+1==k){

//             if(up.size()==j-i+1){

//                 if(sum>=max){
//                     max=sum;
//                 }
//             }
//         }
//         j++;
//     }

//     return max;
// }





// bool palindrome(string s){

//     int n=s.size();

//     for(int i=0;i<n/2;i++){

//         if(s[i]!=s[n-i-1]) return false;
//     }

//     return true;
// }



// int subarraySumOfLenghtK(vector<int> &arr, int k){

//     int sum=arr[0];
//     int n=arr.size();
//     int i=0,j=i+1;
//     int max= INT_MIN;

//     while(j<n){

//         sum+=arr[j];

//         while(j-i+1>k){
            
//             sum-=arr[i];
//             i++;
//         }

//         if(j-i+1 == k){

//             if(sum>=max){
//                 max=sum;
//             }
//         }

//         j++;
//     }

//     return max;

// }


// int findBinarySubarrays(vector<int> &arr, int k){

//     int n=arr.size();

//     int sum=0;

//     int res=0;

//     unordered_map<int,int> mp;
//     mp[0]=1;

//     for(int i=0;i<n;i++){

//         sum+=arr[i];

//         if(mp.find(sum-k)!=mp.end()){
//           res+=mp[sum-k];
//         }

//         mp[sum]++;
   

//     }

//     return res;
// }


// // }




// //longest substring , of a sttring whuich has 

// // // int findPivot(vector<int> &arr){


// // //     int low=0,high=arr.size()-1;
// // //     int mid= low + (high-low)/2;

// // //     while(low<high){

// // //         if(arr[mid]>=arr[0]){

// // //             low=mid+1;
// // //         }

// //         else{
// //             high=mid;
// //         }
// //         mid= low + (high-low)/2;

// //     }

// //     return low;

// // }




 
// void permute(string &a, int l, int r){

//     unordered_map<char, bool> seen;

//     if(l==r){
//         cout<<a<<nline;
//     }
//     else{
//         for(int i=l;i<=r;i++){

//             if(seen.find(a[i])==seen.end()){

//                 seen[a[i]]=true;
//                 swap(a[l],a[i]);
//                 permute(a,l+1,r);
//                 swap(a[l],a[i]);
//             }
//         }
//     } 
// }















// // void concertTickets(vector<int> &prices, vector<int> &customers, int m, int n){

// //     sort(prices.begin(), prices.end());

// //     for(int k=0;k<m;k++){

// //         int low=0;
// //         int high=n-1;
// //         int ans=-1;

// //         while(low<=high){

// //             int mid=low + (high-low)/2;

// //             if(prices[mid]>customers[k]){
// //                 high=mid-1;
// //             }
// //             else{
// //                 ans=mid;
// //                 low=mid+1;
// //             }
    
// //         if(prices[low]<=ans){
// //             cout<<prices[low]<<nline;
// //         }

// //         else if(prices[high]<=ans){
// //             cout<<prices[high]<<nline;
// //         }
// //         else{
// //             cout<<-1<<nline;
// //         }

// //         k++;
// //         }
// //     }
// // }




//     // int longestSubstringWithAtleastKchars(string &s, int k){


//     //     unordered_map<char,int> mp;

//     //     int n=s.
//     //     for(char ch:s){
//     //         mp[ch]++;
//     //     }

//     //     int maxLength=0;
//     //     int i=0,j=0;

//     //     while(j<)

//     //     int curr_unique=0;




//     // }



// vector<pair<int,int>> maxSubArray(vector<int> &arr){

//     int n=arr.size();
//     int sum=0;
//     int maxi=INT_MIN;
//     int start=0;
//     vector<pair<int,int>>ans;
//     int startHere=-1,startEnd=-1;

//     for(int i=0;i<n;i++){
//         sum+=arr[i];

//         if(sum>maxi){
//             maxi=sum;

//             startHere=start, startEnd=i;

//         }

//         if(sum<0){  
//             sum=0;
//             start=i+1;
//         }
//     }

//     ans.push_back({startHere, startEnd});

//     return ans;
// }







// int countWays(int n) {
//     vector<int> dp(n + 1);
//     dp[0] = 1;
//     dp[1] = 1; 

//     for (int i = 2; i <= n; i++) {
//         dp[i] = (dp[i - 1] + dp[i - 2])%1000000007;
//     }

//     return dp[n];
// }



//  char nextGreatestLetter(vector<char>& letters, char target) {

//         auto it = upper_bound(letters.begin(), letters.end(),target);

//         if(it==letters.end()){
//             return letters[0];
//         }

//         else{
//             return distance(letters.begin(),it);
//         }
        
// }
// bool isPerfectSquare(long long num) {
//     if (num < 0) return false;

//     long long low = 0, high = num;
//     while (low <= high) {
//         long long mid = low + (high - low) / 2;
//         long long sq = mid * mid;

//         if (sq == num) return true;
//         else if (sq < num) low = mid + 1;
//         else high = mid - 1;
//     }

//     return false;
// }



// int binarySearch(vector<int> &arr, int target){
//     int n=arr.size();
//     int low=0,high=n-1;

//     while(low<=high){
//         int mid=low+(high-low)/2;

//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(arr[mid]>target){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }

//     return -1;
// }

//  // for(auto it = mp.begin(); it != mp.end() && counter < k; ++it, ++counter) {
//  //            cout << it->second+1<< " ";
//  //        }

// bool isSubstring(string &x,string &s){
//     if(x.find(s)!=string::npos){
//         return true;
//     }
//     return false;
// }


// void printBinaryStringsOfGivenLength(string &s, int n){

//     if(s.size()==n){
//         cout<<s<<nline;
//         return;
//     }
//     // printBinaryStringsOfGivenLength(s+"0",n);//left recurse
//     // printBinaryStringsOfGivenLength(s+"1",n);//right recurse
//     s.push_back('0'); // Append '0' to 's'
//     printBinaryStringsOfGivenLength(s, n); 
//     s.pop_back();

//     s.push_back('1');
//     printBinaryStringsOfGivenLength(s, n); 
//     s.pop_back(); 
// }






void solve() {
   

    int n,x;
    cin>>n>>x;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    while(i<=j){

        if(arr[i]+arr[j]>x){
            count++;
            j--;
        }
        else{
            count++;
            i++;
            j--;
        }
    }
    cout<<count<<nline;
}






//[4,2,3,1,5,1,6,4]
//=> [1,1,2,3,4,4,5,6]

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


