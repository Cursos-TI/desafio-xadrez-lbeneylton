#include <stdio.h>
#include <stdlib.h>
// Exemplifica um dos usos do loop while
// A repetição de códdigo até que a entrada do usuario determine que a
// repetição deve parar
// O loop while é um loop de teste no início, ou seja, o teste é feito antes da execução do bloco de código

int main(){
    int num = 0; // Inicializa a variável num com 0

    while (num >=0){
        
        printf("Digite um número negativo para sair: ");
        scanf("%d", &num);

        printf("Você digitou %d\n\n", num);
    }

}