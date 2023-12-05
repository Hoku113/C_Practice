#include <stdio.h>
#include <stdbool.h>
#define RANGE_START 30
#define RANGE_END 80

int main(void) {
	/* �ŏI���1
	* �z��𗘗p���āA30�`80�܂ł̊Ԃ̑f�������ׂďo�͂���v���O���������	
	*/

	/* �z����`���� */
	bool multiple[RANGE_END + 1] = { false };			/* �z��̂��ׂĂ̒��g��false�ŏ��������� */

	/* 2�ȏ�̔{�����ǂ����𔻕ʂ��� */
	for (int i = 2; i <= RANGE_END; i++) {
		/* ��������̔{���Ȃ�X�L�b�v���� */
		if (multiple[i]) {
			continue;
		}

		/* �o�͔͈͂��ǂ��� */
		if (i >= RANGE_START) {
			printf("%i\n", i);
		}

		/* ���̐��̔{����^�ɐݒ肷�� */
		for (int j = 1; (i * j) <= RANGE_END; j++) {
			multiple[i * j] = true;
		}
	}



}