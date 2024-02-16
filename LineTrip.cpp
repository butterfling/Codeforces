#include<bits/stdc++.h>
 
using namespace std;
 
int backwordIteration(int res, int count, int n,int x, vector<int> &gas_stations){
 
    for(int i=x;i>0;i--){
 
        count++;
 
        res = max(res, count);
 
        if(find(gas_stations.begin(), gas_stations.end(),i) != gas_stations.end()){
            
            count=0;
        }
    }
 
    return res;
}
 
 
int main(){
 
    int t;
    cin>>t;
 
    while(t--){
 
        int n, x;
        cin>>n>>x;
 
        vector<int> gas_stations;
 
        for(int i=0;i<n;i++){
 
            int temp;
            cin>>temp;
            gas_stations.push_back(temp);
        }
 
        int count=0;
 
        int res=0;
 
        for(int j=1;j<x;j++){
 
            count++;
 
            res = max(res, count);
            
            if(find(gas_stations.begin(), gas_stations.end(),j) != gas_stations.end()){
      
                count=0;    
            }
            
        }
 
        int ans = backwordIteration(res, count, n,x,gas_stations);
 
        cout<<ans<<endl;
 
        
    }
    
    return 0;
 
}