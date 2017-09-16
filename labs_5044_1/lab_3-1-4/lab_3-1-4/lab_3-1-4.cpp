#include <stdio.h>

#define WIDTH 80
#define LENGTH (WIDTH + 10)
#define SQUARE(X) (X)*(X)
#define PI 3.1415


int main() {
	printf("%d \n", WIDTH);
	printf("width = %d \n", WIDTH);

	printf("length = %d \n", LENGTH);

	printf("5^2 = %d \n", SQUARE(5));

	printf("pi = %f \n", PI);

	getchar();
	return 0;
}