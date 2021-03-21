/*
���O���󪺴O�J(embedding)�G
�ҿ״O�J�A�ƹ�W�����O�N�@���OA����O�J���OB���A�Ϥ��������OB�����O�����C
��p�ڭ̱N�u�H(person)�v��@�@�����O�A�u��A(cloth)�v���@�����O�A�H�֦���A�A�G�Ncloth�O�Jperson�C
*/
#include <iostream>
#include <string>

class cloth
{
public:
	std::string color;
	cloth() {}
	cloth(std::string color_, int price_) { color = color_; price = price_; }
private:
	int price;
};

class person
{
public:
	person(std::string name_, int age_)
	{
		name = name_;
		age = age_;
		is_wear_jacket = false;
		is_wear_shirt = false;
	}

	cloth jacket;//�O�J�@cloth���O����A�W�sjacket
	cloth shirt;//�O�J�@cloth���O����A�W�sshirt

	void wear_jacket(cloth cloth1) { jacket = cloth1; is_wear_jacket = true; }
	void wear_shirt(cloth cloth1) { shirt = cloth1, is_wear_shirt = true; }
	void take_off_shirt() { is_wear_shirt = false; }
	void get_wearing_condition()
	{
		if (is_wear_shirt && is_wear_jacket)
		{
			std::cout << name << " wear" << shirt.color << " shirt and" << jacket.color << " jacket!" << std::endl;
		}
		else if (is_wear_jacket)
		{
			std::cout << name << " wear " << jacket.color << " jacket and no shirt!" << std::endl;
		}
		else if (is_wear_shirt)
		{
			std::cout << name << " wear " << shirt.color << " shirt and no jacket!" << std::endl;
		}
	}
private:
	std::string name;
	int age;
	bool is_wear_jacket;
	bool is_wear_shirt;
};