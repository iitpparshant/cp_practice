#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        int x= 600;
        cout<<600<<" ";
        for(int i=0;i<n-1;i++){
            x+=a[i];
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}