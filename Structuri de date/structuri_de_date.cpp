#include <iostream>
using namespace std;

struct Punct
{
    char nume;
    int x, y;
};

void atribuire(struct Punct &p, int index)
{
    p.nume = 65 + index;
    p.x = rand() % 100;
    p.y = rand() % 100;
}

void afisare_mij(struct Punct a, struct Punct b)
{
    int xMij = (a.x + b.x) / 2;
    int yMij = (a.y + b.y) / 2;
    cout << "Mijlocul dintre punctul " << a.nume << "de coordonate " << a.x << " si " << a.y << " si punctul " << b.nume << " de coordonate " << b.x << " si " << b.y << " este:\nX: " << xMij << "\nY: " << yMij << "\n";
}

int main()
{
    struct Punct Puncte[100];
    for (int i = 0; i < 26; i++)
        atribuire(Puncte[i], i);
    for (int i = 0; i < 25; i++)
        afisare_mij(Puncte[i], Puncte[i + 1]);
    return 0;
}
