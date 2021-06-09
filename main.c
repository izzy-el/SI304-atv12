#include <stdio.h>

float subtracao(float a, float b);
float soma();
float divisao();
float multi(float a, float b);

int main() {
	float a;
	float b;

	scanf("Digite o valor de a: %f", &a);
	scanf("Digite o valor de b: %f", &b);

	printf("Hello World!\n");

	return 0;
}


float subtracao(float a, float b){
	return a-b;
}

float soma(float a, float b) {
	return a + b;
}
float divisao(float a, float b){
	return a/b;
}

float mult(float a, float b){
	return a * b;
}
