#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
	/* 問題2
	* 引数でしたい下数が10で割り切れたらA、3で割り切れたらB, 30で割り切れたらC,　それ以外はDを出力させる
	* コマンドライン引数が1個以外なら "specify a number" を出力させる
	*/

	int value;

	/* 引数の数を確認する */
	if (2 != argc) {
		printf("specify a number");
		return 1;
	}

	value = atoi(argv[1]);

	/* 倍数チェック */
	if (0 == (value % 30)) {
		printf("C");
	}
	else if (0 == (value % 10)) {
		printf("A");
	}
	else if (0 == (value % 3)) {
		printf("B");
	}
	else {
		printf("D");
	}
}