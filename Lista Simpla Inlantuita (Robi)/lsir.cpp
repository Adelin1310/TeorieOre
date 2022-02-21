#include <iostream>
using namespace std;

struct Nod
{
    int x;
    Nod *next;
};

Nod *start = nullptr;

void Parcurgere(Nod *start1)
{
    if (start1 == nullptr)
        cout << "Lista este goala\n";
    else
    {
        Nod *aux = start;
        do
        {
            cout << aux->x << " ";
            aux = aux->next;
        } while (aux);
        cout << '\n';
    }
}

void AdaugareInceput(int nr)
{
    Nod *new_nod = new Nod();
    new_nod->x = nr;
    new_nod->next = start;
    start = new_nod;
}

void AdaugareFinal(int nr)
{
    Nod *aux = start;
    if (aux != nullptr)
    {
        while (aux->next != nullptr)
            aux = aux->next;
        Nod *new_nod = new Nod();
        new_nod->x = nr;
        new_nod->next = nullptr;
        aux->next = new_nod;
    }
    else
    {
        Nod *new_nod = new Nod();
        new_nod->x = nr;
        new_nod->next = nullptr;
        start = new_nod;
    }
}

Nod *Cautare(int val_cautare)
{
    Nod *aux = start;
    while (aux)
    {
        if (aux->x == val_cautare)
            return aux;
        aux = aux->next;
    }
    return nullptr;
}

void AdaugareDupa(int val_cautare, int val_noua)
{
    Nod *nod_cautat = Cautare(val_cautare);
    if (nod_cautat != nullptr)
    {
        Nod *new_nod = new Nod();
        new_nod->x = val_noua;
        new_nod->next = nod_cautat->next;
        nod_cautat->next = new_nod;
    }
    else
        cout << "Nodul nu exista!\n";
}

void StergereCurent(int val_cautare)
{
    Nod *nod_cautat = Cautare(val_cautare);
    if (nod_cautat != nullptr)
    {
        if (nod_cautat == start)
        {
            Nod *sters = start;
            start = start->next;
            free(sters);
        }
        else if (nod_cautat->next == nullptr)
        {
            if (nod_cautat != start)
            {
                Nod *aux = start;
                while (aux->next != nod_cautat)
                    aux = aux->next;
                aux->next = nullptr;
                free(nod_cautat);
            }
            else
            {
                start = nullptr;
                free(nod_cautat);
            }
        }
        else
        {
            Nod *aux = start;
            while (aux->next != nod_cautat)
                aux = aux->next;
            aux->next = nod_cautat->next;
            free(nod_cautat);
        }
    }
    else
        cout << "Nodul nu exista!\n";
}

void StergereUrmator(int val_cautare)
{
    Nod *nod_cautat = Cautare(val_cautare);
    if (nod_cautat != nullptr)
    {
        if (nod_cautat->next != nullptr)
        {
            Nod* aux = nod_cautat->next;
            if(aux->next != nullptr){
                aux = aux->next;
                Nod* sters = nod_cautat->next;
                nod_cautat->next = aux;
                free(sters);
            }
            else{
                nod_cautat->next = nullptr;
                free(aux);
            }
        }
        else cout<<"Nodul curent este ultimul, deci nu putem sterge urmatorul!\n"; 
    }
    else cout<<"Nodul nu exista!\n";
}

int main()
{
    Parcurgere(start);
    for (int i = 0; i <= 10; i++)
        AdaugareFinal(i);
    Parcurgere(start);
    AdaugareDupa(6, 20);
    Parcurgere(start);
    AdaugareDupa(10, 21);
    Parcurgere(start);
    StergereCurent(4);
    StergereCurent(4);
    StergereCurent(21);
    StergereUrmator(0);
    StergereUrmator(2);
    StergereUrmator(11);
    StergereUrmator(10);
    Parcurgere(start);
    return 0;
}
