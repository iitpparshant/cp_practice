#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==1){
	        cout<<1;
	    }
	    else{
	    cout<<7<<" "<<5<<" ";
	    for(int i=2;i<n-1;i++){
	        cout<<7<<" ";
	    }
	    cout<<3;
	    }
	    cout<<endl;
	}
	return 0;
}
