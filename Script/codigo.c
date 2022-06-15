#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num, quadrado;
    float raiz;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num); 
    if(num % 2 == 0){
        raiz = sqrt(num);
        printf("A raiz quadrada e: %.0f", raiz);
    }
    else
    {
        quadrado = num * num;
        printf("O numero e impar!");
        printf("O numero ao quadrado e: %.0f", quadrado);
    }
    return 0;
}
