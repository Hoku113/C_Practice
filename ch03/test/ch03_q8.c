#include <stdio.h>
#include <stdint.h>

int main(void) {
	/* 問題１ */
	/* 変数ｘを16ビットの整数-10で初期化し、32ビットの整数yに代入 -10 が出力 */
	int16_t x = -10;
	int32_t y = x;

	printf("x: %d  y: %d\n", x, y);

	/* 問題2 */
	/* 16ビットの整数xを－10で初期化し、32ビットの整数yに代入 65526を出力 */
	uint16_t x1 = -10;
	uint32_t y1 = x1;

	printf("x: %d y: %d\n", x1, y1);

	/* 問題3 */
	/* 32ビットの整数xをー10で初期化、16ビットの整数yに代入 -10, 65526をそれぞれ出力 */
	int32_t x2 = -10;
	uint16_t y2 = x2;

	printf("x: %d y: %d\n", x2, y2);

	/* 問題4 */
	/* 32ビットの整数xをー10で初期化、16ビットの整数yに代入 65536, -10をそれぞれ出力 */
	int32_t x3 = -10;
	int16_t y3 = x3;
	uint16_t z = y3;
	x3 = z;

	printf("x: %d y: %d\n", x3, y3);


	
}