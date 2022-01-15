#include <iostream>
#include <fstream>
using namespace std;

ifstream in("interclasare.in");
ofstream out("interclasare.out");

int main()
{
    int a[100000], b[100000], c[200000], n, m;
    in>> n;
    for (int i = 0; i < n; i++)
        in>>a[i];

    in>> m;
    for (int i = 0; i < m; i++)
        in>>b[i];

    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(a[i] < b[j])
            c[k++] = a[i], i++;
        else
            c[k++] = b[j], j++;
    }
    while(i < n)
        c[k++] = a[i++];
    while(j < m)
        c[k++] = b[j++];
    
    for (int x = 0; x < n+m; x++)
        {
            out<<c[x];
            if(x % 9 == 0 && x != 0)
                out<<'\n';
            else
                out<<" ";
        }
    
    return 0;
}
