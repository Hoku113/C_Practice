#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* 問題2
	* コマンドライン引数で入力した数が123なら"Bingo", それより大きければ"Greater"
	* 小さければ"less", 引数が1個以外の時は"specify a number"を出力
	*/

	int value;							/* コマンドライン引数の値を格納する変数 */

	/* コマンドライン引数の数が1つか調べる */
	if (2 == argc) {

		/* コマンドライン引数の値を変数に格納する */
		value = atoi(argv[1]);

		/* コマンドライン引数の値を調べる */
		if (123 == value) {
			printf("Bingo");
		}
		else if (123 < value) {
			printf("Greater");
		}
		else if (123 > value) {
			printf("less");
		}
	}
	else {
		printf("specify a number");
	}
}