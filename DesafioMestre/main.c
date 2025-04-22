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


//Função para movimento da Torre para direita
void moveTower(int n){
    if (n > 0){                       //Verifica se a recursividade deve continuar
        printf("Direita\n");            
        moveTower(n-1);               //Chama a função novamente, agora com n igual a n-1
    }
}


//Função para o movimento do Bispo na diagonal superior direita
void moveBishop(int n){
    if (n > 0){                       //Verifica se a recursividade deve continuar
        printf("Cima Direita\n");       
        moveBishop(n-1);              //Chama a função novamente, agora com n igual a n-1
    }
    
}


//Função para movimento da Rainha para esquerda
void moveQueen(int n){
    if (n > 0){                  //Verifica se a recursividade deve continuar
        printf("Esquerda\n");
        moveQueen(n-1);          //Chama a função novamente, agora com n igual a n-1
    }
    
}


//Função para movimento do Cavalo em L para baixo e esquerda
void moveHorse(int n){
    if (n > 0){                   //Verifica se a recursividade deve continuar
        for(int i=0;i<2;i++){     //Move o cavalo 2 vezes para baixo
            printf("Baixo\n");
        }
        printf("Esquerda\n");        
        moveHorse(n-1);           //Chama a função novamente, agora com n igual a n-1
    }
}


int main(){
    
    int horse = 5;
    int tower = 5;
    int queen = 8;
    int bishop = 5;

    printf("\n-------------------------\n");
    printf("A torre irá se movimentar:\n");
    printf("\n\n");
    moveTower(tower);

    printf("\n-------------------------\n");
    printf("O bispo irá se movimentar:\n");
    printf("\n\n");
    moveBishop(bishop);

    printf("\n-------------------------\n");
    printf("A rainha irá se movimentar:\n");
    printf("\n\n");
    moveQueen(queen);

    printf("\n-------------------------\n");
    printf("O cavalo irá se movimentar:\n");
    printf("\n\n");
    moveHorse(horse);
   
}