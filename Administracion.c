#include <iostream>
#include "conio.h"
#include <stdlib.h>
#include <cstring>


using namespace std;

struct Datos{
   char ApeNom[60];
   char telefono[25];
   char cadena[60];
   int DNI,matricula;
char contraseña[60];

};


struct Usuario{
 
 char ApeNom[60];
 char usuario[10];
 char contraseña[10];

Fecha fecha;

};

void RegistrarVeterinario(ArchDatos);
void RegistrarAsistente(ArchUsuarios);
void Atenciones(ArchTurnos);
void Ranking(ArchTurnos);


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
RegistrarVeterinario(ArchDatos);
break;
case 2:
RegistrarAsistente(ArchUsuarios);
break;
case 3:
Atenciones(ArchTurnos);
break;
case 4:
Ranking(ArchTurnos);
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



void RegistrarVeterinario(ArchDatos)
{
	char* LETRAS="ABCDEFGHIJKLMNOPQRSTUVWXYZ .,";
    char* NUMEROS="0123456789";
    char* caracter=(6,32);
	char sim= ",","#","!","?","¡","¿","$","&","/","(",")","@",".";
	registro reg;
    FILE *ArchDatos;
    ArchDatos=fopen("Datos.dat","ab");
    if (ArchDatos==NULL)
        exit(1);
    
    printf("Ingrese el Nombre y Apellido:");
    gets(reg.ApeNom);
    printf("Ingrese telefono: ");
    gets(reg.telefono);
    printf("Ingrese la matricula:");
    scanf("%i",&reg.matricula);
    printf("Ingrese contraseña:");
    scanf("%i",&reg.contraseña);
    int i = 0;	
	char caracter = getch();
	while (i < 10 && caracter != 13) {
		cadena[i] = caracter;
		i++;
		printf("*");
		caracter = getch();
	}
	cadena[i] = '\0';
    if (reg.contraseña != caracter)
    {
    	printf("La contraseña debe tener entre 6 y 32 caracteres");
    	{
    		printf("Ingrese contraseña: ");
    		scanf("%d",&reg.contraseña);
		}
	}
	if (reg.contraseña = sim);
	{
    	printf("La contraseña no puede tener simbologia");
    	{
    		printf("Ingrese contraseña: ");
    		scanf("%d",&reg.contraseña);
		}
	}
    fwrite(&Datos, sizeof(Datos), 1, ArchDatos);
    fclose(ArchDatos);
    continuar();
}





void RegistrarAsistente(ArchUsuarios)
{
	registro reg;
	char sim= ",","#","!","?","¡","¿","$","&","/","(",")","@",".";
	char* LETRAS="ABCDEFGHIJKLMNOPQRSTUVWXYZ .,";
    char* NUMEROS="0123456789";
    FILE *ArchUsuarios;
    ArchUsuarios=fopen("Usuarios.dat","rb");
    if (ArchUsuarios==NULL)
        exit(1);
    
    fread(&Usuarios, sizeof(Usuarios), 1, ArchUsuarios);
    while(!feof(ArchUsuarios))
    {
    	printf("Ingrese nombre de usuario");
    	gets(reg.usuario);
    	int existe=0;
    fread(&Usuarios, sizeof(Usuarios), 1, ArchUsuarios);
    while(!feof(ArchUsuarios))
    {
    	if(Usuarios==reg.Usuarios)
    	{
    		printf("%d",reg.Usuarios);
    		existe=1;
    		break;
    		{
    			printf("El usuario ya existe, ingrese otro: ");
    			gets(reg.Usuarios);
			}
		}
		
    	printf("Ingrese una contraseña: ");
    	gets(reg.contraseña);
    	int i = 0;	
	char caracter = getch();
	while (i < 10 && caracter != 13) {
		cadena[i] = caracter;
		i++;
		printf("*");
		caracter = getch();
	}
	cadena[i] = '\0';
    if (reg.contraseña != caracter)
    {
    	printf("La contraseña debe tener entre 6 y 32 caracteres");
    	{
    		printf("Ingrese contraseña: ");
    		scanf("%d",&reg.contraseña);
		}
	}
	if (reg.contraseña = sim);
	{
    	printf("La contraseña no puede tener simbologia");
    	{
    		printf("Ingrese contraseña: ");
    		scanf("%d",&reg.contraseña);
		}
	}

    	 
        
        fread(&Usuarios, sizeof(Usuarios), 1, ArchUsuarios);
    }
    fclose(ArchUsuarios);
    continuar();
}



void Atenciones(ArchTurnos)
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
		
		puts("Matricula");
		puts(reg.matricula);
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


void Ranking(ArchTurnos)
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
		
		puts("Matricula");
		puts(reg.matricula);
		printf("Fecha");
		puts(reg.fecha.dia);
		puts(reg.fecha.mes);
		puts(reg.fecha.anio);
		printf("Turnos: ");
		puts(ArchTurnos);
		
	}
	
	if(Turnos=<5);
	{
		matricula=matricula+1;
		printf("El profesional con mas atenciones fue: ",matricula);
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
 printf("\t** 1-> Registrar veterinario **\n");
 printf("\t** **\n");
 printf("\t*************************************************\n");
 printf("\t** **\n");
 printf("\t** 2-> Registrar Usuarios **\n");
 printf("\t** **\n");
 printf("\t*************************************************\n");
 printf("\t** **\n");
 printf("\t** 3-> Atencion **\n");
printf("\t** **\n");
 printf("\t*************************************************\n");
printf("\t** **\n");
 printf("\t** 4-> Ranking **\n");
printf("\t** **\n");
 printf("\t*************************************************\n");
printf("\t** 5-> S A L I R del S I S T E M A **\n");
 printf("\t** **\n");
 printf("\t*************************************************\n\n");
 printf(" Seleccione Opcion: ");
 scanf("%d", &opc);
}
