#include "Header.h"

int main()
{
	person person1("Daivd", 27);
	cloth cloth1("blue", 1280);
	person1.wear_shirt(cloth1);
	person1.get_wearing_condition();
	system("pause");

}