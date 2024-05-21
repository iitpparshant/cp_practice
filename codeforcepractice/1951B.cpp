#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define ull unsigned long long
#define mxx 1e18 - 1
using namespace std;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    vector<ll> v(n);
    vector<ll> a(n);
    ll ans2 = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        a[i] = v[i];
    }
    swap(a[0], a[k]);
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[0])
            ans2++;
        else
            break;
    }
    for (ll i = 0; i < k; i++)
    {
        if (v[i] > v[k])
        {
            swap(v[i], v[k]);
            k = i;
            break;
        }
    }
    ll ans = 0;
    if (k != 0)
        ans++;
    for (ll i = k + 1; i < n; i++)
    {
        if (v[i] < v[k])
            ans++;
        else
            break;
    }
    cout << max(ans2, ans) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}