
#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarPila(Nodo *, int);
void eliminarPila(Nodo *&, int &);

int main(){
	int dato;
	Nodo *pila = NULL;
	
    cout<<"Digite un numero a la lista:\n ";
    cin>>dato;
    insertarPila(pila,dato);
	 cout<<"Digite un numero a la lista:\n ";
    cin>>dato;
    insertarPila(pila,dato);
     cout<<"Digite un numero a la lista:\n ";
    cin>>dato;
    insertarPila(pila,dato);
     cout<<"Digite un numero a la lista:\n ";
    cin>>dato;
    insertarPila(pila,dato);
     cout<<"Digite un numero a la lista:\n ";
    cin>>dato;
    insertarPila(pila,dato);
     cout<<"Digite un numero a la lista:\n ";
    cin>>dato;
    insertarPila(pila,dato);

	
    cout<<"\n Eliminando los datos de la pila: ";
	while (pila  != NULL){
	   eliminarPila(pila,dato);
	    if(){
	 		cout<<dato<<" , ";
		 }
		 else{
		 	cout<<dato<<" . ";
		 }
	 }
	return 0;
}

void insertarPila(Nodo *pila,int numero){

    Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = numero;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
    cout<<"\nEl elemento "<<numero<<"\nse agrego a la pila.\n";
    
}
void eliminarPila(Nodo *&pila, int &numero){
	Nodo *auxiliar = pila;
	numero = auxiliar->dato;
	pila = auxiliar->siguiente;
	
	delete auxiliar;
	
}