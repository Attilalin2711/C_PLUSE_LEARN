#define STAR ".................."

struct A_STRUCT
{
	int a=5;
	int b=6;
	int fa(int i, int j) { return i + j;}
};
/*
類別（class）和結構(struct)很相像，是用來改善結構在使用上容易出現的一些風險。如上述，使用者很容易在結構外部對結構物件成員進行存取：

A.a=5;

為防止使用者不當操作導致出錯，故發展出類別。

類別比結構多了「區域畫分」，即在定義類別時可以將類別分割成三個區域：

public 區域：在此區域中的類別物件成員及類別物件成員函式，可以直接被類別外部的程式碼呼叫而進行存取。可以被其他類別所繼承。

protected 區域：在此區域中的類別物件成員及類別物件成員函式，不能直接被類別外部的程式碼呼叫而進行存取。但可以被其他類別所繼承。

private 區域：在此區域中的類別物件成員及類別物件成員函式，不能直接被類別外部的程式碼呼叫而進行存取。也不能被其他類別所繼承。
*/
class A_class
{
public:
	int a=5;
	void set_c(int c_) { c = c_; }
	void get_c() { std::cout << c << std::endl; }
private:
	int c;
protected:
	int b;
};

/*
在public區域中設定成員函式，可以有不同的設定方法：
*/
class B_class
{
public:
	int cut(int a, int b);
};

class C_class
{
public:
	int cut(int a, int b);
};
//在類別外定義函數,稱為對函式的實作
//呼叫時須使用-->類別名稱::函式名稱 
//若直接使用 C++無法分辨cut函數來自於B_class 或 C_class
int B_class::cut(int a, int b) { return(a - b); }