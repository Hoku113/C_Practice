#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* ���1
	* �v���O�����̎d�l��p112�Q��
	*/

	int value1;							/* �v�Z���ʂ��o�͂����� */
	int value2;

	/* �R�}���h���C�������̐����m�F���� */
	if (4 != argc) {
		printf("3 arguments only needed");
		return 1;
	}

	value1 = atoi(argv[2]);
	value2 = atoi(argv[3]);

	/* �R�}���h���C��������1�Ԗڂ̒l�ɂ���Čv�Z���@��ύX������ */
	switch (atoi(argv[1]))
	{
	case 0:
		value1 += value2;
		break;
	case 1:
		value1 -= value2;
		break;
	case 2:
		value1 *= value2;
		break;
	case 3:
		value1 /= value2;
		break;
	default:
		printf("1st argument should be 0 to 3");
		break;
	}

	printf("%i\n", value1);
	return 0;
}