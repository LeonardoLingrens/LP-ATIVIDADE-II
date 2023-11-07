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
int opcao;


//codigos
printf("1-camiseta\n");
printf("2-calça \n");
printf("3-sapato \n");

printf("Digite uma das opções acima :\n");
scanf("%i",&opcao);


switch (opcao)
{
case 1 :
    printf("Produto :camiseta\n");
    printf("Preço : 30,00R$");
    break;
case 2 :
    printf("Produto : calça\n");
    printf("Preço : 25,00R$");
    break;
case 3 :
    printf("Produto : sapato\n");
    printf("Preço : 50,00R$");
}
 return 0;
}
