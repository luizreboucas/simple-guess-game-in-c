#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int geradorNumero(int *valorGerado){
    srand(time(0));
    *valorGerado = (rand() % 100) + 1;
    return *valorGerado;
}

int main() {
    int valorGerado;
    geradorNumero(&valorGerado);
    int valorChutado;
    int tentativas = 0;
    int acertou = 0;
    printf("---------------------------------------\n");
    printf("---Bem vindo ao Jogo da adivinhação!---\n");
    printf("-qual valor deseja chutar? (de 1 a 100)\n");
    scanf("%d", &valorChutado);
    while(tentativas <6){
        if (valorChutado == valorGerado){
            printf("Parabéns! Você acertou em %d tentativas!!\n", tentativas);
            acertou = 1;
            break;
        }
        else if(valorChutado < valorGerado){
            printf("O número gerado é maior!\n");
            printf("tentativas restantes: %d\n", 6 - tentativas);
            scanf("%d", &valorChutado);
            tentativas++;
        }else{
            printf("o número gerado é menor\n");
            printf("tentativas restantes: %d\n", 6 - tentativas);
            scanf("%d", &valorChutado);
            tentativas++;
        }
        
    }
    if(!acertou){
        printf("você perdeu! tente novamente!\n");
    }
    
    return 0;
}
