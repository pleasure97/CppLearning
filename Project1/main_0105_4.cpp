#include <iostream>
#include 

struct tMy
{

};

class CMy
{
	// 접근 제한 지정자
	// private, protected (상속), public 
private:
	int m_i; 
	int m_f; 

public:

	void setInt(int i)
	{
		m_i = i; 
	}

	// 대입 연산자
	CMy& operator = (const CMy& _Other)
	{
		m_i = Other.m_i; 
		m_f = Other.m_f; 
		
		return *this; 
	}

public:
	// 생성자
	// initializer
	CMy()
		: m_i(100)
		, m_f(0.f)
	{
	}

	// 소멸자
	~CMy()
	{

	}

	
};

int main()
{
	// C++ 클래스 특징
	// 접근제한 지정자
	// 클래스 내의 멤버 변수 또는 멤버함수의 접근 레벨
	
	// 생성자, 소멸자
	// 객체 생성, 소멸 시 자동으로 호출
	// 직접 만들지 않으면 기본 생성자, 기본 소멸자 만들어짐 

	// 멤버 함수
	// 해당 클래스가 사용하는 전용 함수 
	// 해당 클래스의 객체가 필요함
	// 멤버함수를 객체를 통해서 호출하면 해당 객체의 주소가 this 포인터로 전달된다.

	// 레퍼런스 
	// 자료형 * 변수명;	포인터 변수 선언
	// *포인터변수;		포인터로 주소 역참조
	// &변수;			변수의 주소값
	// 자료형 & 변수명;	레퍼런스 변수 선언 

	// C++에 추가된 기능
	// 포인터와 유사
	// 원본을 참조한다. 
	// 참조변수를 통해서 직접적으로 원본을 수정할 수 있다.
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