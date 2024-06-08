#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    int y=INT_MAX;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      y= min(y,a[i]);
    }
    int x=0;
    for (int i = 0; i < n; i++)
    {
      if(a[i]==y){
        x=i;
        break;
      }
    }
    int flag=1;
    for (int i = x+1; i < n; i++)
    {
      if (a[i]<a[i-1])
      {
        flag=0;
        break;
      }
    }
    if(flag){
      cout<<x;
    }
    else
    {
      cout<<-1;
    }
    cout<<endl;
  }
  return 0;
}