#include <iostream>
using namespace std;
int solve(int a[],int n){
    int sum=0;
	    for(int i=0;i<n-1;i++){
	        sum+= abs(a[i]-a[i+1]);
	    }
	    return sum;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        int x=a[i];
	        a[i]=1;
	        ans= max(ans,solve(a,n));
	        a[i]=k;
	        ans= max(ans,solve(a,n));
	        a[i]=x;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
