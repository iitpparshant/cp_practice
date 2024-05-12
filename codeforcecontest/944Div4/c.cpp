#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int mx= max(a,b);
        int mn=min(a,b);
        if((c<mx && c>mn) && (d<mx && d>mn)){
            cout<<"NO";
        }
        else if((c<mx && c>mn)){
            cout<<"YES";
        }
        else if((d<mx && d>mn)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}