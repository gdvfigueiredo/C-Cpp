#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int num){
    int primo = 1;

    if(num < 2){
       return 0;

    } else{
        for(int i=2; i*i <= num; i++){
            if(num % i == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main (){

    int a;

    printf ("Digite um numero interio positivo:\n");
    scanf ("%d", &a);

    int primo = ehPrimo(a);

    if(primo){
        printf("Eh primo");
    }
    else{
        printf("Nao eh primo");
    }

    return 0;
}
