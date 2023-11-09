#include <stdio.h>
#include <math.h>

int main() {
    // Dados do problema
    double h; // Altura da caixa em centímetros
    double V; // Volume da caixa em centímetros cúbicos
    
    printf("\nDigite a altura:");
    scanf("%lf",&h);

    printf("\nDigite o volume:");
    scanf("%lf",&V);
   

    // Encontrar a área mínima
    double a, b, A, min_A = 1000000000000000000.0; // Inicializar min_A com um valor grande

    for (b = 1.0; b <= 100.0; b += 0.001) {
        a = V / (h * b); // Encontrar o valor de 'a' a partir do volume e altura
        A = 2 * (a * b + a * h + b * h); // Calcular a área

        if (A < min_A) {
            min_A = A; // Atualizar a área mínima
        } else {
            break; // Parar o loop quando a área começar a aumentar
        }
    }

    // Resultados
    printf("\nA caixa de papelao deve ter as seguintes dimensoes:\n");
    printf("\nComprimento (a): %.2lf cm\n", a);
    printf("\nLargura (b): %.2lf cm\n", b);

    return 0;
}
