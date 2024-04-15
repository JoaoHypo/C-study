#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    double x1, x2, y1, y2, distancia;

    printf("Distância entre 2 pontos no plano cartesiano.\n\n");
    printf("Digite as coordenadas do ponto 1,\nX1 e Y1 separados por espaço. Ex: 12.9 19.99: ");
    scanf("%lf %lf", &x1, &y1);
    printf("\nDigite as coordenadas do ponto 2,\nX2 e Y2 da mesma forma: ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\n\nA distância entre o ponto 1 e 2 é de: %.2lf unidades\n", distancia);

    return 0;
}