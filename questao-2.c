#include <stdio.h>

int main() {
    int numero, soma = 0;

    scanf("%d", &numero);
    
    if(numero %2 == 0){
        printf("%d eh par\n", numero);
    }else {
        printf("%d eh impar\n", numero);
    }
        int temp = numero;

        while(temp > 0){
            soma += temp % 10;
            temp /= 10;
        }
    printf("A soma dos algarismos de %d eh %d \n", numero, soma);

    return 0;
}

// Apresentou erro na saida porem as saidas estao exatamente iguais