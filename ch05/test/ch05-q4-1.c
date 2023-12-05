#include <stdio.h>

int main(void) {
	/* 問題1
	* 1以上30以下の数を連続してコンソールに出力するプログラムを作成する。
	* ただし、6の倍数の時は出力しないようにする
	*/

	for (int i = 1; 30 >= i; i++) {
		
		/* 6の倍数かチェックする */
		if ((i % 6) == 0) {
			continue;
		}

		printf("%i\n", i);
	}
}