#include <stdio.h>

main(){
    char ch1, ch2;
    printf("Digite um caractere: ");
    scanf("%c", &ch1);
    printf("Digite um caractere: ");
    scanf(" %c", &ch2);
    printf("Os caracteres digitados foram '%c' e '%c'\n", ch1, ch2);
}
