#include <stdio.h>
#define QtdQuestionario 10

int main()
{
    int valores[QtdQuestionario];
    int maiorValor = 0;
    for(int i = 0 ; i < QtdQuestionario ; i++){
        printf("Digite o %d valor :", i + 1);
        scanf("%d",&valores[i]);

        if(valores[i] > maiorValor){
            maiorValor = valores[i];
        }

    }
    printf("Maior Valor %d",maiorValor);
    return 0;
}
