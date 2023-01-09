#include <stdio.h>
#include <unistd.h>
#include <stdbool.h> 
#include "../lib/faUsuario.h"
#include "../lib/faProgressBar.h"
#include "../lib/faCombinatoriaFernando_Par.h"

// Fernando Josue Aldaz Lascano
// Examen 1
//https://github.com/Josxx24/examen   link git

int main()
{
	char favalidarco[26],favalidarc[11];
    int facont=0;
    char faNombre[28]="Fernando Josue Aldaz Lascano",faProfe[33]="patricio michael paccha angamarca";

    do{
    facont++;
    printf("----------\n");
    printf("Usuario: ");
    scanf("%s",favalidarco);
    printf("Contrasenia: ");
    scanf("%s",favalidarc);
    if(faContrasenia(favalidarco,favalidarc)==1){
        facont=4;
    }else if (facont>=0)
    {
        printf("Numero de intentos %d\n",facont);
    }
    }while(facont<3);
    faContrasenia(favalidarco,favalidarc);
    printf("Bienvenido %s\n",favalidarco);
	int faelec;
		printf("<%s>, selecciona: \n1 Mostrar usuario\n2 Barra de carga\n3 Combinatoria\n0 Salir\n<+> Ingresa Opc: ",favalidarco);
		scanf("%d",&faelec);
	if(faelec==1){
		printf("-CEDULA: %s",favalidarc);
		printf("\n-CORREO: %s",favalidarco);
        if(favalidarc=="1726623000"){
            for (int fai = 0; fai < strlen(faNombre); fai++) {
		faNombre[fai] = toupper(faNombre[fai]);
	    }
        printf("%s",faNombre);
        }else if(favalidarc=="1234"){
            for (int fai = 0; fai < strlen(faProfe); fai++) {
		faProfe[fai] = toupper(faProfe[fai]);
	    }
        printf("%s",faProfe);
        }
	}else if(faelec==2){
		fashowProgressBar_e(15);
	}else if(faelec==3){
		faCombinatoriaFernando_par(faNombre);
	}
	

	return (0);
}