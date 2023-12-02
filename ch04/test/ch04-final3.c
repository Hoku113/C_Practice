#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	 /* 問題3
	 * コマンドライン引数で指定した数を5で割ってあまりが出たらその文字を出力
	 * コマンドライン引数が1個以外の時 " specify a numnber "を出力
	 */

	/* コマンドライン引数チェック */
	if (2 != argc) {
		printf("specify a number");
	}

	/* パターンに応じでどの行動をするのかを決める */
	switch (atoi(argv[1]) % 5)
	{
	case 0:
		printf("ZERO");
		break;
	case 1:
		printf("ONE");
		break;
	case 2:
		printf("TWO");
		break;
	case 3:
		printf("FOUR");
		break;
	default:
		break;
	}
}