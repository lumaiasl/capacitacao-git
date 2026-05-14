#include<stdio.h>

int main()
{
    float n;
    int idade;
    printf("Digite um número para eu adivinhar: ");
    scanf("%f",&n);

    printf("Esse é o seu número?: %.2d",n);

    printf("Me fale um número: ");
    scanf("%f",&n);
    printf("o quadrado desse número é %f",n*n);


    return 0;
}
