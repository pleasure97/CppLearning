#include <stdio.h>
#include "common.h"
#include "func.h"

// 변수의 종류
// 1. 지역 변수
// 2. 전역 변수
// 3. 정적 변수 (static)
// 4. 외부 변수 (extern)

// 메모리 영역 
// 1. 스택 영역
// 2. 데이터 영역
// 3. 읽기 전용 (코드, ROM)
// 4. 힙 영역

//전역 변수
int g_i = 0; // data 영역 

// 데이터 영역
// 프로그램 시작 시 생성
// 프로그램 종료 시 해제 

void Test() 
{
	int i = 0;
	++i;
	++g_i; 
}

// 정적 변수 
static int g_iStatic = 0; 

void Test2(int* a)
{
	*a = 500; 
}


int main()
{
	g_iStatic = 100; 

	// F12 : 선언위치로 이동
	Add(0, 0); 


	// 지역 변수
	Test(); 
	Test(); 
	Test(); 

	// 포인터 변수
	// 메모리 주소를 저장하는 변수
	// 자료형 + * 변수명
	// 해당 포인터에게 전달된 주소를 해석하는 단위		
	int i = 100; 
	int* pInt = &i; 
	float f = 3.f;

	// 주소로 접근
	int* pInt = (int*)&f;
	i = *pInt;

	// 주소의 단위 byte

	// 주소를 저장
	char* pChar = nullptr; 
	short* pShort = nullptr;

	// 32bit 운영체제에서 포인터 변수의 크기는 4 byte
	// 64bit 운영체제에서 포인터 변수의 크기는 8 byte 
	int iSize = sizeof(int*); 

	int i = 0; 
	pInt = &i; 
	pInt += 1; 

	// pInt는 int* 변수이기 때문에 가리키는 곳을 int로 해석한다.
	// 따라서 주소값을 1 증가하는 의미는 다음 int 위치로 접근하기 위해서 sizeof(int) 단위로 증가하게 된다. 

	// 포인터와 배열
	// 배열의 특징
	// 1. 메모리가 연속적
	// 2. 배열의 이름은 배열의 시작 주소이다.  
	int iArr[10] = {};
	// int 단위로 접근 
	*(iArr + 0) = 10; // iArr[0] = 10; 
	*(iArr + 1) = 10; // iArr[1] = 10; 

	// 포인터 이해 확인 문제
	// 문제 1. 
	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 

	int* pI = (int*)sArr; 
	int iData = *((short*)(pI + 2)); 
	printf("1번 문제 정답 : %d\n", iData);

	// 문제 2. 
	char cArr[2] = { 1, 1 };
	short* pS = (short*)cArr; 
	iData = *pS; 
	printf("2번 문제 정답 : %d\n", iData); 

	// 
	int a = 100; 
	Test2(&a); 
	printf("출력 : %d\n", a); 

	//scanf_s("%d", &a); 

	// const
	volatile const int cInt = 100; 
	
	// 상수화 
	// r-value  (right value, 변수 = 상수 꼴에서 오른쪽)
	// l-value (left value, 변수 = 상수 꼴에서 왼쪽)
	int ii = 10; 
	cInt; 
	int* pInt2 = (int*)&cInt;
	*pInt2 = 30; 




	return 0; 
}