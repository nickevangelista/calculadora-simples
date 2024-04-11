#include<stdio.h>
int main(void) {
    
    int opcao;
    float Numero1, Numero2;
    
    printf("Fale um numero:");
    scanf("%f", &Numero1);
    printf("Fale um segundo numero:");
    scanf("%f", &Numero2);
    printf("Selecione uma opcao:\n1-soma\n2-subtracao\n3-divisao\n4-multiplicacao\n");
    scanf("%d", &opcao);
    
    if(opcao >= 5 || opcao <= 0) {
        printf("Erro");
    }
    else {
        if(opcao == 1) {
            printf("%f", Numero1 + Numero2);
        }
    else {
        if(opcao == 2) {
            printf("%f", Numero1 - Numero2);
        }
    else {
        if(opcao == 3) {
            printf("%f", Numero1 / Numero2);
        }
    else {
        if(opcao == 4) {
            printf("%f", Numero1 * Numero2);
        }
    }
    }
    }
    }
}


