#include <stdio.h>

int main(){
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a == b){
        printf("O valores lidos sao iguais");
    }else if(a > b){   
        printf("%d e maior que %d\n", a, b);
        if(a % b == 0){
            printf("%d e multiplo de %d\n", b, a);
        }else{
            printf("%d nao e multiplo de %d\n", b, a);
        }
    }else if (b > a){
        printf("%d e maior que %d\n", b, a);
        if(b % a == 0){
            printf("%d e multiplo de %d\n", a, b);
        }else{
            printf("%d nao e multiplo de %d\n", a, b);
        }
    }
    return 0;
}