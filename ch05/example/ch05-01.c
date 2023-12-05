#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* 可変長配列
		Cでは配列の要素数を宣言する際に変数を指定することが認められている場合がある。
		ただし、この言語ではあまり推奨できず、バージョンの仕様などによって変わるので
		参考程度にとどめておくといいかも
	*/

#if defined(__STDC__NO_VLA)
	printf("not supported");
#else
	int a[argc - 1];
	for (int i = 0; (argc - 1) > i; i++) {
		a[i] = atoi(argv[i + 1]);
	}

	for (int i = 0; (argc - 1) > i; i++) {
		printf("%i\n", a[i]);
	}

#endif
}