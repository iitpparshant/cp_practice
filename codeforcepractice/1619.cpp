#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, s;
        cin >> a >> s;
        int n = a.length();
        int m = s.length();
        int flag=1;
        int i = n - 1;
        string b = "";
        int j = m - 1;
        while (i >= 0 && j >= 0)
        {
            if (s[j]-'0' < a[i]-'0')
            {
                if (s[j - 1] == '1')
                {

                    int x = (s[j - 1] - '0') * 10 + (s[j] - '0');
                    int y = a[i] - '0';
                    int f = x - y;
                    b += to_string(f);
                    j -= 2;
                    i--;
                }
                else{
                    flag=0;
                    break;
                }
            }
            else
            {
                int x = (s[j] - '0');
                int y = a[i] - '0';
                int f = x - y;
                b += to_string(f);
                i--;
                j--;
            }
            // cout<<b<<" ";
        }
        while(i>=0){
            b+=a[i];
            i--;
        }
        while(j>=0){
            b+=s[j];
            j--;
        }
        reverse(b.begin(),b.end());
        string d= "";
        i=0;
        while (b[i]=='0')
        {
            i++;
        }
        for (int k = i; k < b.size(); k++)
        {
            d+=b[k];
        }
        i=n-1;
        j= d.size()-1;
        string p="";
        while(i>=0&& j>=0){
            // cout<<a[i]<<d[j];
            int r= (a[i]-'0')+(d[j]-'0');
            // cout<<r<<"**";
            p= to_string(r)+p;
            i--;
            j--;
        }
        while(i>=0){
            p= a[i]+p;
            i--;
        }
        while(j>=0){
            p=d[j]+p;
            j--;
        }
        if(p!=s){
            flag=0;
        }
        // cout<<d<<" "<<p<<" ";
        if(flag==0){
            cout<<"-1";
        }
        else{
            cout<<d;
        }
        cout<< endl;
    }
    return 0;
}