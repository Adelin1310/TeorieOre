#include <iostream>
using namespace std;

int main()
{
    //n - marimea vectorului (cate elemente poate avea)
    //v[] - vectorul in sine (tablou unidimensional)
    int n = 5, v[5] = {0}; // initializam toate elementele vectorului pe valoarea 0
    v[0] = 3;
    v[1] = 2;
    v[2] = 5;
    v[3] = 7;
    v[4] = 1;

    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" "; // afisam v[0] v[1] v[2] v[3] v[4]
    }
    cout<<'\n';
    
    // Pentru a sterge un element dintr-un vector, trebuie sa il mutam pe prima sau pe ultima pozitie a vectorului.
    // De obicei se muta pe ultima pozitie.

    // Sa presupunem ca vrem sa stergem elementul de pe pozitia 2 din vector, adica elementul v[2] care este egal cu 5
    for (int i = 2 /*Pornim de pe pozitia acestuia*/; i < n-1/*Deoarece vom lucra cu elementul actual si cu elementul urmator, pentru a nu accesa memorie neinitializata, vom merge pana la ultima pozitie a vectorului - 1*/; i++)
    {
        // Mutarea in sine se face astfel
        v[i] = v[i+1];
    }
    n--;
        
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" "; // afisam v[0] v[1] v[2] v[3] v[4]
    }
    
    return 0;
}
