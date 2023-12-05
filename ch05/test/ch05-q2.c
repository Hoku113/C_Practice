#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* 問題１
	* コマンドライン引数で指定した制の数までの総和を出力するプログラムを作る
	*/

	/* 与えられた数値を足した結果を格納する変数 */
	int result = 0;

	/* 与えられた引数の回数分だけループを繰り返す */
	for (int i = 0; i <= atoi(argv[1]); i++) {
		result += i;
	}

	printf("%i\n", result);

	return 0;
}