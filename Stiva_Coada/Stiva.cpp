#include <iostream>
using namespace std;

int vStiva = -1, vCoada = -1, elCoada = 0;
int stiva[100], coada[100];

void push(int x)
{
    vStiva++;
    stiva[vStiva] = x;
}
void pop()
{
    vStiva--;
}
void first()
{
    if (vStiva == -1)
        cout << "Stiva este goala\n";
    else
        cout << stiva[vStiva] << '\n';
}

void add(int x)
{
    if (vCoada == -1)
    {
        vCoada = 0;
        elCoada = 0;
    }
    else
    {
        elCoada++;
    }
    coada[elCoada] = x;
}
void del()
{
    vCoada++;
    if (vCoada > elCoada)
    {
        vCoada = -1;
        elCoada = 0;
    }
}
void show()
{
    if (vCoada != -1)
        cout << coada[vCoada] << " ";
    else
        cout << "Coada este goala\n";
}
int main()
{
    add(10);
    add(5);
    add(2);
    push(10);
    push(5);
    push(2);
    pop();
    del();
    show();
    first();
    pop();
    del();
    show();
    first();
    return 0;
}
