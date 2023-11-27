#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void) {
	/* 問題1
	* INT_MAXを2乗した値をコンソールに出力するプログラムを2パターン作成
	* (1) INT_MAXを指定したlong longの変数を使用
	* (2) 変数を使用しない
	*/

	long long max = INT_MAX;
	max *= INT_MAX;
	printf("%lli\n", max);

	printf("%lli\n", (long long)INT_MAX * INT_MAX);

	/* 問題1
	* 0xffを利用してコンソールに-2を出力するプログラムを2パターン作成する
	* (1) 変数を利用
	* (2) 変数を利用しない
	*/

	char hex = 0xff;
	printf("%i\n", hex);
}