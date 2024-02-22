
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    set<int> st;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }

    for(int j=-m;j<=m;j++){
        if(st.count(j)==0){
            cout<<j<<endl;
            break;
        }
    }
}
