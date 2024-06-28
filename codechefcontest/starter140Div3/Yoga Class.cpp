#include <iostream>
using namespace std;

int main() {
	// your code goes here 
	int t;
	cin>>t;
	while(t--){
	    
	int n,x,y;
	cin>>n>>x>>y;
	int p= n*x;
    int q= n/2*y;
    if(n%2!=0){
        q+=x;
    }
    cout<<max(p,q)<<endl;
	}
	return 0;
}
