#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int xmx=0;
    int xmn= INT_MAX;
    int ymx=0;
    int ymn= INT_MAX;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m; j++)
      {
        char c;
        cin>>c;
        if(c=='#'){
          xmn= min(xmn,i);
           ymn= min(ymn,j);
          xmx= max(xmx,i);
          ymx= max(ymx,j);
        }
      }
      
    }
    cout<<(xmn+xmx)/2<<" "<<(ymn+ymx)/2<<endl;
  }
  return 0;
}