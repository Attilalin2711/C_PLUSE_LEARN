#include<iostream>
class A
{
public:
	int a;
	A(int a_, int b_, int c_) {a = a_ ; b = b_ ; c = c_ ; }
	A() { a = 5; b = 10; c = 15; }
	void printvalue() { std::cout << a << "," << b << "," << c << "." << std::endl; }
protected:
	int b;
private:
	int c;
};

/*
���@�G���O�غc�����@�w�n��Ҧ����O���󦨭��i���l�ơA�u��䤤�@�B������O���󦨭��i���l�Ƥ]�i�H�A
�S���Q�i���l�ƪ����O���󦨭��K�S���ȡA�άO�]�i�H��L�禡�i���l�ơC

���G�G�Y�{���]�p�̦b�@�����O�S���]�w�������O�غc���A�hC++�|�۰ʬ������O�إߤ@�ӫغc��(�{���X���ݤ���)�A
�۷�� ���O�W��(){}�A�Q�Φ��غc���إߪ���ɡA���|�����O���󦨭��i������l�ơA�p(2)����classA A�C�٬��u�ƥΫغc���v�C


*/
