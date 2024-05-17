/* versão a corrigir*/

#include <stdio.h>

int main (){
    int entrada, parcela, aux, valor, div;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 100){
        div = (valor % 100);
            if (div != 0){
                aux = (valor - div);
                parcela = (valor / 2);
                entrada = (valor + div);
                printf("A entrada eh: %d \n", entrada);
                printf("a parcela eh: %d", parcela / 2);
            } else if(div == 0){
                entrada = (valor / 2);
                printf("A entrada eh: %d \n", entrada);
                printf("a parcela eh: %d", parcela / 2);
            }
    }else {
        printf("numero inválido");
    }

}
