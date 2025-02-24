#include <stdio.h>

int main(){
 
    int carta1 = 12300000;
    int carta2 = 6000000;

    printf("Entre com a carta1 São Paulo: \n");
    scanf("%d", carta1);

    printf("Entre com carta2 Rio de Janeiro: \n");
    scanf("%d", carta2);


    if (carta1 > carta2){
        printf("Carta1 venceu!\n");
    } else { 
        printf("Carta2 venceu!\n");
    }
}          






