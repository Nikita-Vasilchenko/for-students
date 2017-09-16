#include <stdio.h>

void writeHello() {
	printf("Hello!\n");
}

int calc2x2() {
	return 2 * 2;
}

float calc5d2() {
	float data = float(5) / 2;

	return data;
}

int main() {
	writeHello();
	
	int x = calc2x2();
	printf("%d\n", x);

	float y = calc5d2();
	printf("%.1f\n", y);

	getchar();
	return 0;
}