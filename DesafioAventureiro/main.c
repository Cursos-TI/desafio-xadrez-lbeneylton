#include <stdio.h>
#include <stdlib.h>

int main(){

    int moveTower = 5;
    int moveQuenn = 8;
    int moveBishop = 5;
    int moveHorse = 2;
    int interator = 0;


    printf("\n\n\n");

   //Movimento da torre para direita
    printf("A torre irá se movimentar:\n");
    while (interator < moveTower){
        printf("Direita\n");
        interator++;
    }

    printf("\n\n\n");

    //Movimento do Bispo na diagonal superior direita
    printf("O bispo irá se movimentar:\n");
    interator = 0;
    do{
        printf("Cima Direita\n");
        interator++;
    }while(interator<moveBishop);

    printf("\n\n\n");

    //Movimento da Rainha na diagonal superior direita
    printf("A rainha irá se movimentar:\n");
    for(interator=0;interator<moveQuenn;interator++){
        printf("Esquerda\n");
    }

    printf("\n\n\n");

    //Movimento da Rainha na diagonal superior direita
    printf("O cavalo irá se movimentar:\n");
    interator = 0;
    while(interator<moveHorse){
        for(i=0;i<2;i++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        interator++;
    }

    printf("\n\n\n");
}