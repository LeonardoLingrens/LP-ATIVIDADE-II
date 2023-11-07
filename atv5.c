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

int idioma;
int numero;
//codigos
printf("1-Inglês \n");
    
printf("2-Espanhol\n");

printf("3-Francês\n");

printf("Digite o numero para sua linguagem : \n");
scanf("%d",&idioma);
switch (idioma)
{
case 1 :
    printf("Hello welcome");
    break;
case 2 :
    printf("Hola bienvenido");
    break;
case 3 :
    printf("Bonjour bienvenue");
}

 return 0;
}
