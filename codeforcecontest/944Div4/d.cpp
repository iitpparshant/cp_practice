#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int z = 0, o = 0;
        vector<int> zero;
        vector<int> one;
        int i=0;
        int flag=0;
        while(i < n)
        {
            while(s[i] == '0')
            {
                z++;
                i++;
                // one.push_back(o);
                o = 0;
            }
            if (z != 0)
            {
                zero.push_back(z);
            }
            while(s[i]=='1')
            {
                if(z>0){
                    flag=1;
                }
                o++;
                i++;
                // zero.push_back(z);
                z = 0;
            }
            if (o != 0)
            {
                one.push_back(o);
            }
        }
        int ans= one.size()+zero.size();
        if(flag==1){
            cout<<ans-1;
        }
        else{
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}