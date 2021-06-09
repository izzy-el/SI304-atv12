#include <stdio.h>

float subtracao(float a, float b);
float soma();
float divisao();

int main() {
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
