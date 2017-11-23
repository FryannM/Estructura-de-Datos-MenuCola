#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;


struct Nodo{
  char dato;
 Nodo *siguiente;
	
};
// Prototipos de funciones
void altaCola(Nodo *&, Nodo*&, char);
void bajaCola(Nodo *&, Nodo*&,  char&);
void menu();
bool cola_vacia(Nodo*);

int main()
{
	
	
	
	menu();
	getch();
	return 0;
}



void menu()

{
	 int opc;
	 char dato;
	 Nodo *frente = NULL;
     Nodo *fin =NULL;
	 cout<<"\n";
	 
	
	  
	  do
	  {
	  	
	  cout<<"\tMenu: "<<endl;
	  cout<<"1.Insertar caracter a  COLA"<<endl;
	  cout<<"2.Mostrar elementos de  COLA"<<endl;
	  cout<<"3.Salir"<<endl;
	  cout<<"Opcion: ";
	  cin>>opc;
	  
	   switch(opc){
	   	
	   	case 1:cout<<"\nIngrese el caracter para agregar a COLA: ";
	   	cin>>dato;
	   	altaCola(frente,fin,dato);
		   break;
	   	case 2: cout<<"\nMostrando elementos de COLA: ";
	   	while(frente != NULL){
	   		
	   		 bajaCola(frente,fin,dato);
	   		 if (frente !=NULL){
	   		 	cout<<dato<<" , ";
				}else
				{
					cout<<dato<<".";
				}
	   		 
		   }
	   	      system("pause");
		      break;
	   	case 3:break;	
	   }
	  	
	  	
	  	system("cls");
	  } while(opc !=3);
	  
	  

	


}

	
	 


// altaCola

void altaCola(Nodo *&frente, Nodo *&fin, char n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo ->siguiente = NULL;
	if(cola_vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else{
		 fin->siguiente = nuevo_nodo;
	}
	
	fin= nuevo_nodo;
	
}
bool cola_vacia(Nodo*frente)
{ 
return (frente ==NULL)? true:false;
	
}

void bajaCola(Nodo *&frente, Nodo*& fin , char &n)

{
	
	 n = frente ->dato;
	 Nodo *aux = frente;
	 
	 if (frente == fin)
	 
	 {
	 frente = NULL;
	 fin = NULL;
	 } 
	 
	 else
	 {
	 	
	 	 frente = frente ->siguiente;
	 }
	delete aux;
	
	
}
