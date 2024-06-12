#include <iostream>
#include <cmath> 
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    long long ans= INT_MAX;
	    for(int i=y+1;i<=100;i++){
	       // if(p%(i-y)==0){
	            long long j= ((10*(y-x))+i-y-1)/(i-y);
	            if(y<=100*j){
	            ans= min(ans,j);
	            }
	       // }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
