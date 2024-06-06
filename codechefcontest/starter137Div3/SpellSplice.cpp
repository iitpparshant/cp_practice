#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],v[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i]>>v[i];
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            ans= max((a[i]*v[j])+ (v[i]*a[j]),ans);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
