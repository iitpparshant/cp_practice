#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<long long>a(k), b(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j <k; j++)
        {
            cin >> b[j];
        }
        while (q--)
        {
            int d;
            cin >> d;
            int idx= lower_bound(a.begin(),a.end(),d)-a.begin();
            idx--;
            if(idx==-1){
                long long dist= a[0];
                long long time= b[0];
                cout<<(d*time)/dist<<" ";
            }
            else{
                long long dist= a[idx+1]-a[idx];
                long long time= b[idx+1]-b[idx];
                cout<<((d-a[idx])*time)/dist+ b[idx]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}