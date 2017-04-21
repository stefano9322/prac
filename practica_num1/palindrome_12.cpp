#include <iostream>
#include <string>

using namespace std;

bool palindrome (string arreglo, int tam)
{
    for (int i=0;i<tam/2;i++)
    {
        if (arreglo[i]==arreglo[(tam-i)-1])
            return true;
        else
            return false;

    }
}
int main ()
{

    string arreglo;

    cout<<"Ingrese la cadena"<<endl;
    cin>>arreglo;
    int tam=arreglo.size();
    palindrome (arreglo,tam);

    return 0;


}
