#include <stdio.h>
#include <stdbool.h>

int main(void) {
	/* �t���O�ϐ� (�����goto�Ɠ���) */

	bool found = false;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			/* i, j �̐ς��ŏ���10�𒴂����Ƃ��Ƀ��[�v�𒆒f���Ēl���o�͂��� */
			if ((i * j) > 10) {
				printf("i=%i, j=%i\n", i, j);
				found = true;
				break;
			}
		}

		/* ���[�v���I������t���O���������� */
		if (found) {
			break;
		}
	}
}