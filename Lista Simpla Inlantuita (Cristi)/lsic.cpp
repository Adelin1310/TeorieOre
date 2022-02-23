#include <iostream>
using namespace std;

struct Nod
{
    int valoare;
    Nod* urmator;
};
Nod* start = nullptr;

void afisare ( Nod* str )
{
    Nod* aux = str;
    while ( aux )
    {
        cout << aux->valoare << " ";
        aux = aux->urmator;
    }
}

void adaugare_dupa ( int x, Nod* &str )
{
    if ( str == nullptr )
        str = new Nod({ x, str });
    else
    {
        Nod* aux = str;
        while ( aux->urmator )
        aux = aux->urmator;
        Nod* nou = new Nod({ x, nullptr });
        aux->urmator = nou;
    }
}

void adaugare_inainte ( int x, Nod* &str )
{
    str = new Nod ({ x, str });
}

Nod* cautare_nod(int x, Nod* &str){
    Nod* aux = str;
    while(aux){
        if(aux->valoare == x)
            return aux;
        aux = aux->urmator;    
    }
    return nullptr;
}

void stergere_inceput(Nod* &str){
    Nod* aux = str;
    str = str->urmator;
    free(aux);
}

void stergere_final(Nod* &str){
    Nod* aux = str;
    while(aux->urmator->urmator)
        aux = aux->urmator;
    Nod* stergere = aux->urmator;
    aux->urmator = nullptr;
    free(stergere);
}

void stergere_nod(int x, Nod* &str){
    Nod* nod_stergere = cautare_nod(x,str);
    if(nod_stergere == nullptr)
        cout<<"Nodul nu exista!\n";
    else if(nod_stergere == str) stergere_inceput(str);
    else if(nod_stergere->urmator == nullptr) stergere_final(str);
    else{
        Nod* aux = str;
        while(aux->urmator != nod_stergere)
            aux = aux->urmator;
        aux->urmator = nod_stergere->urmator;
        free(nod_stergere);
    }
}

int main()
{
    for ( int i = 0; i < 5; i++ )
        adaugare_inainte(i*2, start);
    
    stergere_inceput( start );
    stergere_final( start );
    stergere_nod( 4, start );
    afisare(start);
    return 0;
}
