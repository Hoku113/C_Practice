#include <stdio.h>

int main(void) {
	/* goto文 2 */

	/* switch文の中からループを抜ける */
	for (int i = 0; i < 8; i++) {
		switch (i % 3)
		{
		case 0:
			printf("Fizz\n");
			break;
		case 1:
			printf("Fizz + 1\n");
			break;
		case 2:
			goto exit_from_loop;		/* switchだけでなくfor文のループからも抜け出す */
		default:
			printf("bug! never come here");
			break;
		}
	}

exit_from_loop:
	printf("end");
}