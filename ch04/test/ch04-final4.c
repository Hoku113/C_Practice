#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* 問題4
	* コマンドライン引数で指定した数が10以下ならば " too small", 20より大きいときは " too large"
	* 15ならば "good" それ以外の時は " OK "と出力させる
	*/

	int value;

	/* 引数の数を確認する */
	if (2 != argc) {
		printf("specify a number");
		return 1;
	}

	value = atoi(argv[1]);

	/* 引数の値の処理を行う */
	if (10 >= value) {
		printf("too small");
	}
	else if (15 == value) {
		printf("good");
	}
	else if (20 < value) {
		printf("too large");
	}
	else {
		printf("OK");
	}

}