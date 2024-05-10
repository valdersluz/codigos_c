#include <stdio.h>

int main(){
    int num, d1, d2, d3, d4, d5;

    printf("Digite um numero inteiro menor do que 32.: ");
    scanf("%d", &num);

    printf("\n");
    printf("o numero eh: %d\n", num);

    d5 = (num % 2);
    num = (num / 2);

    d4 = (num % 2);
    num = (num / 2);

    d3 = (num % 2);
    num = (num / 2);

    d2 = (num % 2);
    num = (num / 2);

    d1 = (num % 2);
    num = (num / 2);

    printf("%d %d %d %d %d", d1, d2, d3, d4, d5);
}
