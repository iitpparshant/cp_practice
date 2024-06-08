#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    int mx= INT_MIN;
    for (int i = 0; i < n; i++)
    {
      cin>>b[i];
      mx= max(mx,a[i]-b[i]);
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
      if(a[i]-b[i]==mx){
        count++;
      }
    }
    cout<<count<<endl;
     for (int i = 0; i < n; i++)
    {
      if(a[i]-b[i]==mx){
        cout<<i+1<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}