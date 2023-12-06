#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

string anna,youssef,ainoa;
int dinero = 50,tesoros = 0;
int opcion,opcionInstrucJuego, opcionEntrada,opcionCueva,opcionEntradaPrincipal, opcionInfoEntrada;
int opcionAreaTrabaja,opcionInfoEntrada2, opcionInfoEntrada1, opcionLadron,num,c,opcionPasillos,opcionSalida;

int main(){
	string jugador;
	string anna;
	anna="Anna";
	string youssef;
	youssef="Youssef";
	string ainoa;
	ainoa="Ainoa";
	string ladron;
	ladron="Ladron";
	
	while(2){
	do{
	do{
	do{
	system("cls");
	cout<<" The Great Adventure In The Mine"<<endl;
cout<<"\n Menu de principal"<<endl;
cout<<"\n 1. Iniciar juego"<<endl;
cout<<"\n 2. Instrucciones de juego"<<endl;
cout<<"\n 3. Acerca del juego"<<endl;
cout<<"\n 4. Creditos"<<endl;
cout<<"\n 5. Salir"<<endl;
cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
scanf("%d", &opcion);
switch(opcion){
	case 1: 
	 system("cls");
     cout<<" El juego esta iniciando"<<endl;
     cout<<"\n Presione enter para avanzar"<<endl;
     getch();
     break;
	int opcion;
	case 2:
     system("cls");
	 cout<<" 1. Instrucciones del juego"<<endl;
     cout<<"\n 2. Regresar al menu"<<endl;
     cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (1)]"<<endl;
     cin>>opcionInstrucJuego; 
	 system("cls");
	 switch(opcionInstrucJuego){
 	     
		  case 1: 
		     cout<<"\n En este juego deberas adentrarte en la busca del tesoro\n en una mina abandonada de Egipto superando los distintos \n obstaculos que habra sin evitar que tu dinero llegue a cero\n o perderas y consiguiendo la mayor cantidad de dinero y tesoros\n en tu aventura"<<endl;
			 cout<<"\n Presione enter para regresar al menu"<<endl;
			 getch();
			 break;
	     case 2:
		     cout<<" Estas regresando al menu"<<endl;
		     cout<<"\n Presione enter para regresar al menu"<<endl;
		     getch();
		     break;
		 default:
		 	system("cls");
	         cout<<"No es una opcion valida"<<endl;
	         cout<<"\n Presione enter para regresar al menu"<<endl;
	         getch();
	         system("cls");
		     break;
	}
	break;
	case 3:
	 	system("cls");
     	cout<<" Se ubica en la era actual donde un aventurero (tu) va a la busqueda de un tesoro"<<endl;
     	cout<<"\n tomando diferentes decisiones que te ayudaran ,te dificultaran o en el peor case"<<endl;
     	cout<<"\n moriras.\n\n Crees estar listo para esto?"<<endl;
     	cout<<"\n Presione enter para regresar al menu"<<endl;
     	getch();
     break;
    case 4:
     system("cls");
	 cout<<" Creditos"<<endl;
	 cout<<"\n Este juego fue hecho por: Juan Antonio Ramirez Cazares \n\n Para la realizacion del proyecto de la materia de introduccion a la ingenieria"<<endl;
	 cout<<"\n Gracias por jugar el juego"<<endl;
	 cout<<"\n Presione enter para regresar al menu"<<endl;
	 getch();
	 break;
	case 5:
	 system("cls");
     cout<<"\n Gracias por jugar"<<endl;
     return 0;
     default:
         system("cls");
	     cout<<"No es una opcion valida"<<endl;;
	     cout<<"\n Presione enter para regresar al menu"<<endl;
	     getch();
		 break;
}