#include <stdio.h>
#include <stdlib.h>

// Definimos uma estrutura para agrupar os resultados
// Isso equivale ao objeto { soma, diferenca } do JavaScript
typedef struct {
    int soma;
    int diferenca;
} Resultado;

// Função que calcula e retorna a estrutura preenchida
Resultado calcularRecursivo(int a, int b) {
    Resultado res;

    // Condição de parada (conforme seu código original)
    if (b == 0) {
        res.soma = a;
        res.diferenca = a;
        return res;
    }

    // Realizando os cálculos e atribuindo aos membros da struct
    res.soma = a + b;
    res.diferenca = a - b;

    return res;
}

int main() {
    int a, b;

    printf("--- Calculo de Soma e Diferenca ---\n");
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Chamando a função e armazenando o "objeto" retornado
    Resultado resultado = calcularRecursivo(a, b);

    // Exibindo os resultados acessando os campos com o ponto (.)
    printf("A soma de %d e %d e: %d\n", a, b, resultado.soma);
    printf("A diferenca de %d e %d e: %d\n", a, b, resultado.diferenca);

    printf("\n");
    system("pause");

    return 0;
}