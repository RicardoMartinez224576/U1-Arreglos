#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

class Arreglo
{
	private:
        bool esta;
        int *A1;
        int n,b,p;
        
	public:
		Arreglo(int num ) {n=num; A1 = new int [num];esta=false;}
    
   		void visualizar();
   		void buscar(int b);
    	void setA1();
    	void Liberar();
};

	void Arreglo::visualizar() 
	{
	cout<<endl;
    cout<<"Datos Almacenados:" <<endl;
    for (int i=0;i<n;i++)
    {
    cout<< A1[i]<<endl;
    }
	}
	
	void Arreglo::buscar(int b)
	{
	for (int i=0;i<n;i++)
    {
    if (A1[i]==b)
        {
            esta=true;
            p=i+1;
    	}
    }
    	if(esta== true)
            {
                cout<<"El numero: "<< b << " Si esta en el arreglo"<<endl;
                cout<<"En la posicion: "<< p << endl;
            }
            else
            {
                cout<<"El numero: "<< b << " No esta en el arreglo";
            }
	}
	
	void Arreglo::setA1() 
	{
    cout<<"Escribe los "<< n <<"  datos que desea Almacenar"<<endl;
    for (int i=0;i<n;i++)
    {
    cin>>A1[i];
    }
	}

	void Arreglo::Liberar() 
	{
   	delete [] A1;
	}
