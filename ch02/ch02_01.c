#include <stdio.h>
//#include <stdlib.h>

/*
	argc: �R�}���h�ƃR�}���h���C�������œ��͂��ꂽ���̍��v�̒l
	argv: �R�}���h���C�������œ��͂��ꂽ�������X�g�Ƃ��Ċi�[���Ă���
*/


int main(int argc, char* argv[]) { 

	if (argc == 1) {
		puts("Hello World!");
	}
	else {
		int sum = 0;
		for (int i = 1; i < argc; i++) {
			sum += atoi(argv[i]); // �x�����\�����ꂽ�B������int�^��Ԃ��֐��ł���Ύ��s�ł���(�蓮�f�R���p�C������Ƃ��̓G���[�ɂȂ�\���������̂ōs��Ȃ����Ƃ𐄏�)
		}
		printf("sum = %d\n", sum);
	}
	return 0;
}