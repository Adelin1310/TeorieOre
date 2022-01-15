#include <iostream>
using namespace std;

int main()
{
    int a[5][10] = {0}, x;

    //Citire
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 10; j++)
            cin >> a[i][j];
    
    cout<<'\n';
    //Afisare
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
            cout<< a[i][j]<<" ";
        cout<<'\n';
    }
    

    return 0;
}
