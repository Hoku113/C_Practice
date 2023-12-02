#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* 問題3
	* コマンドラインで入力された引数の値を利用して `fizzbuzz`問題のプログラムを作る
	* 引数が与えられてないときは "no arguments"を出力して1を返す
	*/

	int value;

	/* コマンドライン引数の数を調べる */
	if (2 != argc) {
		printf("no arguments");
		return 1;
	}

	/* コマンドライン引数の値を変数に格納する */
	value = atoi(argv[1]);

	/* fizzbuzz チェック */
	if (0 == (value % 15)) {
		printf("fizzBuzz");
	}
	else if (0 == (value % 5)) {
		printf("buzz");
	}
	else if (0 == (value % 3)) {
		printf("fiz");
	}
	else {
		printf("%i\n", value);
	}

	return 0;
}