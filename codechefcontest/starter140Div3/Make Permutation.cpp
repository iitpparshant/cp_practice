#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int flag=1;
	    sort(a,a+n);
	    for(int i=1;i<=n;i++){
	        if(a[i-1]>i){
	            flag=0;
	        }
	    }
	    if(flag==1){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	    cout<<endl;
	}
	return 0;
}
