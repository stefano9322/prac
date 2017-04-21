#include <iostream>

using namespace std;

void insercion (int arreglo[], int tam)
{
    for (int i=0; i<tam;i++)
    {
        int j;

        j=i;

        while (j>0 && arreglo[j]<arreglo[j-1])
        {
            int temporal=arreglo[j];
            arreglo[j]=arreglo[j-1];
            arreglo[j-1]=temporal;
            j--;

        }

    }

}

int main ()
{

    int tam,n;
    cout<<"Ingrese el tamanho"<<endl;
    cin>>tam;
    int arreglo [tam];
    for (int i=0;i<tam;i++)
    {
        cout<<"Ingrese numeros"<<endl;
        cin>>arreglo[i];
    }

    insercion (arreglo, tam);
    for (int i=0;i<tam;i++)

        cout<<endl<<arreglo[i]<<endl;
    return 0;

}
