#include <stdio.h>
#include <limits.h>

int main(void) {
	/* 問題1 
	   キャストを使わずにdboule型の値をintに変換して出力させる
	*/

	double d = 321.534;
	int i = d;
	printf("%i\n", i);

	/* 問題2
	* キャストを使ってINT_MINを正の整数としてコンソールに出力する
	*/

	int min = INT_MIN;
	printf("%lli\n", (long long)(unsigned)min);

}