#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char ch[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int  j = 0; j < m; j++)
            {
                cin>>ch[i][j];
            }
            
        }
        string ans= "YES";
        if(ch[0][0]!=ch[n-1][m-1]){
            bool t= true;
            for (int i = 0; i < n-1; i++)
            {
                if ((ch[i][0]!=ch[i+1][0])|| (ch[i][m-1]!=ch[i+1][m-1]))
                {
                    t= false;
                }
                
            }
            if (t)
            {
                ans= "NO";
            }
            t= true;
            for (int i = 0; i < m-1; i++)
            {
                if ((ch[0][i]!=ch[0][i+1])|| (ch[n-1][i]!=ch[n-1][i+1]))
                {
                    t= false;
                }
                
            }
            if (t)
            {
                ans= "NO";
            }
            
        }
        cout<<ans<<endl;
        
    }
    return 0;
}