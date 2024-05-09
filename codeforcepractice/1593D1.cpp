#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int mn= INT_MAX;
        int mx= INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn= min(mn,a[i]);
            mx= max(mx,a[i]);
        }
        int gcd= mx-mn;
        for (int  i = 0; i < n; i++)
        {
            if(mn!=a[i]){
                gcd=__gcd(gcd,(a[i]-mn));
            }
        }
        if(gcd==0){
            gcd=-1;
        }
        cout<<gcd<<endl;
    }
    return 0;
}