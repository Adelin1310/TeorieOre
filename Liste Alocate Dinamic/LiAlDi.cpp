#include <iostream>
using namespace std;

// Structura unei liste
struct Nod
{
    int valoare;
    Nod *next;
};

struct Nod *start;
struct Nod *curent;

void inserare_final(int valoare)
{
    if (start == nullptr)
    {
        start = new Nod();
        start->valoare = valoare;
        start->next = nullptr;
        curent = start;
    }
    else
    {
        Nod *urmator = new Nod();
        urmator->valoare = valoare;
        urmator->next = nullptr;
        curent->next = urmator;
        curent = curent->next;
    }
}

void inserare_inceput(int valoare)
{
    if (start == nullptr)
    {
        start = new Nod();
        start->valoare = valoare;
        start->next = nullptr;
        curent = start;
    }
    else
    {
        Nod *precedent = new Nod();
        precedent->valoare = valoare;
        precedent->next = start;
        start = precedent;
    }
}

void afisare()
{
    Nod *aux = start;
    do
    {
        cout << aux->valoare << " ";
        aux = aux->next;
    } while (aux != nullptr);
}

int main()
{
    int v[4] = {3, 6, 1, 4};
    for (int i = 0; i < 4; i++)
    {
        inserare_inceput(v[i]);
        _sleep(1500);
        cout<<'\n';
        afisare();
    }
    for (int i = 0; i < 4; i++)
    {
        inserare_final(v[i]);
        _sleep(1500);
        cout<<'\n';
        afisare();
    }
    return 0;
}
