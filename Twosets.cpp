
#include <bits/stdc++.h>
using namespace std;




void printVector(const vector<int>& arr){

    int n=arr.size();

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){

    int n;
    cin>>n;

    vector<int>v1;
    vector<int>v2;

    int flag=0;

    if(n*(n+1)/2 % 2!=0){
        cout<<"NO"<<endl;
    }

    else{

        if(n%2==0){

            vector<int> v1;
            vector<int> v2;

            int flag=0;

            for(int i=1;i<=n/2;i++){

                if(flag==0){
                    
                    v1.push_back(i);
                    v1.push_back(n-i+1);

                }
                else{
                    v2.push_back(i);
                    v2.push_back(n-i+1);
                }

                flag=!flag;

            }

            cout<<"YES"<<endl;

            cout<<v1.size()<<endl;
            printVector(v1);

            cout<<v2.size()<<endl;
            printVector(v2);
                   
        }

        else{

              vector<int> v1;
              vector<int> v2;

              int flag=0;

              for(int i=1;i<=(n-1)/2;i++){

                if(flag==0){
                    v1.push_back(i);
                    v1.push_back(n-i);
                }
                else{
                    v2.push_back(i);
                    v2.push_back(n-i);
                }

                flag=!flag;

              }
              v2.push_back(n);

            cout<<"YES"<<endl;

            cout<<v1.size()<<endl;
            printVector(v1);

            cout<<v2.size()<<endl;
            printVector(v2);
                   
        }
    }

}

