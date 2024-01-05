#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <assert.h>

// �޸� ����
// 1. ����
// 2. ������ 
// 3. �� 
// 4. ROM, �ڵ� 

// �Լ� �����ε�
// �Լ� �������̵� 

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
	// ���� ó�� 
	// �̾���� ���� ���ڿ� ���̰� ���� ���� ������ ũ�⸦ �Ѵ� ��� 
	int iDestLen = GetLength(_pDest);
	int iSrcLen = GetLength(_pSrc); 
	if (_iBufferSize < iDestLen + iSrcLen + 1) // null ���ڱ��� ���
	{
		assert(nullptr); 
	}
	// ���ڿ� �̾� ���̱� 
	// 1. ������ ���ڿ��� ���� Ȯ�� (���ڿ��� �̾� ���� ���� ��ġ)

	// 2. �ݺ������� src ���ڿ��� dest �� ��ġ�� �����ϱ�
	for (int i = 0; i < iSrcLen + 1; ++i)
	{
		_pDest[iDestLen + 1] = _pSrc[i];

	}
	// 3. src ���ڿ��� null�� ���� ������ �ݺ�


}



int main()
{
	// 1. const
	const int i = 100; 

	// const�� ������
	int a = 0; 
	int* pInt = &a; 

	*pInt = 1; 
	pInt = nullptr; 

	// const ������ 
	const int* pConstInt = &a; 

	// *pConstInt = 100; (���� ������ �� �ִ� lvalue�̾�� �մϴ�.)

	// �ٸ� ������ �ּҸ� ������ ���� �ִ�.
	int b = 0; 
	pConstInt = &b; 


	// ������ const
	int* const pIntConst = &a; 
	*pIntConst = 400; 
	// pIntConst = &b; 


	// �ʱ�ȭ �� ����Ų ��� ����Ŵ, ����Ű�� ������ ������ �� ����
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
	
	// void ������
	// 1. ������ �ڷ����� ������ ����
	// 2. ��� Ÿ���� ������ �ּҵ� ���� ����
	// 3. ������ �Ұ���
	// 4. �ּ� ���� �Ұ��� 
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
		// ����
		char c = 1;
		bool b = 1;
		int i = 0; 

		wchar_t wc = 49; 
		short s = 49; 

		char c = 1;
		c = '1';

		// ����
		// char(1), wchar(2)
		char c = 'a';
		wchar_t wc = L'a'; 

		char szChar[10] = "abcdef"; 
		wchar_t szWChar[10] = L"abcdef"; 

		// wchar_t szWChar[6] = L"abcdef"; (f �ڿ� null ����)
		// short arrShort[10] = L"abcdef"; 
		short arrShort[10] = { 97, 98, 99, 100, 101, 102, };

		int a = 0; 

		const wchar_t* pChar = L"abcdef";
		szWChar[1] = 'z';
		// pChar[1] = 'z';
		// *(pChar + 1) = 'z'; 

		char szTest[10] = "abc�ѱ�"; 
		wchar_t szTestW[10] = L"abc�ѱ�"; 

		{
			wchar_t szName[10] = L"Raimond"; 
			int iLen = wcslen(szName); 

			// ���ڿ� �̾� ���̱�
			wchar_t szString[100] = L"abc"; 

			wcscat_s(szString, 100, L"def");
			wcscat_s(szString, 100, L"ghi"); 

			StrCat(szString, 10, L"defghijk"); 
		}

	}


	return 0; 
}

// ����Ű
// ctrl + shift + space
