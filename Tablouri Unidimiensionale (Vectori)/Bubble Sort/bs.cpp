#include <iostream>
using namespace std;

int main()
{
    int n = 100, v[100], ok = 1;
    for (int i = 0; i < n; i++)
        v[i] = rand() % 1000 + 100;
    do
    {
        ok = 1;
        for (int i = 0; i < n - 1; i++)
            if (v[i] < v[i + 1])
            {
                swap(v[i], v[i + 1]);
                ok = 0;
            }
    } while (ok == 0);
    for (int i = 0; i < n; i++)
        cout
            << v[i] << " ";
    return 0;
}
