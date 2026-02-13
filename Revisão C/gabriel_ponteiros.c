#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
int main () {

    int b = 10, *ceci;

    ceci = &b;


    printf ("%d \n", b);

    *ceci = 20;

    printf ("%d", b);

    return 0;
}
*/

/*
    void desenhaBorda (){

        printf ("|--------------| \n");

    }

    int main (){

        desenhaBorda ();

        printf ("hi \n");

        desenhaBorda ();

        return 0;
    }
    */

        int main (){

            int vetor [10];
            int *roq = vetor;
            int soma = 0;
            int maior;

            for (int i=0; i<10; i++){
                printf ("Digite o valor do vetor %d \n", i);
                scanf ("&d", &vetor [i]);
            }

            maior = *roq;

            for (int i = 0; i<10; i++){

                soma += *roq;

                if(*roq > maior){
                    maior = *roq;
                }
                roq++;
            }

            printf ("Soma total: %d \n", soma);
            printf ("Maior valor: %d \n", maior);
            printf ("Endereco do maior valor: %p \n", (void*)&maior);

        return 0;
        }
