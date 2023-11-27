#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(int argc, char* argv[]) {
	/* 
		問題1
		コマンドライン引数で与えた2つの数値をdoubleに変換して加減乗除をさせる
	*/

	double num1, num2;

	/* コマンドライン引数の文字列をdouble型に変換する */
	num1 = atof(argv[1]);
	num2 = atof(argv[2]);

	/* 加減乗除 */
	printf("%f\n", num1 + num2);
	printf("%f\n", num1 - num2);
	printf("%f\n", num1 * num2);
	printf("%f\n", num1 / num2);

	/* 
		問題2
		コンソールにLDBL_MAXの値を出力させる
	*/

	printf("%lf\n", LDBL_MAX);

}