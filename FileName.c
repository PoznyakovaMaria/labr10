#define _CRT_SECURE_NO_WARNINGS     
#include <stdio.h>     
#include <locale.h>     
#define _USE_MATH_DEFINES     
#include <math.h>

int task1();
double f1();
double f2();
void main() {
	setlocale(LC_CTYPE, "RUS");
	task1();
}
int task1() {
	double x;
	printf("x^2 - 3x+9  | x <= 3 \n");
	printf("1/(x^3 + 3) | x > 3  \n");
	printf("¬ведите значение x\n");
	scanf("%lf", &x);
	printf("%lf\n", f1(x));
	printf("%lf\n", f2(x));
}
double f1(double x) {
	if (x <= 3) {
		double y;
		y = pow(x, 2) - 3 * x + 9;
		return y;
	}
	else if (x > 3) {
		double u;
		u = 1 / (pow(x, 3) + 3);
		return u;
	}
	else {
		printf("ќшибка!");
	}
}
double f2(double x) {
	double f;
	f = x * exp(sin(pow(x, 2)));
}