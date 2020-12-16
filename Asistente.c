#include <iostream>
#include "conio.h"
#include <stdlib.h>
#include <cstring>


using namespace std;

struct Datos{
   char ApeNom[60];
   char telefono[25];
   int DNI,matricula;
char contraseña[60];

};

struct Fecha{
   int fecha, dia, anio;
};


struct Mascotas{
 char ApeNom1[60];
 char domicilio[60];
 int DNI_Dueño,edad;
 char localidad [60];
  float peso;
  char telefono[25];
  char evolucion[380];

Fecha fecha;

};


struct Turnos{
 int matricula, DNI_Dueño;
 char ApeNom[60];
 char Atencion[380];

Fecha fecha;

};

void IniciarSesion(ArchDatos);
void RegistrarMascotas(ArchMascotas);
void RegistrarTurnos(ArchTurnos);
void Listado(ArchTurnos);


main()
{
int N=0, nroLic=0, nOp = 0;
int nroOp = 0;

FILE *ArchDatos;
ArchDatos = fopen("Datos.dat","w+b");
if(ArchDatos == NULL)
{
system("CLS");
mensaje("Ocurrio un error en la apertura del Archivo....");
exit(1);
}
do
{
nOp = menuPrincipal(); 
switch(nOp)
{
case 1:
IniciarSesion(ArchDatos);
break;
case 2:
RegistrarMascotas(ArchMascotas);
break;
case 3:
RegistrarTurnos(ArchTurnos);
break;
case 4:
Listado(ArchTurnos);
break;
case 5:
system("CLS");
mensaje("F i n d e l P r o g r a m a");
break;
default:
system("CLS");
mensaje("Ha ingresado un numero no valido");
break;
} 
}while(nOp != 4); //Fin del Ciclo Do
} //Final del main().



void continuar()
{
    printf("Presione una tecla para continuar\n\n");
    getch();
}



void IniciarSesion(ArchDatos)
{
	int correcto;

int intento;

char pass[10];

  intento=1;

    correcto=0;
    
	registro reg;
    FILE *ArchDatos;
    ArchDatos=fopen("Datos.dat","ab");
    if (ArchDatos==NULL)
        exit(1);
    
    printf("Ingrese el Nombre y Apellido:");
    gets(reg.ApeNom);
    printf("Ingrese la matricula:");
    scanf("%i",&reg.matricula);
    printf("Introduzca la contraseña: "); 
	gets(pass); 
	printf("\n");

    if (strcmp(pass,contraseña)==0) correcto=1;

    while ((correcto==0)&&(intento<3))

    {

        intento++;

        printf("Contraseña incorrecta. %i intento: ", intento); 
		gets(pass); 
		printf("\n");

        if (strcmp(pass,contraseña)==0) correcto=1;

    }

    if (correcto==0)
	{
	  
	printf("Se han excedido el numero de intentos.");
	
}

    else

        {

            printf("Bienvenido a la base de datos.");

        }

    return 0;
    fwrite(&Datos, sizeof(Datos), 1, ArchDatos);
    fclose(ArchDatos);
    continuar();
}

void RegistrarMascotas(ArchMascotas)
{
	registro reg;
	FechaNacimiento fecha;
    FILE *ArchMascotas;
    ArchMascotas=fopen("Mascotas.dat","rb");
    if (ArchMascotas==NULL)
        exit(1);
    
    fread(&Mascotas, sizeof(Mascotas), 1, ArchMascotas);
    while(!feof(ArchMascotas))
    {
    	printf("\nIngrese El Nombre del Paciente : ");
                             scanf("%s",&ApeNom1);
                             printf("\nIngrese DNI : ");
                             scanf("%d",&DNI_Dueño);
                             printf("\nIngrese localidad : ");
                             scanf("%s,&Localidad);
                             printf("\nIngrese peso : ");
                             scanf("%f",&peso);
                               printf("Ingrese fecha:");
                               scanf("%d",&reg.fecha.dia);
                               scanf("%d",&reg.fecha.mes);
                              scanf("%d",&reg.fecha.anio)
                             cout<<"\nIngrese edad teniendo en cuenta la fecha de nacimiento  : ";
                             cin>>edad;
                             printf("\nIngrese el informe de evolucion del paciente : ");
                             scanf("%s",&evolucion);

    	 ;
        
        fread(&Mascotas, sizeof(Mascotas), 1, ArchMascotas);
    }
    fclose(ArchMascotas);
    continuar();
}

void RegistrarTurnos(ArchTurnos)
{
	
    FILE *ArchTurnos;
    ArchTurnos=fopen("Turnos.dat","rb");
    if (ArchTurnos==NULL)
        exit(1);
    
    printf("Ingrese apellido y nombre del profesional");
    gets(ApeNom);
    printf("Ingrese matricula:");
    scanf("%d", &matricula);
    printf("Ingrese fecha:");
    printf("Dia");
    scanf("%d",&reg.fecha.dia);
    printf("Mes");
    scanf("%d",&reg.fecha.mes);
    printf("Año");
    scanf("%d",&reg.fecha.anio);
    printf("Ingrese DNI:");
    scanf("%d", &DNI_Dueño);
    printf("Ingrese detalle de atencion: ");
    gets(Atencion);
    
   
    {
        fread(&Turnos, sizeof(Turnos), 1, ArchTurnos);
    }
    
    fclose(ArchTurnos);
    continuar();
}

void Listado(ArchTurnos)
{
	
    FILE *ArchTurnos;
    ArchTurnos=fopen("Turnos.dat","rb");
    if (ArchTurnos==NULL)
        exit(1);
    
    printf("Ingrese matricula para observar turnos");
    scanf("%d",&matricula);
    int existe=0;
    fread(&Turnos, sizeof(Turnos), 1, ArchTurnos);
    while(!feof(ArchTurnos))
    {
    	if(matricula==reg.matricula)
    	{
    		printf("%d",reg.matricula);
    		existe=1;
    		break;
		}
		
		puts("Profesional");
		puts(ApeNom);
		printf("Fecha");
		puts(reg.fecha.dia);
		puts(reg.fecha.mes);
		puts(reg.fecha.anio);
		printf("Turnos: ");
		puts(ArchTurnos);
		
	}
    
    fclose(ArchTurnos);
    continuar();
}




int menuPrincipal()
{
 int opc=0;
 system("CLS");
 printf("\t*************************************************\n");
 printf("\t** M E N U P R I N C I P A L **\n");
 printf("\t*************************************************\n");
 printf("\t** **\n");
 printf("\t** 1-> Iniciar sesion **\n");
 printf("\t** **\n");
 printf("\t*************************************************\n");
 printf("\t** **\n");
 printf("\t** 2-> Registrar mascota **\n");
 printf("\t** **\n");
 printf("\t*************************************************\n");
 printf("\t** **\n");
 printf("\t** 3-> Registrar turno **\n");
printf("\t** **\n");
 printf("\t*************************************************\n");
printf("\t** **\n");
 printf("\t** 4-> Listado de atenciones por veterinario y fecha **\n");
printf("\t** **\n");
 printf("\t*************************************************\n");
printf("\t** 5-> S A L I R del S I S T E M A **\n");
 printf("\t** **\n");
 printf("\t*************************************************\n\n");
 printf(" Seleccione Opcion: ");
 scanf("%d", &opc);
}



