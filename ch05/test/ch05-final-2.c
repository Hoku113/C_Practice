#include <stdio.h>
#include <stdint.h>

int main(void) {
	/* 最終問題2
	* 1から順に掛け合わせて求められる16ビット符号付整数、
	* 32ビット符号付整数それぞれの最大値と乗数を出力するプログラムを作成する
	*/

	int max_value16 = 1;
	long long max_value32 = 1;

	/* for文を2つ使用して実装する */
	for (int i = 1; ; i++) {
		/* 16ビットの符号付整数の最大値より大きくなったらループを終了する */
		if ((max_value16 * i) > INT16_MAX) {
			printf("16bit = %i,  last multiplier = %i\n", max_value16, (i - 1));
			break;
		}

		max_value16 *= i;
	}

	for (int j = 1; ; j++) {
		if ((max_value32 * j) > INT32_MAX) {
			printf("32bit = %lli, last multiplier = %i\n", max_value32, (j - 1));
			break;
		}

		max_value32 *= j;
	}
}