#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a >= b)
        {
            if ((a + b) % 2 == 0)
            {

                cout << "Yes";
            }
            else
            {
                cout << "No";
            }
        }
        else
        {
            cout << "No";
        }
        cout << endl;
    }
    return 0;
}