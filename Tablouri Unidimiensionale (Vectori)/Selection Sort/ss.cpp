#include <iostream>
using namespace std;

int main()
{
    int v[100], n = 100;
    for (int i = 0; i < n; i++)
        v[i] = rand() % 1000 + 100;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}
