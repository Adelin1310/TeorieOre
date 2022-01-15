#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int x[25000], y[200000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> y[i];

    for (int i = 0; i < m; i++)
    {
        int ok = 0;
        int st = 0;
        int dr = n;
        while (st < dr)
        {
            int mid = (st + dr) / 2;
            if (y[i] == x[mid])
            {
                ok = 1;
                break;
            }
            else if(y[i] < x[mid])
                dr = mid-1;
            else if(y[i] > x[mid])
                st = mid+1;
        }
        if(y[i] == x[st]) ok = 1;
        cout<<ok<<" ";
    }

    return 0;
}
