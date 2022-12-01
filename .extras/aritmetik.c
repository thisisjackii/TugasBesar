#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

float summation(float* num1, float* num2){
	return *num1 + *num2;
}

float subtraction(float* num1, float* num2){
	return *num1 - *num2;
}

float multiplication(float* num1, float* num2){
	return *num1 * *num2;
}

float division(float* num1, float* num2){
	return *num1 / *num2;
}

int main(){
	float x, z, res; char y, ch;
	printf("Masukkan ekspresi matematis: (pisahkan bilangan dan operasi dengan SPASI) ");
	scanf("%f %c %f", &x, &y, &z); ch = getch();
	printf("Operasi yang anda masukkan: %f %c %f", x, y, z);
	if(ch=='\n'){
		
	}
	switch(y){
		case '+':
			res = summation(&x, &z); break;
		case '-':
			res = subtraction(&x, &z); break;
		case '*':
			res = multiplication(&x, &z); break;
		case '/':
		case ':':
			res = division(&x, &z); break;
		default: break;
	}
	printf("\n%f", res);
	printf("\nHasil dari %f %c %f adalah %f", x, y, z, res);
	return 0;
}
