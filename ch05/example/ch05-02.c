#include <stdio.h>

int main(void) {
	/* goto�� */

	/* ���d���[�v�̓�������w�肵�����x���֐�����ڂ����Ƃ��ł��� */
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				printf("i: %i, j: %i, k: %i\n", i, j, k);

				/* i = 1, j = 2, k = 3 �̎����ׂẴ��[�v�𔲂��Ďw�肵�����x���֐�����ڂ�*/
				if ((i == 1) && (j == 2) && (k == 3)) {
					goto break_the_loops;
				}
			}
		}
	}

break_the_loops:
	printf("end");

}