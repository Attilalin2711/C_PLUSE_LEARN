#define STAR ".................."

struct A_STRUCT
{
	int a=5;
	int b=6;
	int fa(int i, int j) { return i + j;}
};
/*
���O�]class�^�M���c(struct)�ܬ۹��A�O�Ψӧﵽ���c�b�ϥΤW�e���X�{���@�ǭ��I�C�p�W�z�A�ϥΪ̫ܮe���b���c�~���ﵲ�c���󦨭��i��s���G

A.a=5;

������ϥΪ̤���ާ@�ɭP�X���A�G�o�i�X���O�C

���O�񵲺c�h�F�u�ϰ�e���v�A�Y�b�w�q���O�ɥi�H�N���O���Φ��T�Ӱϰ�G

public �ϰ�G�b���ϰ줤�����O���󦨭������O���󦨭��禡�A�i�H�����Q���O�~�����{���X�I�s�Ӷi��s���C�i�H�Q��L���O���~�ӡC

protected �ϰ�G�b���ϰ줤�����O���󦨭������O���󦨭��禡�A���ઽ���Q���O�~�����{���X�I�s�Ӷi��s���C���i�H�Q��L���O���~�ӡC

private �ϰ�G�b���ϰ줤�����O���󦨭������O���󦨭��禡�A���ઽ���Q���O�~�����{���X�I�s�Ӷi��s���C�]����Q��L���O���~�ӡC
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
�bpublic�ϰ줤�]�w�����禡�A�i�H�����P���]�w��k�G
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
//�b���O�~�w�q���,�٬���禡����@
//�I�s�ɶ��ϥ�-->���O�W��::�禡�W�� 
//�Y�����ϥ� C++�L�k����cut��ƨӦ۩�B_class �� C_class
int B_class::cut(int a, int b) { return(a - b); }