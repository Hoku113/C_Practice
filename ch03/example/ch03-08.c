#include <stdio.h>
#include <stdint.h>
int main(void) {
	/* キャスト式 */
	int16_t i16 = -1;
	int32_t i32 = (uint16_t)i16; /* i16を `uint`型として扱いi32に代入している */

	printf("%d\n", i32);

	/* 浮動小数点を扱ったキャスト */
	double d = 321.543;
	printf("%i\n", (int)d); /* キャストで整数型に変換 */
}