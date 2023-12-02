#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* プロトタイプ宣言 */
bool odd(int number);

int main(int argc, char* argv[]) {
	/* 問題1
	* コマンドライン引数が奇数なら `odd` 偶数なら `even`を出力させるプログラム
	*/

	int value;

	/* 引数の数を確認する */
	if (2 != argc) {
		return 1;
	}

	value = atoi(argv[1]);

	bool judge = odd(value);

	if (true == judge) {
		printf("odd");
	}
	else {
		printf("even");
	}

}

bool odd(int number) {

	if (1 == (number % 2)){
		return true;
	}
	else {
		return false;
	}

	
}