#include <iostream>
using namespace std;
int solve(int n)
{
  if (n == 0)
    return 32;
  int count = 0;
  while ((n & 1) == 0)
  {
    n >>= 1;
    count++;
  }
  return count;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    int z = x ^ y;
    int zeros = solve(z);
    int result = 1 << zeros;
    cout << result << endl;
  }
  return 0;
}