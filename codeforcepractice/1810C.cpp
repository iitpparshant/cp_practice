#include<iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
      int n, c, d;
      cin>>n>>c>>d;
      set<int> s;
      long long cost = 0;

      for (int i = 0; i < n; i++)
      {
          int x;
          cin>>x;
          if(s.find(x) == s.end()){
              s.insert(x);
          }
          else{
              cost += c;
          }
      }

      vector<int> a;
      for(auto it : s){
          a.push_back(it);
      }

      long long ans = LLONG_MAX; 
      int p = a.size();

      for (int i = 0; i < p; i++)
      {
          ans = min(ans, 1ll * (a[i] - i - 1) * d + 1ll * (p - i - 1) * c);
      }

      ans = min(ans, 1ll * p * c + d);

      cout << ans + cost << endl;
  }
  return 0;
}
