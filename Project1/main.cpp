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




// 1. ������
// 2. �������� 


// �ּ�
// ���� ����, �ڵ�� �νĵ��� �ʴ´�.

int global = 0; 

// �Լ�
int Add(int left, int right)
{
	return left + right;
}

int main()
{
	// int : �ڷ���
	// i : ������
	// �ڷ��� (ũ�� ����, byte) data type 
	// ������ : char(1), short(2), int(4), long(4), long long(8)
	// �Ǽ��� : float(4), double(8)

	int i = 0; 

	// 1 ����Ʈ�� 0 ���� ����� ǥ��
	// 256���� -> 0 ~ 255
	unsigned char c = 0;
	c = 0;
	// c = 255;
	c = -1;

	// 1 ����Ʈ�� ���, ���� �Ѵ� ǥ��
	// -128 ~ 0 ~ 127
	char c1 = 0; 
	c1 = -1;
	c1 = 255; 

	// ���� ���� ã�� (2�� ������)
	// �����Ǵ� ����� ��ȣ�� ���� ��, 1�� ���Ѵ�.
	int a = 4 + 4.0; 

	// ���� ǥ�� ��İ� �Ǽ� ǥ�� ����� �ٸ���.
	// �Ǽ� ǥ�� ����� ���е��� �����Ѵ�.
	// ���� double(8) �ڷ����� float(4) �ڷ������� �� �� �Ҽ������� ��Ȯ�ϰ� ǥ���� �����ϴ�.
	
	// ������ ��������, �Ǽ��� �Ǽ����� �����ϵ�, �� ǥ������� �ǿ����ڰ� ����� ��� ��������� ��ȯ����.

	float f = 10.2415f + (float)20; 

	// �Ǽ��� ����� ���� ��� �Ҽ��� �ڿ� f�� ���̸� float �ڷ�������, f�� ������ ������ double �ڷ������� �����Ѵ�.
	// 0.1f; 0.1;

	// ������
	// ���� ������ =
	
	// ��� ������ 
	// +, -, *, /, % (mod)
	int data = 10 + 10;

	// data = data + 20; 
	data += 20;
	data = (int)(10.f / 3.f);

	// ���� ������ 
	// ++, --
	// �� �ܰ� ���� �Ǵ� ���� 
	data = 0; 
	data++;
	data--;
	++data;
	--data;

	// ���� �����ڷ� �����ϴ� ���, ������ �켱������ ���� �����̴�.
	a = 10;
	int b = 10; 
	data = a++;
	data = ++b;

	// �ǵ����̸� ���� �����ڸ� ����.

	// �� ������
	// !(not), &&(and), ||(or)
	// ��(true), ����(false)
	// �� : 0�� �ƴ� ��, ���� 1
	// ���� : 0

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

	// �� ������
	// ==, !=, <, >, <=, >=
	// ��, ���� 

	// ����
	// if, else
	data = 0;
	if (100 && 200)
	{
		data = 100;
	}

	if (data == 100) 
	{
		//if�� ���� ��� ����
	}
	else 
	{
		// if�� ������ ��� ����
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



	// ���� ������
	// :?
	
	iTest == 20 ? iTest = 100 : iTest = 200; 


	// ��Ʈ ������
	// shift <<, >>
	unsigned char byte = 13; 
	byte =  byte << 1; 
	byte <<= 2; // 2 ** n ���
	byte >>= 1; // 2 ** n ���� �� 

	// ��Ʈ not(~), and (&) , or(|), xor(^)
	// ��Ʈ ������ ������ ����
	// & �� �� 1�� ��� 1
	// | �� �� �ϳ��� 1�̸� 1
	// ^ ������ 0, �ٸ��� 1
	// ~ 1�� 0����, 0�� 1�� 

	unsigned int iStatus = 0;
	
	// ���� �߰� 
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;

	// ���� Ȯ�� 
	if (iStatus & THIRSTY)
	{

	}

	// Ư�� �ڸ� ��Ʈ ���� 
	iStatus &= ~THIRSTY; 

	// ����
	// 1. ���� ���� 
	// 2. ���� ���� 
	// 3. ���� ����
	// 4. �ܺ� ���� 

	// �Լ� 
	data = Add(10, 20); 

	// ���� ����
	
	// ��ȣ �ȿ� ����� ���� (�Լ�, ����)
	{
		// ������ ��Ģ

	}

	// ��¹�
	int iNum = 0; 
	printf("Output Test\n");
	scanf("", &iNum);


	// �ݺ���
	// for()
	//for (/*�ݺ��� �ʱ�ȭ*/; /*�ݺ��� ���� üũ*/; /*�ݺ��� ����*/)
	//{

	//}

	for (int i = 0; i < 10; ++i)
	{
		printf("Output Test\n");

	}

	// while()
	int i = 6; 
	while (/*���� üũ*/i > 0)
	{
		printf("�ݺ����� �ݺ��մϴ� %d", i);
		--i;
	}


	//console (��� ������� �� �� �ִ� â)
	

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

	// �Լ��� ����ϴ� �޸� ����
	// ���� �޸�	

	// �Լ� factorial 
	// 8! 
	int i = 10; 
	int iValue = 1; 

	for (int j = 0; j < i - 1; ++j)
	{
		iValue *= (j + 2); 
	}


	// �迭
	// �޸𸮰� �������� ���� 
	int iArray[10] = {}; 
	iArray[9] = 10;

	int arr[10] = { 1, 2, 3, 4, 5, 6 };

	



	// ������ 





	return 0;
}

// ����ü
// ����� ���� �ڷ��� 
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




// �Լ�
int Factorial(int _iNum)
{
	int iValue = 1; 

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2); 
	}

	return iValue;
}

// ��� �Լ� 
// ������, ���� ���� 
int Recursive_Factorial(int _iNum)
{
	if (_iNum == 1)
	{
		return 1; 
	}

	return _iNum * Recursive_Factorial(_iNum - 1); 
}


// �Ǻ���ġ ���� 
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


// ����Ű
// �ּ� ó��: ctrl + k, c
// �ּ� ����: ctrl + k, u 
// �ǵ����� : ctrl + z
// alt drag
// ����� ����Ű
// ����� ���� : F5 
// ���� �ߴ������� �ڵ� ���� : F5
// �ߴ��� ���� �� ���� : F9
// ����� ��, ���� ���� : F10
// ����� ��, �Լ� ���� : F11
// ����� ��, ����� �����ϱ� : Shift + F5 
