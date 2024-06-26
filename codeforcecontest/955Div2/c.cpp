#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, l, r;
    cin >> n >> l >> r;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int count = 0;
    long long sum = 0;
    int i=0;
    int j=0;
    while(j<n){
      sum+=a[j];
      while(i<=j && i<n && sum>r){
        sum-=a[i];
        i++;
      }
      // cout<<sum<<"sdf";
      if(sum>=l && sum<=r){
        count++;
        sum=0;
        i=j+1;
      }
      j++;
    }
    cout << count<<endl;
  }

  return 0;
}