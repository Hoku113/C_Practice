#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void) {
	/* for����1�g�p���čs�� */

	bool end16 = false;
	int max_value16 = 1;
	long long max_value32 = 1;

	for (int i = 1; ; i++){
		
		/*16�r�b�g�����t�������傫�����ǂ������肷��*/
		if (!end16 && (max_value16 * i) > INT16_MAX) { /* �t���O�ϐ��̋t���𗘗p���Ă���ȏ�v�Z�����Ȃ��悤�ɂ��� */
			printf("16bit = %i, last multiplier = %i\n", max_value16, (i - 1));
			end16 = true;
		}

		/* 32�r�b�g�����t�������傫���������Ƀ��[�v���I������ */
		if ((max_value32 * i) > INT32_MAX) {
			printf("32bit = %lli, last multiplier = %i\n", max_value32, (i - 1));
			break;
		}

		max_value16 *= i;
		max_value32 *= i;

	}
}