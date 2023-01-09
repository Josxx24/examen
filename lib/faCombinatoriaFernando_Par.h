#include <stdio.h>
#include <windows.h>
#include <string.h>


void faCombinatoriaFernando_par(char faN[])
{
    char fasinrep[15];
    int fa_N = strlen(faN),n=3;

    fasinrep[0]='f';
    fasinrep[1]='e';
    fasinrep[2]='r';
    fasinrep[3]='n';
    fasinrep[4]='a';
    fasinrep[5]='n';
    fasinrep[6]='d';
    fasinrep[7]='o';
    fasinrep[8]='j';
    fasinrep[9]='s';
    fasinrep[10]='u';
    fasinrep[11]='l';
    fasinrep[12]='z';
    fasinrep[13]='c';
    fasinrep[14]=' ';
    
    printf("Cadena(Nombre/correo): %s",faN);
    printf("\nConjunto sin repetir: %s",fasinrep);
    printf("\nLongitud Cadena: %d",fa_N);
    printf("\nLongitud Conjunto: %d",strlen(fasinrep));    

    for(int fai=0; fai<14-2; fai++)
        for(int faj=fai+1; faj<14-1; faj++)
            for(int fak=faj+1; fak<14; fak++)
                printf("\n[%c , %c , %c]",fasinrep[fai],fasinrep[faj],fasinrep[fak]);
}