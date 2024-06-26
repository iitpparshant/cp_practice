#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    bool a=true;
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] != c)
        {
          a = false;
        }
    }
    vector<int>ans;
    if(!a){
      for(int i=1;i<=n;i++){
        a=true;
        for(int j=i;j<=n;j++){
          if(s[j-1]!=c){
            a=false;
          }
          j+=i-1;
        }
        if(a){
          ans.push_back(i);
          break;
        }
      }
      if(!a){
        ans.push_back(n-1);
        ans.push_back(n);
      }
    }
    cout<<ans.size()<<endl;
    if(ans.size()!=0){

    for(auto it:ans){
      cout<<it<<" ";
    }
    cout << endl;
    }
  }
  return 0;
}