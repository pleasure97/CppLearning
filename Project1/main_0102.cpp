#include <stdio.h>
#include "common.h"
#include "func.h"

// ������ ����
// 1. ���� ����
// 2. ���� ����
// 3. ���� ���� (static)
// 4. �ܺ� ���� (extern)

// �޸� ���� 
// 1. ���� ����
// 2. ������ ����
// 3. �б� ���� (�ڵ�, ROM)
// 4. �� ����

//���� ����
int g_i = 0; // data ���� 

// ������ ����
// ���α׷� ���� �� ����
// ���α׷� ���� �� ���� 

void Test() 
{
	int i = 0;
	++i;
	++g_i; 
}

// ���� ���� 
static int g_iStatic = 0; 

void Test2(int* a)
{
	*a = 500; 
}


int main()
{
	g_iStatic = 100; 

	// F12 : ������ġ�� �̵�
	Add(0, 0); 


	// ���� ����
	Test(); 
	Test(); 
	Test(); 

	// ������ ����
	// �޸� �ּҸ� �����ϴ� ����
	// �ڷ��� + * ������
	// �ش� �����Ϳ��� ���޵� �ּҸ� �ؼ��ϴ� ����		
	int i = 100; 
	int* pInt = &i; 
	float f = 3.f;

	// �ּҷ� ����
	int* pInt = (int*)&f;
	i = *pInt;

	// �ּ��� ���� byte

	// �ּҸ� ����
	char* pChar = nullptr; 
	short* pShort = nullptr;

	// 32bit �ü������ ������ ������ ũ��� 4 byte
	// 64bit �ü������ ������ ������ ũ��� 8 byte 
	int iSize = sizeof(int*); 

	int i = 0; 
	pInt = &i; 
	pInt += 1; 

	// pInt�� int* �����̱� ������ ����Ű�� ���� int�� �ؼ��Ѵ�.
	// ���� �ּҰ��� 1 �����ϴ� �ǹ̴� ���� int ��ġ�� �����ϱ� ���ؼ� sizeof(int) ������ �����ϰ� �ȴ�. 

	// �����Ϳ� �迭
	// �迭�� Ư¡
	// 1. �޸𸮰� ������
	// 2. �迭�� �̸��� �迭�� ���� �ּ��̴�.  
	int iArr[10] = {};
	// int ������ ���� 
	*(iArr + 0) = 10; // iArr[0] = 10; 
	*(iArr + 1) = 10; // iArr[1] = 10; 

	// ������ ���� Ȯ�� ����
	// ���� 1. 
	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 

	int* pI = (int*)sArr; 
	int iData = *((short*)(pI + 2)); 
	printf("1�� ���� ���� : %d\n", iData);

	// ���� 2. 
	char cArr[2] = { 1, 1 };
	short* pS = (short*)cArr; 
	iData = *pS; 
	printf("2�� ���� ���� : %d\n", iData); 

	// 
	int a = 100; 
	Test2(&a); 
	printf("��� : %d\n", a); 

	//scanf_s("%d", &a); 

	// const
	volatile const int cInt = 100; 
	
	// ���ȭ 
	// r-value  (right value, ���� = ��� �ÿ��� ������)
	// l-value (left value, ���� = ��� �ÿ��� ����)
	int ii = 10; 
	cInt; 
	int* pInt2 = (int*)&cInt;
	*pInt2 = 30; 




	return 0; 
}