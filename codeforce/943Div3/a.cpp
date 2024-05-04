#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        // first method 
        
        // int ans=0;
        // for(int i=1;i<x;i++){
        //     int p= __gcd(x,i)+i;
        //     if(p>ans){
        //         ans= i;
        //     }
        // }
        // cout<<ans<<endl;

        //   second method

        cout<<x-1<<endl;
    }
    return 0;
}