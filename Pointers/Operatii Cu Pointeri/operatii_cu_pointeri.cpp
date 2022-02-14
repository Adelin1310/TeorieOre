#include <iostream>
using namespace std;

int main()
{
    double v[10];
    for (int i = 0; i < 10; i++)
        v[i] = rand() % 100;
    double *p = v;
    for (int i = 0; i < 10; i++)
        cout<<*(p+i)<<" ";
    


    return 0;
}
