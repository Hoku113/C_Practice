#include <stdio.h>
#include <limits.h>				/* それぞれの型の値の最大値、最小値があらかじめ格納されているヘッダーファイル */

int main(void) {
	/* 問題１ */
	/* 警告が出る原因を特定し書き直す */
	long long value = LLONG_MAX;
	printf("%lli\n", value);			/* `%i` -> `%lli` */

	/* 問題2 */
	/* 型の定義値を変数に代入してから出力させる */

	int i = INT_MAX;
	unsigned int uInt = UINT_MAX;
	long lInt = LONG_MAX;
	unsigned long uLInt = ULONG_MAX;
	long long llInt = LLONG_MAX;
	unsigned long long uLlInt = ULLONG_MAX;

	printf("%i\n", i);
	printf("%ui\n", uInt);
	printf("%li\n", lInt);
	printf("%lu\n", uLInt);
	printf("%lli\n", llInt);
	printf("%llu\n", uLlInt);

	/* 問題3 */
	/* 以下のプログラムの警告が出る原因を特定し書き直す */
	printf("%lli, %llu\n", 32LL, 48ULL);
}