#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int z = y / 2;
        int w= 7*z;
        if (y % 2 != 0)
        {
            z++;
            w+=11;
        }
        if (x>w)
        {
            int p= x-w;
            int q= p/15;
            if(p%15!=0){
                q++;
            }
            z+=q;
        }

        cout << z;
        cout << endl;
    }
    return 0;
}