#include "Header.h"

int main()
{
	A A1(1, 2, 3);
	A A2;
	A1.printvalue();
	A2.printvalue();
	/*
	註三：利用建構式建立類別物件時，也可以使用「動態空間建構方式」，也就是使用指標（pointer）來建構，程式碼如：
						類別名稱* 類別物件名稱 = new 類別建構式

	不過這麼一來，若要呼叫類別物件成員函式就無法用：
						類別物件名稱.類別物件成員函式名稱(參數1,參數2)
	而要用：
						類別物件名稱->類別物件成員函式名稱(參數1,參數2)
	*/
	A *A3 = new class A(1, 2, 3);
	A *A4 = new class A;
	A3->printvalue();
	A4->printvalue();
	system("pause");
	return 0;
}

