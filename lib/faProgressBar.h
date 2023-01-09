#include <Windows.h>
#include <unistd.h>
#include <stdio.h>

int falongitudBarra = 29;
char facorreo[28] = "fernando.aldaz@epn.edu.ec";

const int famaxID = 15;
const int faminID = 1;

enum faColors
{ // Listado de colores (La letra "L" al inicio, indica que es un color m�s claro que su antecesor).
    BLACK = 0,
    BLUE = 1,
    GREEN = 2,
    CYAN = 3,
    RED = 4,
    MAGENTA = 5,
    BROWN = 6,
    LGREY = 7,
    DGREY = 8,
    LBLUE = 9,
    LGREEN = 10,
    LCYAN = 11,
    LRED = 12,
    LMAGENTA = 13,
    YELLOW = 14,
    WHITE = 15
};

void fasetColor(int faBackground, int faText)
{
    int facolorTexto = faText + (faBackground * 15);
    HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(terminal, facolorTexto);
}

int fanumeroAleatorio()
{
    return rand() % (famaxID - faminID + 1) + faminID;
}

void fashowProgressBar_e(int fadelay)
{
    FILE *fichero = fopen("file/log.txt", "w"); 
    fprintf(fichero, "\n EXPORTACION DE EXAMEN I - Barr Rotate \n\n");

    char facaracteres[5] = "|/-\\o"; 

    char fabarr[falongitudBarra]; 
    char fabarr2[falongitudBarra];

    for (int fai = 0; fai < falongitudBarra; fai++) 
    {
        fabarr[fai] = ' ';
        fabarr2[fai] = ' ';
    }

    for (int fai = 0; fai < falongitudBarra; fai++)
    {
        int faporcentaje = (fai * 100) / (falongitudBarra - 1); 

        for (int fax = 0; fax <= 4; fax++) 
        {
            fasetColor(0, fanumeroAleatorio());

            fabarr[fai] = facaracteres[(fax % 5)];
            printf("[%s] %d%%\t\t\t", fabarr, faporcentaje);
            usleep(1000 * fadelay);
            fabarr2[fai] = facorreo[fai];
            printf("[%s] Loading: %d de 28\n", fabarr2, fai);

            if ((fichero) == NULL)
                perror("No se ha posido establecer conexion con el archivo");
            else
            {
                fprintf(fichero, "[%s] %d%%\t\t\t\t\t", fabarr, faporcentaje);
                fprintf(fichero, "\n[%-s] Loading: %d de 28\n", fabarr2, fai);
            }
        }
    }

    fflush(stdin);
    printf("\n");
}