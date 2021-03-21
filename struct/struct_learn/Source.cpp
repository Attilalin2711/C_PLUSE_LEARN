#include <iostream>
#include "Header.h"


int main(int argc,char *argv[])
{
	A_STRUCT A;
	std::cout << "use struct" << std::endl;
	std::cout << STAR << std::endl;
	std::cout << "A.a = " << A.a << std::endl;
	std::cout << "A.b = " << A.b << std::endl;
	std::cout << "A.a+A.b = " << A.fa(A.a, A.b) << std::endl;
	A_class A_c;
	std::cout << "use class" << std::endl;
	std::cout << STAR << std::endl;
	std::cout << "A_c.a = " << A_c.a << std::endl;
	std::cout << "get c in private form b in public" << std::endl;
	A_c.set_c(5);
	A_c.get_c();
	B_class B;
	std::cout <<"B.cut="<< B.cut(5, 2) << std::endl;
	system("pause");
	return 0;
}