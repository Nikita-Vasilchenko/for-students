#include "my_define.h"
#undef WIDTH

int main() {
	width();

	int WIDTH = 30;
	printf("%d", WIDTH);

	getchar();
}