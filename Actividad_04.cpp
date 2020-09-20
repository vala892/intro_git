#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void capturarNumeros();
void capturarArreglo_2();
void mostrarArreglo(int ,char arreglo_2[]); 
void estructuraPersonaje();

struct Personaje{
	char nombre[30];
	char tipo[15];
	int fuerza;
	int salud;
}personajes[5];



const int tam = 5;
int arreglo[tam], n;
char arreglo_2[5];

int main(){
	int opcion;
	do{
		cout<<"1. Captura cinco numeros en un arreglo \n";
		cout<<"2. Mostrar Arreglo de caracteres\n";
		cout<<"3. Dame 5 personajes con sus Atributos \n";
		cout<<"4. Salir \n";
		cout<<"\nDame una opcion: "; 
		cin>>opcion;
		
		switch(opcion){
			case 1: capturarNumeros(); 
					system("pause");
					break;
			case 2: capturarArreglo_2();
					cout<<"\nCuantas veces se imprime el arreglo: ";
					cin>>n;
					mostrarArreglo(n,arreglo_2);
					system("pause");
					break;
			case 3: estructuraPersonaje();
					break;
			case 4: break;
			default: cout<<"\nOpcion invalida\n"; 
					system("pause");
					break;
		}
		system("cls");
	}while(opcion != 4);
	getch();
	return 0;
}


void capturarNumeros(){
	int suma=0,promedio=0;
	cout<<"\n\n\tCapturando numeros del arreglo\n";
	for(int i=0;i<tam;i++){
		fflush(stdin);
		cout<<i+1<<". Digita un numero: ";
		cin>>arreglo[i];
	}	
	cout<<"\n\nMostrando Arreglo:\n";
	for(int i=0;i<tam;i++){
		cout<<arreglo[i]<<" - ";
	}
	cout<<"\n\nSuma del Arreglo:\n";
	for(int i=0;i<tam;i++){
		suma += arreglo[i];
	}
	cout<<"Suma: "<<suma<<endl;
	cout<<"\n\nPromedio del Arreglo:\n";
	cout<<"Promdio: "<<suma/tam<<endl;
	cout<<"\n";
}

void capturarArreglo_2(){
	system("cls");
	cout<<"\n.:Ingresa 5 caracteres:.\n";
	
	for(int i=0;i<5;i++){
		cout<<"Caracter "<<i+1<<": "; cin>>arreglo_2[i];
	}
}

void mostrarArreglo(int n, char arreglo_2[]){
	cout<<"\n.:Mostrando arreglo:.\n";
	for(int j=0;j<n;j++){
		for(int i=0;i<5;i++){
			cout<<arreglo_2[i]<<" - ";
		}
		cout<<"\n";	
	}
}

void estructuraPersonaje(){
	system("cls");
	cout<<"\n.:Registra los datos de los Personajes:.\n";
	
	for(int i=0;i<5;i++){
		fflush(stdin);
		cout<<"Personaje "<<i+1<<endl;
		cout<<"Nombre: ";
		cin.getline(personajes[i].nombre,30,'\n');
		cout<<"Tipo: "; 
		cin.getline(personajes[i].tipo,30,'\n');
		cout<<"Fuerza: "; 
		cin>>personajes[i].fuerza;
		cout<<"Salud: "; 
		cin>>personajes[i].salud;
		cout<<"\n";
		system("pause");
		system("cls");
	}
	
	cout<<"\n.:Mostrando personajes:.\n";
	for(int i=0;i<5;i++){
		cout<<"Personaje "<<i+1<<endl;
		cout<<personajes[i].nombre<<endl;
		cout<<personajes[i].tipo<<endl;
		cout<<personajes[i].fuerza<<endl;
		cout<<personajes[i].salud<<endl;
		cout<<"\n";
	}
	system("pause");
}


















