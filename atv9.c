#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int numero,i;

    printf("Digite um n�mero para verificar se ele � primo ou n�o: ");
    scanf("%d",&numero);

    if (numero <=1) {
        printf("N�o � primo");
    } else {
        for(i=2; i < numero ; i++) {
            if(numero % i == 0){
                printf("N�o � primo");
            }
        }
        if(i==numero) {
            printf("� primo");
        }
    }

    return 0; }