#include <stdio.h>
#include <math.h>

int main() {
    float valorMercadoria;
    int prestacao, entrada;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valorMercadoria);

    // Calcula o valor da prestação como sendo o maior inteiro possível
    prestacao = (int) floor((valorMercadoria / 3));

    // Calcula o valor da entrada
    entrada = (int) (valorMercadoria - 2 * prestacao);

    printf("Entrada: R$ %d,00\n", entrada);
    printf("Prestacoes: 2 x R$ %d,00\n", prestacao);

    return 0;
}
