#include <iostream>
#include "Arr.h"

// 변수
// 지역 (스택)
// 전역, 정적, 외부(데이터)

// 메모리 영역
// 스택
// 데이터
// ROM
// 힙 영역 (동적 할당)

int main()
{
	// 동적 할당
	// 1. 런타임 중에 대응 가능
	// 2. 사용자가 직접 메모리를 관리해야 함 (메모리 해제 포함)

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

	// 가변 배열, 힙 메모리 
	int a = 100; 
	int iInput = 0; 

	// 배열의 원소의 개수를 선언할 때에는 변수를 사용할 수 없다.

	// 객체, instance



	// int arr[a] = {}; 

	//int arr[10] = {};

	tArr arr;
	tArr arr2;
	tArr arr3;

	return 0;
}