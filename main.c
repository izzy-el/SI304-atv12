#include <stdio.h>

float subtracao();
float soma();
float divisao();
float multi();

int main() {
	float a;
	float b;

	scanf("Digite o valor de a: %f", &a);
	scanf("Digite o valor de b: %f", &b);

	printf("Soma: %.2f\n", soma(a, b));
	printf("Sub: %.2f\n", subtracao(a, b));
	printf("Mult: %.2f\n", mult(a, b));
	printf("Div: %.2f\n", divisao(a, b));
	
	return 0;
}


float subtracao(float a, float b) {
	return a - b;
}

float soma(float a, float b) {
	return a + b;
}

float divisao(float a, float b) {
	return a / b;
}

float mult(float a, float b) {
	return a * b;
}
