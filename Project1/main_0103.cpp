#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <assert.h>

// 메모리 영역
// 1. 스택
// 2. 데이터 
// 3. 힙 
// 4. ROM, 코드 

// 함수 오버로딩
// 함수 오버라이딩 

unsigned int GetLength(const wchar_t* _pStr)
{
	unsigned int i = 0; 
	while ('\0' != _pStr[i])
	{
		++i;
	}
	return i; 


}

void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* _pSrc)
{
	// 예외 처리 
	// 이어붙인 최종 문자열 길이가 원본 저장 공간의 크기를 넘는 경우 
	int iDestLen = GetLength(_pDest);
	int iSrcLen = GetLength(_pSrc); 
	if (_iBufferSize < iDestLen + iSrcLen + 1) // null 문자까지 계산
	{
		assert(nullptr); 
	}
	// 문자열 이어 붙이기 
	// 1. 목적지 문자열의 끝을 확인 (문자열이 이어 붙을 시작 위치)

	// 2. 반복적으로 src 문자열을 dest 끝 위치에 복사하기
	for (int i = 0; i < iSrcLen + 1; ++i)
	{
		_pDest[iDestLen + 1] = _pSrc[i];

	}
	// 3. src 문자열의 null을 만날 때까지 반복


}



int main()
{
	// 1. const
	const int i = 100; 

	// const와 포인터
	int a = 0; 
	int* pInt = &a; 

	*pInt = 1; 
	pInt = nullptr; 

	// const 포인터 
	const int* pConstInt = &a; 

	// *pConstInt = 100; (식이 수정할 수 있는 lvalue이어야 합니다.)

	// 다른 변수의 주소를 지정할 수는 있다.
	int b = 0; 
	pConstInt = &b; 


	// 포인터 const
	int* const pIntConst = &a; 
	*pIntConst = 400; 
	// pIntConst = &b; 


	// 초기화 시 가리킨 대상만 가리킴, 가리키는 원본을 수정할 수 없음
	const int* const pConstIntConst = nullptr; 

	{
		int a = 0; 
		const int* pInt = &a; 

		// a = 100; 

		int* p = &a; 
		*p = 100; 

	}
	a = 100; 
	Output(&a); 
	
	// void 포인터
	// 1. 원본의 자료형을 정하지 않음
	// 2. 어떠한 타입의 변수의 주소든 저장 가능
	// 3. 역참조 불가능
	// 4. 주소 연산 불가능 
	void* pVoid = nullptr; 
	float* pFloat = nullptr; 

	{
		int a = 0; 
		float f = 0.f; 
		double d = 0.;
		long long ll = 0; 

		pVoid = &a; 
		pVoid = &f;
		pVoid = &d;
		pVoid = &ll;

		//*pVoid;
		//pVoid + 1; 
	}

	{
		// 문자
		char c = 1;
		bool b = 1;
		int i = 0; 

		wchar_t wc = 49; 
		short s = 49; 

		char c = 1;
		c = '1';

		// 문자
		// char(1), wchar(2)
		char c = 'a';
		wchar_t wc = L'a'; 

		char szChar[10] = "abcdef"; 
		wchar_t szWChar[10] = L"abcdef"; 

		// wchar_t szWChar[6] = L"abcdef"; (f 뒤에 null 있음)
		// short arrShort[10] = L"abcdef"; 
		short arrShort[10] = { 97, 98, 99, 100, 101, 102, };

		int a = 0; 

		const wchar_t* pChar = L"abcdef";
		szWChar[1] = 'z';
		// pChar[1] = 'z';
		// *(pChar + 1) = 'z'; 

		char szTest[10] = "abc한글"; 
		wchar_t szTestW[10] = L"abc한글"; 

		{
			wchar_t szName[10] = L"Raimond"; 
			int iLen = wcslen(szName); 

			// 문자열 이어 붙이기
			wchar_t szString[100] = L"abc"; 

			wcscat_s(szString, 100, L"def");
			wcscat_s(szString, 100, L"ghi"); 

			StrCat(szString, 10, L"defghijk"); 
		}

	}


	return 0; 
}

// 단축키
// ctrl + shift + space
