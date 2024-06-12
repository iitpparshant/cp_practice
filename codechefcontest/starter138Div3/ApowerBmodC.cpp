#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    if(n==2){
	        cout<<12<<" "<<16;
	    }
	    else{
	        cout<<2*n<<" "<<n*n;
	    }
	    cout<<endl;
	}
	return 0;
}
