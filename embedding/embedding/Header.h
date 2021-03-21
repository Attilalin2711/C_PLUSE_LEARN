/*
類別物件的嵌入(embedding)：
所謂嵌入，事實上指的是將一類別A物件嵌入類別B內，使之成為類別B之類別成員。
比如我們將「人(person)」當作一個類別，「衣服(cloth)」當成一個類別，人擁有衣服，故將cloth嵌入person。
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

	cloth jacket;//嵌入一cloth類別物件，名叫jacket
	cloth shirt;//嵌入一cloth類別物件，名叫shirt

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