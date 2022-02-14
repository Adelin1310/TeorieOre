#include <iostream>
using namespace std;

/*
tip_date_returnare denumire_functie(tip_date parametru1, tip_date parametru2,...., tip_date parametruN){
    instructiuni
    (
        Daca functia are tip de date de returnare void, 
        atunci nu se returneaza nimic, altfel trebuie 
        sa se returneze o valoare de acelasi tip de 
        date de returnare ca si functia
    )
}
*/

void citire(int &n, int *v)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void afisare(int n, int *v)
{
    cout<<'\n';
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout<<'\n';
}

void sortare(int n, int *v, bool tip_sortare /*TRUE - Crescator, FALSE - Descrescator */)
{
    int ok = 1;
    do
    {
        ok = 1;
        for (int i = 0; i < n - 1; i++)
            if (tip_sortare)
            {
                if (v[i] > v[i + 1])
                    swap(v[i], v[i + 1]), ok = 0;
            }
            else
            {
                if (v[i] < v[i + 1])
                    swap(v[i], v[i + 1]), ok = 0;
            }
    } while (!ok);
    if(tip_sortare)
        cout<<"\nV Crescator: ", afisare(n,v);
    else
        cout<<"\nV Descrescator: ", afisare(n,v);

}

int main()
{
    int n, v[100];
    citire(n,v);
    afisare(n,v);
    sortare(n,v,true);
    sortare(n,v,false);
    return 0;
}
