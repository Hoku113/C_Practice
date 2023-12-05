#include <stdio.h>
#include <stdint.h>

int main(void) {
	/* �ŏI���2
	* 1���珇�Ɋ|�����킹�ċ��߂���16�r�b�g�����t�����A
	* 32�r�b�g�����t�������ꂼ��̍ő�l�Ə搔���o�͂���v���O�������쐬����
	*/

	int max_value16 = 1;
	long long max_value32 = 1;

	/* for����2�g�p���Ď������� */
	for (int i = 1; ; i++) {
		/* 16�r�b�g�̕����t�����̍ő�l���傫���Ȃ����烋�[�v���I������ */
		if ((max_value16 * i) > INT16_MAX) {
			printf("16bit = %i,  last multiplier = %i\n", max_value16, (i - 1));
			break;
		}

		max_value16 *= i;
	}

	for (int j = 1; ; j++) {
		if ((max_value32 * j) > INT32_MAX) {
			printf("32bit = %lli, last multiplier = %i\n", max_value32, (j - 1));
			break;
		}

		max_value32 *= j;
	}
}