#include <stdio.h>
#include <math.h>
#include <locale.h>
#define	_USE_MATH_DEFINES
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n;
	float x = 1 - (1 / pow(2, 2));
	puts("¬ведите n: ");
	scanf("%i", &n);
	system("pause");
	printf("%g\n", x);
	for (int c = 3; c <= n; ++c) { x = x * (1 - (1 / pow(c, 2))); printf("%g\n", x); };
	return 777;
}