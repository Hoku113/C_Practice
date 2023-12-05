#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char* argv[]) {
	/* 問題2 
	* 変数をINT_MAXで初期化し、コマンドライン引数で与えた数で順に除算を実行した結果を
	* 出力するプログラムを作成する。
	* ただし、コマンドライン引数に0が含まれたいた場合はエラーを出力して処理を終了する
	*/

	/* 変数宣言 */
	int result = INT_MAX;

	/* 与えられた引数の数を順に参照する */
	for (int i = 1; argc > i; i++){

		/* コマンドライン引数に0が含まれているか確認する */
		if (0 == atoi(argv[i])) {
			printf("divisor is 0");
			return 1;
		}

		/* 除算の実装 */
		result /= atoi(argv[i]);
	}

	/* 最終的な結果の出力 */
	printf("%i\n", result);

	return 0;
}