#include <stdlib.h>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int edad,acum,i,p;
    acum = 0;

    for ( i = 0; i < 6; i++)
    {
        cout << "Cual es la edad del miembro "<< i+1 << endl;
        cin >> edad;
        acum = acum + edad;
    }

    p=acum/(i+1);

    cout << "La suma de todas las edades es " << acum << endl;
    cout << "El promedio de la edad del grupo es " << p << endl;
    
    return 0;
}
