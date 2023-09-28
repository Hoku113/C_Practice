#include <stdio.h>

int main(void) {

	printf("%d", func2(one(), one(), one()));

	return func();
}

int func(void) {
	return 1;
}

int func2(int x, int y, int z) {
	return x + y + z;
}

int one(void) {
	return 1;
}