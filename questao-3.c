#include <stdio.h>

int main(){
    char senha[5];
    int caractere, senhaDois, checarDois;
    char checar[5];

    scanf("%s", senha);
    senha[4] = '\0';

    printf("senha cadastrada: %s\n", senha);
    
    do{ 
    scanf("%s", checar);
    checar[4] = '\0';

    senhaDois = atoi(senha);
    checarDois = atoi(checar);

    if(senhaDois == checarDois){
        printf("senha valida!\n");
    } else{
        printf("senha invalida!\n");
    }
    } while(senhaDois != checarDois);
       
    return 0;
}
//ACeita