#include <stdio.h>

int main(void) {
	/* goto�� 2 */

	/* switch���̒����烋�[�v�𔲂��� */
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
			goto exit_from_loop;		/* switch�����łȂ�for���̃��[�v����������o�� */
		default:
			printf("bug! never come here");
			break;
		}
	}

exit_from_loop:
	printf("end");
}