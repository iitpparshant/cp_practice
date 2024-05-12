#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>a(n);
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    int m;
    cin>>m;
    while(m--){
        long long x,y;
        cin>>x>>y;
        int index= lower_bound(a.begin(),a.end(),x)-a.begin();
        long long ans= 2e18;
        if(index>0){
            ans =min(ans,(x-a[index-1])+ max((long long)0,y-sum+a[index-1]));
        }
        if(index<n){
            ans =min(ans,max((long long)0,y-sum+a[index]));
        }
        cout<<ans<<endl;
    }
    return 0;
}