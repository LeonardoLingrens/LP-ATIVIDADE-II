/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL,"portuguese");
//variaveis
int clima;
int grausCelsius;
int temperatura;

//codigos
printf ("BEM-VINDO AO JOGO \n");

printf ("Digite a temperatura \n");
scanf("%i",&temperatura);


if (temperatura > 25 )
{
 printf("O clima está ensolarado");
}
else if (temperatura < 15 )
{
   printf ("O clima está chuvoso");
}

else if (temperatura >=15 && temperatura <=25)
{
    printf("O clima está nublado");
}
else
{
   printf ("Error!");
}



 return 0;
}
