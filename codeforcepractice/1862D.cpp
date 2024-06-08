#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long h=2*1e9;
    long long s=0;
    long long ans= 0;
    while(h-s>1){
      long long m= s+(h-s)/2;
      // cout<<s<<" "<<h<<" "<<m<<" "<<endl;
      if((m*(m+1)/2)>n){
        ans= m;
        h=m;
      }
      else{
        s=m;
      }
    }
    cout<<ans+(n-(ans*(ans-1)/2))<<endl;
  }
  return 0;
}