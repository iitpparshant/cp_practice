#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int x= k*(k+1)/2;
	   // if(n==1 && k==1){
	   //     cout<<"YES";
	   // }
	    if(x+k-1<=n){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	    cout<<endl;
	}
	return 0;
}
