/******************************************************************************
Nome:Kauê Henrique Bortoletto da Matta
R.A: 8136527          22/03/23
*******************************************************************************/

#include <stdio.h>

int leia() {
int lado;
scanf("%d", &lado);
return lado;
}

int formaTriangulo(int a, int b, int c) {
if (a < b + c && b < a + c && c < a + b) {
return 1; // verdadeiro: os lados formam um triângulo
} else {
return 0; // falso: os lados não formam um triângulo
}
}

void mostraTipo(int a, int b, int c) {
if (a == b && b == c) {
printf("O triângulo é equilátero\n");
} else if (a == b || a == c || b == c) {
printf("O triângulo é isósceles\n");
} else {
printf("O triângulo é escaleno\n");
}
}

int main() {
int a, b, c;

printf("Digite o primeiro lado: ");
a = leia();

printf("Digite o segundo lado: ");
b = leia();

printf("Digite o terceiro lado: ");
c = leia();

if (formaTriangulo(a, b, c)) {
mostraTipo(a, b, c);
} else {
printf("Os lados não formam um triângulo\n");
}

return 0;
}