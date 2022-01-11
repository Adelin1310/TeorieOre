#include <iostream>
using namespace std;

int main()
{
    int v[100] = {0}, n = 5;
    for (int i = 0; i < 5; i++)
        v[i] = i*2+1;
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
    // Pentru inserarea unui element intr-un vector, trebuie sa stim exact pozitia pe care vrem sa il inseram
    // si mai trebuie sa tinem cont de marimea vectorului si cate elemente sunt deja in acesta

    // k - pozitia in care vrem sa inseram un nou element
    // el - valoarea noului element
    int k = 4, el = 10;
    for (int i = n; i > k-1; i--)
        v[i] = v[i-1];
    
    n++;
    v[k-1] = el;
    
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
