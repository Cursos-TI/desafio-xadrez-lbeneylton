#include <stdio.h>
#include <stdlib.h>

//Anatomia das funções recursivas usadas neste exemplo
// void EXAMPLE_FUNCTION (int n){
//     if (n > 0){
//
//
//         EXAMPLE_FUNCTION (n-1)
//     }
// }


//Função para movimento da torre para direita
void moveTower(int n){
    if (n > 0){                       //If para verificar se a recursividade deve continuar
        printf("Direita\n");            
        moveTower(n-1);               //Chama a função novamente mais agora com n igual a n-1
    }
}


//Função para o movimento do Bispo na diagonal superior direita
void moveBishop(int n){
    if (n > 0){                       //If para verificar se a recursividade deve continuar
        printf("Cima Direita\n");       
        moveBishop(n-1);              //Chama a função novamente mais agora com n igual a n-1
    }
    
}


//Função para movimento da Rainha na diagonal superior direita
void moveQueen(int n){
    if (n > 0){
        printf("Esquerda\n");
        moveQueen(n-1);
    }
}


//Função para movimento do Cavalo em L para baixo e esquerda
void moveHorse(int n){
    if (n > 0){
        for(int i=0;i<2;i++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");        
        moveHorse(n-1);
    }
}


int main(){
    
    int horse = 5;
    int tower = 5;
    int queen = 8;
    int bishop = 5;

    printf("A torre irá se movimentar:\n");
    printf("\n\n");
    moveTower(tower);

    printf("O bispo irá se movimentar:\n");
    printf("\n\n");
    moveBishop(bishop);

    printf("A rainha irá se movimentar:\n");
    printf("\n\n");
    moveQueen(queen);

    printf("O cavalo irá se movimentar:\n");
    printf("\n\n");
    moveHorse(horse);
   
}