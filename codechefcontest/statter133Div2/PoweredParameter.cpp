#include <iostream>
#include<math.h>
using namespace std;
bool solve(long long x, int c, long long v) {
    long long v1 = 1;
    for(int i=0;i<c;i++) {
        v1 *= x;
        if(v1 > v) return false;
    }   
    return true;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long long count=0;
	    for(int i=0;i<n;i++){
	        if(a[i]==1){
	            count+=n;
	        }
	    }
	    for(int i=0;i<min(30,n);i++){
	        for(int j=0;j<n;j++){
	            if(a[j]!=1){
	                count+= solve(a[j],i+1,a[i]);
	            }
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}