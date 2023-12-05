#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void) {
	/* for文を1つ使用して行う */

	bool end16 = false;
	int max_value16 = 1;
	long long max_value32 = 1;

	for (int i = 1; ; i++){
		
		/*16ビット符号付整数より大きいかどうか判定する*/
		if (!end16 && (max_value16 * i) > INT16_MAX) { /* フラグ変数の逆数を利用してそれ以上計算させないようにする */
			printf("16bit = %i, last multiplier = %i\n", max_value16, (i - 1));
			end16 = true;
		}

		/* 32ビット符号付整数より大きかった時にループを終了する */
		if ((max_value32 * i) > INT32_MAX) {
			printf("32bit = %lli, last multiplier = %i\n", max_value32, (i - 1));
			break;
		}

		max_value16 *= i;
		max_value32 *= i;

	}
}