#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    long long total = 0;

    // Input and prefix sums for Alice
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
      total += a[i];
    }

    // Input and prefix sums for Bob
    for (int i = 0; i < n; ++i)
    {
      cin >> b[i];
    }

    // Input and prefix sums for Charlie
    for (int i = 0; i < n; ++i)
    {
      cin >> c[i];
    }

    long long target = (total+2) / 3;
    auto solve=[&](vector<int>a,vector<int>b,vector<int>c){
      long long A=0,B=0,C=0;
      vector<int>p;
      for(int i=0;i<n;i++){
        A+=a[i];
        B+=b[i];
        C+=c[i];
        if(p.size()==0 && A>=target){
          p.push_back(i+1);
          A=0,B=0,C=0;
        }
        else if(p.size()==1 && B>=target){
          p.push_back(i+1);
          A=0,B=0,C=0;
        }
        else if(p.size()==2 && C>=target){
          p.push_back(i+1);
          A=0,B=0,C=0;
        }
      }
      return p;
    };
    if(solve(a,b,c).size()==3){
      vector<int>ans= solve(a,b,c);
      cout<<1<<" "<<ans[0]<<" "<<ans[0]+1<<" "<<ans[1]<<" "<<ans[1]+1<<" "<<n;
    }
    else if(solve(a,c,b).size()==3){
      vector<int>ans= solve(a,c,b);
      cout<<1<<" "<<ans[0]<<" "<<ans[1]+1<<" "<<n<<" "<<ans[0]+1<<" "<<ans[1];
    }
    else if(solve(b,a,c).size()==3){
      vector<int>ans= solve(b,a,c);
      cout<<ans[0]+1<<" "<<ans[1]<<" "<<1<<" "<<ans[0]<<" "<<ans[1]+1<<" "<<n;
    }
    else if(solve(c,a,b).size()==3){
      vector<int>ans= solve(c,a,b);
      cout<<ans[0]+1<<" "<<ans[1]<<" "<<ans[1]+1<<" "<<n<<" "<<1<<" "<<ans[0];
    }
    else if(solve(b,c,a).size()==3){
      vector<int>ans= solve(b,c,a);
      cout<<ans[1]+1<<" "<<n<<" "<<1<<" "<<ans[0]<<" "<<ans[0]+1<<" "<<ans[1];
    }
    else if(solve(c,b,a).size()==3){
      vector<int>ans= solve(c,b,a);
      cout<<ans[1]+1<<" "<<n<<" "<<ans[0]+1<<" "<<ans[1]<<" "<<1<<" "<<ans[0];
    }
    else{
      cout<<"-1";
    }
    cout<< endl;
  }
  return 0;
}
