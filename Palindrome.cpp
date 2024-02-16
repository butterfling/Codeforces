#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int rev=0;

    int number=n;

    while(n>0){
        rev=rev*10 + n%10;
        n=n/10;
    }

    if(rev==number){
        cout<<rev<<endl;
        cout<<"YES"<<endl;
    }
    else{
        cout<<rev<<endl;
        cout<<"NO"<<endl;
    }

}