#include <stdio.h>

int main(){
    int ano;
    scanf("%d", &ano);


    int copadomundo[] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018, 2022};
    int olimpiadas[] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020};

    int verificarCopa = 0;
    int verificarOlimpiada = 0;

    for(int a = 0;a < sizeof(copadomundo)/sizeof(copadomundo[0]); a++){
        if(ano == copadomundo[a]){
            verificarCopa = 1;
        }
    }
    for(int a = 0;a < sizeof(olimpiadas)/sizeof(olimpiadas[0]); a++){
        if(ano == olimpiadas[a]){
            verificarOlimpiada = 1;
        }
    }

    if(verificarCopa == 1){
        printf("A copa do mundo mundo ocorreu no ano de %d.\n", ano);
    } else if(verificarOlimpiada == 1){
        printf("As Olimpiadas ocorreram no ano de %d.\n", ano);
    } else {
        printf("Nao houve nem copa nem olimpiadas no ano de %d!\n", ano);
    }
    return 0;
}