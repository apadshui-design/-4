#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex1() {
	char c = 'q';
	int i = 4;
	float f = 2.05;
	double d = 5e-12;
	printf("%c\n", c);
	printf("%d\n", i);
	printf("%f\n", f);
	printf("%.12f\n", d);

	printf("Ввод нового символа для с: \n");
	scanf("%c", &c);

	printf("Ввод нового целого числа для i: \n");
	scanf("%d", &i);

	printf("Ввод нового дробного числа для f: \n");
	scanf("%f", &f);

	printf("Ввод нового дробного числа для f: \n");
	scanf("%lf", &d);
	



	

	

	return 0;
}
int ex2() {
	int a = 11, b = 3;
	int x=a/b;
	float y=a/b;
	double z=a/b;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("%d\n",x);  //результат целочисленного деления потому что  x целое число ,а и b челые числа
	printf("%f\n", y);  // выводит 3.0 
	printf("%f\n", z); // выводит 3.0

	printf("%f\n",(float)a/b);  // присвоили целочисленное a/b значение вещественного числа 
	printf("%f\n", (double)a / b); // присвоили целочисленное a/b значение вещественного числа высокой точности 
	printf("%f\n", (float)a / b); //  у скобок высший приоритет a/b остается целые числа
	printf("%f\n", (double)a / b); // у скобок высший приоритет a/b остается целые числа\

	return 0;


}



int main() {
	setlocale(LC_ALL, ".UTF8");			//не работает через setlocale(LC_CTYPE, "RUS");
	ex2();
	return 0;
}