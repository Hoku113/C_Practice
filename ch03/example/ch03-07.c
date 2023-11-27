#include <stdio.h>
#define CONSUMPTION_TAX_RATE 8
#define CONSUMPTION_TAX_RATE_FUNC(x) x * 8 / 100

int main(void) {
	/* マクロを使用したプログラム */
	printf("%i\n", (100 * CONSUMPTION_TAX_RATE / 100));
	printf("%i\n", (230 * CONSUMPTION_TAX_RATE / 100));

	/* 関数的マクロを使用したプログラム */
	printf("%i\n", CONSUMPTION_TAX_RATE_FUNC(100));
	printf("%i\n", CONSUMPTION_TAX_RATE_FUNC(230));
}