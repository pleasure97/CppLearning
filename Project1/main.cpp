#define HUNGRY 0x001
#define THIRSTY 0x002 
#define TIRED 0x004
#define FIRE 0x008 
#define COLD 0x010
#define POISON 0x020
#define POISON1 0x040
#define POISON2 0x080
#define POISON3 0x100
#define POISON4 0x200
#define POISON5 0x400
#define POISON6 0x800

#include <stdio.h>




// 1. 가독성
// 2. 유지보수 


// 주석
// 설명 역할, 코드로 인식되지 않는다.

int global = 0; 

// 함수
int Add(int left, int right)
{
	return left + right;
}

int main()
{
	// int : 자료형
	// i : 변수명
	// 자료형 (크기 단위, byte) data type 
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float(4), double(8)

	int i = 0; 

	// 1 바이트로 0 포함 양수만 표현
	// 256가지 -> 0 ~ 255
	unsigned char c = 0;
	c = 0;
	// c = 255;
	c = -1;

	// 1 바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~ 127
	char c1 = 0; 
	c1 = -1;
	c1 = 255; 

	// 음의 정수 찾기 (2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다.
	int a = 4 + 4.0; 

	// 정수 표현 방식과 실수 표현 방식은 다르다.
	// 실수 표현 방식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 자료형보다 더 밑 소수점까지 정확하게 표현이 가능하다.
	
	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피연산자가 연산될 경우 명시적으로 변환하자.

	float f = 10.2415f + (float)20; 

	// 실수를 상수로 적을 경우 소수점 뒤에 f를 붙이면 float 자료형으로, f를 붙이지 않으면 double 자료형으로 간주한다.
	// 0.1f; 0.1;

	// 연산자
	// 대입 연산자 =
	
	// 산술 연산자 
	// +, -, *, /, % (mod)
	int data = 10 + 10;

	// data = data + 20; 
	data += 20;
	data = (int)(10.f / 3.f);

	// 증감 연산자 
	// ++, --
	// 한 단계 증가 또는 감소 
	data = 0; 
	data++;
	data--;
	++data;
	--data;

	// 후위 연산자로 연산하는 경우, 연산자 우선순위가 가장 나중이다.
	a = 10;
	int b = 10; 
	data = a++;
	data = ++b;

	// 되도록이면 전위 연산자를 쓴다.

	// 논리 연산자
	// !(not), &&(and), ||(or)
	// 참(true), 거짓(false)
	// 참 : 0이 아닌 값, 보통 1
	// 거짓 : 0

	true;
	false;
	bool truefalse = false;
	bool IsTrue = 100;

	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 100;
	iTrue = !iTrue;

	iTrue = 100 && 200;
	iTrue = 0 && 200;
	iTrue = 0 || 0;
	iTrue = 0 || 100;

	// 비교 연산자
	// ==, !=, <, >, <=, >=
	// 참, 거짓 

	// 구문
	// if, else
	data = 0;
	if (100 && 200)
	{
		data = 100;
	}

	if (data == 100) 
	{
		//if가 참인 경우 수행
	}
	else 
	{
		// if가 거짓인 경우 수행
	}

	/*/if ()
	{

	}

	else if () 
	{

	}
	*/

	// switch case 

	switch (10)
	{
	case 10:
		break;
	case 20:
		break;
	default:
		break;
	}

	int iTest = 10; 

	if (iTest == 10) 
	{

	}
	else if (iTest == 20)
	{

	}



	// 삼항 연산자
	// :?
	
	iTest == 20 ? iTest = 100 : iTest = 200; 


	// 비트 연산자
	// shift <<, >>
	unsigned char byte = 13; 
	byte =  byte << 1; 
	byte <<= 2; // 2 ** n 배수
	byte >>= 1; // 2 ** n 나눈 몫 

	// 비트 not(~), and (&) , or(|), xor(^)
	// 비트 단위로 연산을 진행
	// & 둘 다 1인 경우 1
	// | 둘 중 하나라도 1이면 1
	// ^ 같으면 0, 다르면 1
	// ~ 1은 0으로, 0은 1로 

	unsigned int iStatus = 0;
	
	// 상태 추가 
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;

	// 상태 확인 
	if (iStatus & THIRSTY)
	{

	}

	// 특정 자리 비트 제거 
	iStatus &= ~THIRSTY; 

	// 변수
	// 1. 지역 변수 
	// 2. 전역 변수 
	// 3. 정적 변수
	// 4. 외부 변수 

	// 함수 
	data = Add(10, 20); 

	// 지역 변수
	
	// 괄호 안에 선언된 변수 (함수, 지역)
	{
		// 변수명 규칙

	}

	// 출력문
	int iNum = 0; 
	printf("Output Test\n");
	scanf("", &iNum);


	// 반복문
	// for()
	//for (/*반복자 초기화*/; /*반복자 조건 체크*/; /*반복자 변경*/)
	//{

	//}

	for (int i = 0; i < 10; ++i)
	{
		printf("Output Test\n");

	}

	// while()
	int i = 6; 
	while (/*조건 체크*/i > 0)
	{
		printf("반복문을 반복합니다 %d", i);
		--i;
	}


	//console (명령 입출력을 할 수 있는 창)
	

	//printf
	printf("abcdef %d \n", 10);
	printf("abcdef %f \n", 3.14f);

	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d \n", i); 
	}

	//scanf
	int iInput = 0;
	scanf_s("%d", &iInput); 

	// 함수가 사용하는 메모리 영역
	// 스택 메모리	

	// 함수 factorial 
	// 8! 
	int i = 10; 
	int iValue = 1; 

	for (int j = 0; j < i - 1; ++j)
	{
		iValue *= (j + 2); 
	}


	// 배열
	// 메모리가 연속적인 구조 
	int iArray[10] = {}; 
	iArray[9] = 10;

	int arr[10] = { 1, 2, 3, 4, 5, 6 };

	



	// 포인터 





	return 0;
}

// 구조체
// 사용자 정의 자료형 
typedef struct _tagMyST
{
	int a; 
	float f; 
}MYST;

typedef struct _tagBig
{
	MYST k;
	int i; 
	char c; 
}BIG;

MYST t; 
int iSize = sizeof(MYST); 
MYST t = { 100, 3.14f };
t.a = 10;
t.f = 10.2312f;




// 함수
int Factorial(int _iNum)
{
	int iValue = 1; 

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2); 
	}

	return iValue;
}

// 재귀 함수 
// 가독성, 구현 용이 
int Recursive_Factorial(int _iNum)
{
	if (_iNum == 1)
	{
		return 1; 
	}

	return _iNum * Recursive_Factorial(_iNum - 1); 
}


// 피보나치 수열 
// 1 1 2 3 5 8 13 21 34 55 ...
int Fibonacci(int _iNum)
{
	if (_iNum == 1 || _iNum == 2)
	{
		return 1;
	}

	int iPrev1 = 1; 
	int iPrev2 = 1; 
	int iValue = 0; 

	for (int i = 0; i < _iNum - 2; ++i)
	{
		iValue = iPrev1 + iPrev2;	
		iPrev1 = iPrev2;
		iPrev2 = iValue; 

	}

	return iValue; 
}

int Recursive_Fibonacci(int _iNum)
{
	if (_iNum == 1 || _iNum == 2)
	{
		return 1; 
	}

	return Recursive_Fibonacci(_iNum - 2) + Recursive_Fibonacci(_iNum - 1); 
}


// 단축키
// 주석 처리: ctrl + k, c
// 주석 해제: ctrl + k, u 
// 되돌리기 : ctrl + z
// alt drag
// 디버깅 단축키
// 디버깅 시작 : F5 
// 다음 중단점까지 코드 실행 : F5
// 중단점 생성 및 해제 : F9
// 디버깅 중, 구문 수행 : F10
// 디버깅 중, 함수 진입 : F11
// 디버깅 중, 디버깅 종료하기 : Shift + F5 
