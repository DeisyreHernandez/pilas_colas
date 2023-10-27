#include<stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&,int);
bool cola_vacia(Nodo *);
void eliminarCola(Nodo *&, Nodo *&, int &);


int main(){
	Nodo *principal = NULL;
	Nodo *fin = NULL;
    
	int dato;
   	
   	
   cout<<"Digite un numero a la lista: ";
   cin>>dato;
   insertarCola(principal,fin,dato);
   cout<<"Digite un numero a la lista: ";
   cin>>dato;
   insertarCola(principal,fin,dato);
    cout<<"Digite un numero a la lista: ";
   cin>>dato;
   insertarCola(principal,fin,dato);
   
    cout<<"Digite un numero a la lista: ";
   cin>>dato;
   insertarCola(principal,fin,dato);
    cout<<"Digite un numero a la lista: ";
   cin>>dato;
   insertarCola(principal,fin,dato);
    cout<<"Digite un numero a la lista: ";
   cin>>dato;
   insertarCola(principal,fin,dato);
   	
   
   	cout<<dato<< "\n Eliminando los nodos la cola\n";
   
   while(principal != NULL){
   	eliminarCola(principal,fin,dato);
   	
   	if(principal != NULL){
   		cout<<dato<< "\n";
	   }else{
	   	cout<<dato<< ".";
	   }
   	
   }
   
   return 0;
}

void insertarCola(Nodo *&principal, Nodo *&fin,int numero){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = numero;
	nuevo_nodo->siguiente =NULL;
	
	if(cola_vacia(principal)){
		principal = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	
	cout<<"Elemento  "<<numero<<"\ninsertado correctamente\n";
}

bool cola_vacia(Nodo *principal){
	return (principal == NULL)? true: false;
}

void eliminarCola(Nodo *&principal, Nodo *&fin, int &numero){
	numero = principal->dato;
	Nodo *aux = principal;
	
	if(principal == fin){
		principal = NULL;
		fin = NULL;
	}
	else{
		principal = principal->siguiente;
	}
	delete aux;
}