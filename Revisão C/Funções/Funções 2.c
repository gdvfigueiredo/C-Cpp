#include <stdio.h>
#include <stdlib.h>

float CalculaMedia(float *n1, float *n2, float *n3){

    return ((*n1 + *n2 + *n3)/3);

}

int main (){

    float a,b,c;

    printf ("Qual o valor da primeira nota?\n");
    scanf ("%f", &a);

    printf ("Qual o valor da segunda nota?\n");
    scanf ("%f", &b);

    printf ("Qual o valor da terceira nota?\n");
    scanf ("%f", &c);

    float media = CalculaMedia(&a, &b, &c);

    if (media>=6){
        printf("Aprovado\n");
    }
    else if(media<6 && media>=5){
        printf("Recuperacao\n");
    }
    else {
        printf("Reprovado\n");
    }

    return 0;
}
