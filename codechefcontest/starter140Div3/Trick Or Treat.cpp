#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,k;
	    cin>>n>>k;
	    long long a[n];
	    unordered_map<long long, long long> mp;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        mp[a[i]%k]++;
	    }
	    long long count=0;
	    long long b[n];
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        long long x= b[i]%k;
	        long long t= (k-x)%k;
	        if(mp[t]>0){
	            count+= mp[t];
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
