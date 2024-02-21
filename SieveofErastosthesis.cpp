#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n=10000;
vector<bool> is_prime(n+1, true);

void createSieve(){
    
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]==true){

            //mark all multiples of i as false;
            // for(int j=2*i;j<=n;j+=i){ //We optimize this to i*i)
                for(int j=i*i;j<=n;j+=i){
                is_prime[j]=false;
            }
        }
    }    

}




int main() {
   
   
   int a;
   cin>>a;
   createSieve();
   if(is_prime[a]==true){
      cout<<"true"<<endl;
   }
   else{
      cout<<"false"<<endl;
   }


}
