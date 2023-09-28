#include <stdio.h>

int main() {
    char nivel;
    double salario, aumento, novoSalario;
    
    scanf(" %c %lf", &nivel, &salario);

    
    switch (nivel) {
        case 'a':
            aumento = salario * 0.05;
            break;
        case 'b':
            aumento = salario * 0.07;
            break;
        case 'c':
            aumento = salario * 0.08;
            break;
        default:
            printf("Nivel de experiencia invalido!\n");
            return 1;
    }

    
    novoSalario = salario + aumento;

   
    printf("R$ %.2lf\n", novoSalario);

    return 0;
}

//Aceita no marvin
