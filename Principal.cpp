#include "Arreglos.h"
#include <cstdlib>
#include <iostream>

using namespace std;

 
int main (int argc, char * arg[])
{
	int c,g,s=1;
    cout<< "Programa que busca en los datos de un arreglo"<<endl;
    do
    {
    system("Cls");
    cout<<"Cuantos datos deseas guardar?"<<endl;
    cin>>c;
    }while(c<1);  
	do
	{  
    Arreglo A(c);
    
    A.setA1();
    system("Cls");
    cout<<"Que numero desea buscar?"<<endl;
    cin>>g;
    
    A.buscar(g);
    A.visualizar();
    A.Liberar() ;
    
    cout<<"Desea buscar otro numero     (Si=1    No=otro numero)"<<endl;
    cin>>s;
    }while(s==1);
    getchar();
    system("pause");
    return 0;
}
