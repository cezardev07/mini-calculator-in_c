#include <stdio.h>

int main() {
    float primeiraParcela, segundaParcela, resultado;
    printf("\n Digite um valor positivo => \t");
    scanf("%f", &primeiraParcela);

    if (primeiraParcela < 0){
        printf("\n Ops o valor digitado e negativo \n");
        printf("\n Tente Novamente ^-^");
        printf("\n Digite um valor que nao seja negativo => \t");
        scanf("%f", &primeiraParcela);
    };
    printf("\n + \n");
    printf("\n Digite mais um valor positivo para realizar a soma => \t");
    scanf("%f", &segundaParcela);
    if (segundaParcela < 0){
        printf("\n Ops o valor digitado e negativo \n");
        printf("\n Tente Novamente ^-^");
        printf("\n Digite um valor que nao seja negativo => \t");
        scanf("%f", &segundaParcela);
    };

    resultado = primeiraParcela + segundaParcela;
    printf("\n = \n");
    printf("\n Soma dos valores digitados:  %f + %f \n", primeiraParcela, segundaParcela );
    printf("\n \n Resultado: %f \n \n",resultado);

return 0;
};
