#include <stdio.h>

int main(void) {
	/* ���1
	* ch05-02.c�̃v���O������goto�����g�p�����Ɏ�������
	*/

	/* i = 1, j = 2, k = 3�ɂȂ����Ƃ��ɂ��ׂẴ��[�v�𔲂��ď������I������ */
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				printf("i: %i, j: %i, k: %i\n", i, j, k);
				if (k == 3) {
					break;
				}
			}

			if (j == 2) {
				break;
			}
		}
		if (i == 1) {
			break;
		}
	}
}