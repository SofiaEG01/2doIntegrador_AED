#include <iostream>
#include "conio.h"
#include <stdlib.h>
#include <cstring>


using namespace std;

struct veterinario{
   char ApeNom[60];
   char telefono[25];
   int DNI,matricula;
char contraseña[60];
   Profesional * Pila;
};

struct FechaNacimiento{
   int fecha, dia, anio;
};


struct Paciente{
 char ApeNom1[60];
 char domicilio[60];
 int DNI_Dueño,edad;
 char localidad [60];
  float peso;
  char telefono[25];
  char evolucion[380];

FechaNacimiento fecha;
   Paciente * next;
};


Paciente *Pila = NULL;
 Profesional * Pila;

void Sesion( Paciente *&Pila, char contraseña[60], char ApeNom1[60], int matricula);
void Pila_Mostrar( Paciente *&Pila );
void Pila_Mostrar( Paciente *&Pila);
int Registrar ( Paciente *&Pila);
void menu();


void Sesion( Profesional *&Pila, char contraseña[60], char ApeNom1[60], int matricula){
   Profesional * Pila;

  strcpy(Profesional;->Matricula, matricula);
    strcpy( Profesional->Contraseña, contraseña);
   

  
    cout<<"\n\nInicio de sesion "<<matricula<<" ha iniciado sesion !!!\n\n";
  
}




void Pila_Mostrar( Paciente *&Pila ){
     Paciente *auxiliar = Pila;

    Paciente *newPaciente = new Paciente();

    strcpy( newPaciente->ApeNom1, ApeNom1);
   
    newPaciente->next = Pila;
    Pila = newPaciente;

     if (Pila != NULL){

        while (auxiliar != NULL){
            cout<<"------------------------------------------------\n";
            cout<<"Nombre : "<<auxiliar->ApeNom1<<"\n";
           cout<<"------------------------------------------------\n\n";
            auxiliar = auxiliar->next;
        }
     } else {
         cout<<"\n\nNo hay pacientes en el Sistema\n\n";
     }
}






int Registrar ( Paciente *&Pila){

 

    Paciente *auxiliar = new Paciente();
    Paciente *newPaciente = new Paciente();

    strcpy( newPaciente->Nombre, ApeNom1);
    strcpy( newPaciente->DNI,DNI_Dueño);
    strcpy( newPaciente->Localidad, Localidad);
    newPaciente->peso = peso;
    newPaciente->edad = edad;
    strcpy( newPaciente->Evolucion,evolucion);

    newPaciente->next = Pila;
    Pila = newPaciente;
    cout<<"\n\n <<evolucion<<" se agrego con exito";

    strcpy( nombre,auxiliar->ApeNom1);
    strcpy( DNI,auxiliar->DNI_Dueño);
    strcpy( Localidad,auxiliar->Localidad);
    edad = auxiliar->edad;
    peso = auxiliar->peso;

     Pila = auxiliar->next;
     delete auxiliar;

}





void menu(){
    int opcion, bandera = 0, Datos;
    int otro;
   char contraseña[60];
    char ApeNom[60];
   char telefono[25];
   int matricula;
   char ApeNom1[60];
   char domicilio[60];
   int DNI_Dueño;
   char contraseña[60];
   char localidad [60];
    float peso;
    char evolucion[380];

FechaNacimiento fecha;
   Paciente * next;
   do{

        cout <<"=========================================================================\n";
        cout <<"=========================================================================\n";
        cout <<"===================== MENU DE OPCIONES ================================\n";
        cout <<"1. Iniciar Sesion\n";
        cout <<"2. Visualizar Lista de Espera de Turnos \n";
        cout <<"3. Registrar Evolución de la Mascota \n";
        cout <<"4. Salir\n";
        cout <<"^\nOpcion : ";
        cin>>opcion;

           switch(opcion){

               case 1:  {
                            while( bandera == 0){

                             printf("\nIngrese matricula : ");
                             scanf("%d",&matricula);
                             printf("\nIngrese contraseña : ");
                             scanf("%s",&contraseña);
                             
                             }{
                            printf("\nNombre del Paciente : ");
                             scanf("%s",&ApeNom1);
                             cout<<"---------------------------------------------------------------\n\n";
}

                        }
                        cout<<"\n";
                        system("pause");
                        break;


     


                case 2: Pila_Mostrar(Pila);
                        cout<<"\n";
                        system("pause");
                        break;



                case 3: {
                          Datos = Registrar(Pila);

                          { printf("\nIngrese El Nombre del Paciente : ");
                             scanf("%s",&ApeNom1);
                             printf("\nIngrese DNI : ");
                             scanf("%d",&DNI_Dueño);
                             printf("\nIngrese localidad : ");
                             scanf("%s,&Localidad);
                             printf("\nIngrese peso : ");
                             scanf("%f",&peso);
                             printf("\nDia : ");
                             scanf("%d",&fecha.dia);
                             printf("\nMes : ");
                             scanf("%d",&fecha.mes);
                             printf("\nAño : ");
                             scanf("%d",&fecha.anio);
                             cout<<"\nIngrese edad teniendo en cuenta la fecha de nacimiento  : ";
                             cin>>edad;
                             printf("\nIngrese el informe de evolucion del paciente : ");
                             scanf("%s",&evolucion);

                             cout<<"---------------------------------------------------------------\n\n";
}
                          cout<<"Informe del paciente"<< Datos << ".";
                        }
                        cout<<"\n";
                        system("pause");
                        break;

               }

           }
                system("cls");
         } while (opcion != 4);



int main()
{
   menu();
   getch();
   return 0;
}


