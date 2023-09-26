#include <stdio.h>

int main() {
    int numero, soma = 0;

    scanf("%d", &numero);
    
    if(numero %2 == 0){
        printf(" %d eh par\n", numero);
    }else {
        printf("%d eh impar\n", numero);
    }
        while(numero > 0){
            soma += numero % 10;
            numero /= 10;
        }
    printf("A soma dos algarismos de %d eh %d \n", numeros, soma);

    return 0;
}