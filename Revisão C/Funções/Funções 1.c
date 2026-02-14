#include <stdio.h>
#include <stdlib.h>

//duas funções com parâmetro para ver o antecessor e o sucessor de um determinado número
/*
    void sucessor(int num){
        printf ("O sucessor de %d eh %d\n", num, num+1);
    }

    int antecessor (int num){
        return num - 1;
    }

int main (){

    int a;

    printf("Digite um valor:\n");
    scanf("%d", &a);

    sucessor (a);

    printf ("O antecessor de %d eh %d\n", a, antecessor(a));

    return 0;
}

-------------------------------------------------------------------
função com dois parâmetros para fazer suma soma

int soma (int num, int num1){
        return num+num1;
}


int main (){

    int a, b;

    printf ("Digite o primeiro numero da soma:\n");
    scanf ("%d", &a);

    printf ("Digite o segundo numero da soma:\n");
    scanf ("%d", &b);

    printf("O valor da soma eh:%d", soma(a, b));

    return 0;
}

--------------------------------------------------------------------
*/
//função com ponteiro

int soma (int *num){
    return *num + 10;
}

int main (){

    int a;

    printf ("Digite um valor:\n");
    scanf ("%d", &a);

    a = soma (&a);

    printf ("O valor eh:%d", a);

    return 0;
}
