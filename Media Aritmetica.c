#include <stdio.h>
void main(){

    float nota1, nota2, nota3, media;

    printf("Insira a primeira nota: ");
    scanf("%f",&nota1);

    printf("Insira a segunda nota: ");
    scanf("%f",&nota2);

    printf("Insira a terceira nota: ");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3)/ 3;
    printf("A media e: %f\n",media);

    if(media >= 6.0){
        printf("Voce foi Aprovado\n");
    }
    else
        printf("Voce foi Reprovado\n");

}
