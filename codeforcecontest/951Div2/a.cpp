#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int x=INT_MAX;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
      int y= max(a[i],a[i+1]);
      x= min(x,y);
    }
    cout<<x-1<<endl;
  }
  return 0;
}