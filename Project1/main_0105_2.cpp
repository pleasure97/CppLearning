#include <iostream>
#include "Arr.h"

// ����
// ���� (����)
// ����, ����, �ܺ�(������)

// �޸� ����
// ����
// ������
// ROM
// �� ���� (���� �Ҵ�)

int main()
{
	// ���� �Ҵ�
	// 1. ��Ÿ�� �߿� ���� ����
	// 2. ����ڰ� ���� �޸𸮸� �����ؾ� �� (�޸� ���� ����)

	int iInput = 0;
	scanf_s("%d", &iInput); 


	int* pInt = nullptr; 
	if (100 == iInput)
	{
		pInt = (int*)malloc(100); 
	}

	if (pInt != nullptr)
	{
		free(pInt); 
	}

	// ���� �迭, �� �޸� 
	int a = 100; 
	int iInput = 0; 

	// �迭�� ������ ������ ������ ������ ������ ����� �� ����.

	// ��ü, instance



	// int arr[a] = {}; 

	//int arr[10] = {};

	tArr arr;
	tArr arr2;
	tArr arr3;

	return 0;
}