#include <stdio.h>
#include <stdlib.h>

//função que vai ver se é par ou impar e dependendo do que for multiplicar por 2 ou somar 10
void processar_vetor (int *ptr, int tam){
    for (int i=0; i < tam; i++){
        if (i % 2 == 0){
            *ptr += 10;
        }
        else {
            *ptr *= 2;

        }
        ptr++;
    }

}


int main (){

    int valor [5];
    int *prox = valor;

    //o enunciado pedia para fazer a leitura sem []
    for (int i = 0; i<5; i++){
        printf ("Digite o %d valor", i+1);
        scanf ("%d", prox);
        prox++;
    }

    processar_vetor (valor, 5);

    //também imprimindo sem []
    prox = valor;

    for (int i = 0; i < 5; i++){

        printf ("Valor %d: %d \n", i, *prox);
        prox ++;
    }

    return 0;
}
