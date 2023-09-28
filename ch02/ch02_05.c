#include <stdio.h>
#include <stdlib.h>


int main(int argc, int* argv[]) {
	printf("%d", sum(atoi(argv[1]), atoi(argv[2])));
}

int sum(int x, int y) {
	return x + y;
}