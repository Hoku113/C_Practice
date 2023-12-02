#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* プロトタイプ宣言 */
bool event(int n);

int main(int argc, char* argv[]) {
	/* 問題1
	* 条件演算子を使用して与えられた引数が偶数なら真、奇数なら偽を返す関数を定義する
	*/
	
	bool result;

	result = event(atoi(argv[1]));

	printf("%i\n", result);
}

/* 引数に与えられた数が偶数か奇数かを判定して結果を返す */
bool event(int n) {
	/* 問題2
	* 問題演算子を使わずに同じ処理を行う
	*/

	if (0 == (n % 2)) {
		return true;
	}
	else {
		return false;
	}

	/* return (0 == (n % 2)) ? true : false; */
}