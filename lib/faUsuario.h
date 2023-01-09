#include <stdio.h>
#include <string.h>

int faContrasenia(char fau[], char fac[]){
    char facedula[11] = "1726623000", facorreo[26] = "fernando.aldaz@epn.edu.ec";
    int fai=strcmp(fau,facedula);
    int faj=strcmp(fac,facorreo);

   if (fai==1 && faj==1 || fau=="PROFE" && fac=="1234")
    {
        return 0;
}else{
    return 1;
}
}