#include <stdio.h>
#include <limits.h>

int main(void) {
	/* ���1 
	   �L���X�g���g�킸��dboule�^�̒l��int�ɕϊ����ďo�͂�����
	*/

	double d = 321.534;
	int i = d;
	printf("%i\n", i);

	/* ���2
	* �L���X�g���g����INT_MIN�𐳂̐����Ƃ��ăR���\�[���ɏo�͂���
	*/

	int min = INT_MIN;
	printf("%lli\n", (long long)(unsigned)min);

}