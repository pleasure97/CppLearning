#include "Arr.h"
#include <iostream>


void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int) * 2);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 2;


}
void PushBack(tArr* _pArr, int _iData)
{
	// 힙 영역에 할당된 공간이 다 찼을 때
	if (_pArr->iMaxCount <= _pArr->iCount)
	{
		// 재할당
		Reallocate(_pArr); 
	}

	// 데이터 추가 
	_pArr->pInt[_pArr->iCount++] = _iData; 
}
void Reallocate(tArr* _pArr)
{
	// 1. 2배 더 큰 공간을 동적 할당한다.
	int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int)); 
	// 2. 기존 공간에 있던 데이터들을 새로 할당된 공간으로 복사한다.
	for (int i = 0; i < _pArr->iCount, ++i)
	{
		pNew[i] = _pArr->pInt[i]; 
	}
	// 3. 기존 공간의 힙 메모리 영역을 해제한다.
	free(_pArr->pInt); 
	// 4. 가변 배열의 포인터가 새로운 공간을 가리키게 한다.
	_pArr->pInt = pNew; 
	// 5. MaxCount 변경점 적용 
	_pArr->iMaxCount *= 2; 
}
void ReleaseArr(tArr* _pArr)
{
	free(_pArr->pInt);
	_pArr->iCount = 0; 
	_pArr->iMaxCount = 0; 
}
void Sort(tArr* _pArr, void(*SortFunc)(int*, int))
{
	SortFunc(_pArr->pInt, _pArr->iCount); 
}
void BubbleSort(int* _pData, int _iCount)
{
	// 예외 처리, 데이터가 1개 이하면 정렬하지 않음
	if (_iCount <= 1)
	{
		return; 
	}
	
	// 오름차순 정렬 
	int iLoop = _iCount - 1;
	for (int i = 0; i < iLoop; ++i)
	{
		bool bFinish = true;

		if (_pData[i] > _pData[i + 1])
		{
			int iTemp = _pData[i];
			_pData[i] = _pData[i + 1];
			_pData[i + 1] = iTemp;

			bFinish = false;
		}

		if (bFinish)
			break;

	}
}
;