#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<int>pa(n+2),pc(n+2);
	    for(int i=1;i<=n;i++){
	        pa[i]= pa[i-1]+ (s[i-1]=='a');
	    }
	    for(int i=n;i>=1;i--){
	        pc[i]= pc[i+1]+(s[i-1]=='c');
	    }
	    vector<int>pb;
	    for(int i=1;i<=n;i++){
	        if(s[i-1]=='b'){
	            pb.push_back(i);
	        }
	    }
	    if(pb.size()==0){
	        cout<<"0";
	    }
	    else{
	        int mn= 1e9;
	        mn= min(pa[pb.back()],pc[pb.front()]);
	        for(int i=0;i<pb.size()-1;i++){
	            mn= min(mn,pa[pb[i]]+ pc[pb[i+1]]);
	        }
	        cout<<mn;
	    }
	    cout<<endl;
	}
	return 0;
}
