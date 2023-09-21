#include <stdio.h>

int main() {
    int numero, soma = 0;

    scanf("%d", &numero);
    
    if(numero %2 == 0){
        printf("O numero %d e par\n", numero);
    }else {
        printf("O numero %d e impar\n", numero);
    }

        while(numero > 0){
            soma += numero % 10;
            numero /= 10;
        }
    printf("A soma dos algarismos e : %d\n", soma);

    return 0;
}