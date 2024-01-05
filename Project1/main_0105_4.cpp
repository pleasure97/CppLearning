#include <iostream>
#include 

struct tMy
{

};

class CMy
{
	// ���� ���� ������
	// private, protected (���), public 
private:
	int m_i; 
	int m_f; 

public:

	void setInt(int i)
	{
		m_i = i; 
	}

	// ���� ������
	CMy& operator = (const CMy& _Other)
	{
		m_i = Other.m_i; 
		m_f = Other.m_f; 
		
		return *this; 
	}

public:
	// ������
	// initializer
	CMy()
		: m_i(100)
		, m_f(0.f)
	{
	}

	// �Ҹ���
	~CMy()
	{

	}

	
};

int main()
{
	// C++ Ŭ���� Ư¡
	// �������� ������
	// Ŭ���� ���� ��� ���� �Ǵ� ����Լ��� ���� ����
	
	// ������, �Ҹ���
	// ��ü ����, �Ҹ� �� �ڵ����� ȣ��
	// ���� ������ ������ �⺻ ������, �⺻ �Ҹ��� ������� 

	// ��� �Լ�
	// �ش� Ŭ������ ����ϴ� ���� �Լ� 
	// �ش� Ŭ������ ��ü�� �ʿ���
	// ����Լ��� ��ü�� ���ؼ� ȣ���ϸ� �ش� ��ü�� �ּҰ� this �����ͷ� ���޵ȴ�.

	// ���۷��� 
	// �ڷ��� * ������;	������ ���� ����
	// *�����ͺ���;		�����ͷ� �ּ� ������
	// &����;			������ �ּҰ�
	// �ڷ��� & ������;	���۷��� ���� ���� 

	// C++�� �߰��� ���
	// �����Ϳ� ����
	// ������ �����Ѵ�. 
	// ���������� ���ؼ� ���������� ������ ������ �� �ִ�.
	{
		int a = 10; 
		int* const p = &a; 
		*p = 100; 

		int& iRef = a;
		iRef = 100; 

		const int& iRefConst = a; 
	}

	CMy c1; 
	// c.m_i = 0; 
	c1.setInt(10); 

	CMy c2;
	c2.setInt(100); 

	CMy c3;
	c3.setInt(1000); 

	c3 = c2; 


	return 0; 
}