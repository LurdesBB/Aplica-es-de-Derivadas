#include <stdio.h>

int main() {
    int b, d;
    double p, custo_total, lucro_maximo = 0.0;

    // Solicita ao usuário que insira o número de bois
    printf("\nDigite o numero de bois:");
    scanf("%d", &b);

    // Solicita ao usuário que insira o peso de cada boi
    printf("\nDigite o peso de cada boi:");
    scanf("%lf", &p);

    // Solicita ao usuário que insira o custo total
    printf("\nDigite o custo total:");
    scanf("%lf", &custo_total);

    for (d = 0; ; d++) {
        // Calcula o preço por quilo, que diminui 5 centavos por dia
        double preco_por_quilo = 18.0 - 0.05 * d;

        // Calcula o peso total dos bois, levando em consideração o ganho diário de peso
        double peso_total = b * p + b * 1.5 * d;

        // Calcula o custo diário, assumindo um custo fixo de R$ 2,00 por boi por dia
        double custo_diario = 2.0 * b * d;

        // Calcula o lucro para o dia atual
        double lucro = (peso_total * preco_por_quilo) - (custo_total + custo_diario);

        // Se o lucro for menor que o lucro máximo encontrado até agora, encerra o loop
        if (lucro < lucro_maximo) {
            break;
        }

        // Atualiza o lucro máximo se o lucro atual for maior
        lucro_maximo = lucro;
    }

    // Imprime o número de dias que o fazendeiro deve aguardar para maximizar o lucro
    printf("\nO fazendeiro deve aguardar %d dias para maximizar seu lucro.\n", d - 1);

    return 0;
}
