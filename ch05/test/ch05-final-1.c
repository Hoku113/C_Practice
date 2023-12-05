#include <stdio.h>
#include <stdbool.h>
#define RANGE_START 30
#define RANGE_END 80

int main(void) {
	/* 最終問題1
	* 配列を利用して、30～80までの間の素数をすべて出力するプログラムを作る	
	*/

	/* 配列を定義する */
	bool multiple[RANGE_END + 1] = { false };			/* 配列のすべての中身をfalseで初期化する */

	/* 2以上の倍数かどうかを判別する */
	for (int i = 2; i <= RANGE_END; i++) {
		/* 何かしらの倍数ならスキップする */
		if (multiple[i]) {
			continue;
		}

		/* 出力範囲かどうか */
		if (i >= RANGE_START) {
			printf("%i\n", i);
		}

		/* この数の倍数を真に設定する */
		for (int j = 1; (i * j) <= RANGE_END; j++) {
			multiple[i * j] = true;
		}
	}



}