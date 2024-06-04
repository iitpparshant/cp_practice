#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool solve(int x, int a[], int n)
{
  int c[n];
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (i == x)
    {
      continue;
    }
    c[j] = a[i];
    j++;
  }
  int l = 1;
  for (int i = 0; i < n - 2; i++)
  {
    int y = __gcd(c[i], c[i + 1]);
    // cout << y << " ";
    if(y<l){
      return false;
    }
    l = y;
  }
  return true;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    vector<int> b;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
      b.push_back(__gcd(a[i], a[i + 1]));
      // cout << b[i] << " ";
    }
    int x = -1;
    for (int i = 0; i < n - 2; i++)
    {
      if (b[i] > b[i + 1])
      {
        x = i;
        break;
      }
    }

    // cout<<endl;
    // cout<<x<<"///";
    if (x == -1)
    {
      cout << "YES";
    }
    else if (solve(x, a, n) || solve(x + 1, a, n) || solve(x + 2, a, n))
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }
    cout<< endl;
  }
  return 0;
}