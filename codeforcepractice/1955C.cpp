#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        deque<long long >v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        while(v.size()>1 && k){
            int mn= min(v.front(),v.back());
            if(k<2*mn){
                v.front()-= (k/2)+k%2;
                v.back()-=k/2;
                k=0;
            }
            else{
                v.front()-=mn;
                v.back()-=mn;
                k-=2*mn;
            }
            if(v.front()==0){
                v.pop_front();
            }
            if(v.back()==0){
                v.pop_back();
            }
        }
        int ans= n-v.size();
        cout<<ans+(v.size()&& v.front()<=k)<<endl;
    }
    return 0;
}