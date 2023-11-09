#include <stdio.h>
#include <math.h>

int main() {
    double x0, x1, t0, t1;

    // Solicite ao usuário que insira a posição inicial (x0) e o tempo inicial (t0)
    printf("\nInsira a posicao inicial (x0): ");
    scanf("%lf", &x0);
    printf("\nInsira o tempo inicial (t0): ");
    scanf("%lf", &t0);

    // Solicite ao usuário que insira a posição final (x1) e o tempo final (t1)
    printf("\nInsira a posicao final (x1): ");
    scanf("%lf", &x1);
    printf("\nInsira o tempo final (t1): ");
    scanf("%lf", &t1);

    // Calcule a velocidade instantânea usando a fórmula v(t) = (x1 - x0) / (t1 - t0)
    double velocidade = (x1 - x0) / (t1 - t0);

    // Exiba o resultado
    printf("\nA velocidade instantanea eh %.2lf metros por segundo (m/s).\n", velocidade);

    return 0;
}
