#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* �ϒ��z��
		C�ł͔z��̗v�f����錾����ۂɕϐ����w�肷�邱�Ƃ��F�߂��Ă���ꍇ������B
		�������A���̌���ł͂��܂萄���ł����A�o�[�W�����̎d�l�Ȃǂɂ���ĕς��̂�
		�Q�l���x�ɂƂǂ߂Ă����Ƃ�������
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