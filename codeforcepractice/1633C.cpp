#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long hc,dc,hm,dm;
        cin>>hc>>dc>>hm>>dm;
        long long k,w,a;
        cin>>k>>w>>a;
        int flag=0;
        for(int i=0;i<=k;i++){
            long long nhc= hc+ (i*a);
            long long ndc= dc+ (k-i)*w;
            if((hm + ndc - 1) / ndc <= (nhc + dm - 1) / dm) {
                cout << "YES" << endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}