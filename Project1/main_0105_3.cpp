#include <iostream>
#include <time.h>
#include "Arr.h"
#include "LinkedList.h"




int main()
{
	tArr s1 = {};
	tArr s2 = {}; 
	tArr s3 = {}; 
	InitArr(&s1);

	// 난수 (랜덤)
	srand(time(nullptr)); 

	for (int i = 0; i < 10; ++i)
	{
		int iRand = rand() % 100 + 1; 
		PushBack(&s1, iRand); 
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", s1.pInt[i]);
	}

	Sort(&s1, &BubbleSort); 

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", s1.pInt[i]);
	}

	ReleaseArr(&s1);
	

	// 연결형 리스트
	tLinkedList list;
	InitList(&list); 


	return 0; 

}