#include "Header.h"

int main()
{
	A A1(1, 2, 3);
	A A2;
	A1.printvalue();
	A2.printvalue();
	/*
	���T�G�Q�Ϋغc���إ����O����ɡA�]�i�H�ϥΡu�ʺA�Ŷ��غc�覡�v�A�]�N�O�ϥΫ��С]pointer�^�ӫغc�A�{���X�p�G
						���O�W��* ���O����W�� = new ���O�غc��

	���L�o��@�ӡA�Y�n�I�s���O���󦨭��禡�N�L�k�ΡG
						���O����W��.���O���󦨭��禡�W��(�Ѽ�1,�Ѽ�2)
	�ӭn�ΡG
						���O����W��->���O���󦨭��禡�W��(�Ѽ�1,�Ѽ�2)
	*/
	A *A3 = new class A(1, 2, 3);
	A *A4 = new class A;
	A3->printvalue();
	A4->printvalue();
	system("pause");
	return 0;
}

