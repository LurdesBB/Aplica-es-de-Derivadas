#include <stdio.h>
#include <math.h>

int main() {
    double v0, v1, t0, t1;

    // Solicite ao usuário que insira a velocidade inicial (v0) e o tempo inicial (t0)
    printf("Insira a velocidade inicial (v0) em m/s: ");
    scanf("%lf", &v0);
    printf("Insira o tempo inicial (t0) em segundos: ");
    scanf("%lf", &t0);

    // Solicite ao usuário que insira a velocidade final (v1) e o tempo final (t1)
    printf("Insira a velocidade final (v1) em m/s: ");
    scanf("%lf", &v1);
    printf("Insira o tempo final (t1) em segundos: ");
    scanf("%lf", &t1);

    // Calcule a aceleração usando a fórmula a(t) = (v1 - v0) / (t1 - t0)
    double aceleracao = (v1 - v0) / (t1 - t0);

    // Exiba o resultado
    printf("A aceleração é %.2lf metros por segundo ao quadrado (m/s²).\n", aceleracao);

    return 0;
}
