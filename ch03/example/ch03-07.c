#include <stdio.h>
#define CONSUMPTION_TAX_RATE 8
#define CONSUMPTION_TAX_RATE_FUNC(x) x * 8 / 100

int main(void) {
	/* �}�N�����g�p�����v���O���� */
	printf("%i\n", (100 * CONSUMPTION_TAX_RATE / 100));
	printf("%i\n", (230 * CONSUMPTION_TAX_RATE / 100));

	/* �֐��I�}�N�����g�p�����v���O���� */
	printf("%i\n", CONSUMPTION_TAX_RATE_FUNC(100));
	printf("%i\n", CONSUMPTION_TAX_RATE_FUNC(230));
}