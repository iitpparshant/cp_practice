#include <iostream>
#include<algorithm>
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
	    long long sum=0;
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(i<n/2){
	            sum-=a[i];
	        }
	        else{
	            sum+=a[i];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
