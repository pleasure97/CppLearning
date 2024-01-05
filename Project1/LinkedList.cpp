#include "LinkedList.h"
#include <iostream>

void InitList(tLinkedList* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0; 
}

void PushBack(tLinkedList* _pList, int _iData)
{
	tNode* pNode = (tNode*)malloc(sizeof(tNode)); 
	pNode->iData = _iData;
	pNode->pNextNode = nullptr;

	// 추가한 데이터가 최초의 데이터인지 확인
	if (_pList->iCount == 0)
	{
		_pList->pHeadNode = pNode;
		
	}
	else
	{
		// PushBack 이전 가장 마지막에 존재한 node의 pNextNode를 지금의 node 주소값으로 설정
		tNode* pCurFinalNode = _pList->pHeadNode;
		while (pCurFinalNode->pNextNode)
		{
			pCurFinalNode = pCurFinalNode->pNextNode;
		}
		pCurFinalNode->pNextNode = pNode;
	}
	++_pList->iCount;
}

void PushFront(tLinkedList* _pList, int _iData)
{
	tNode* pNewNode = (tNode*)malloc(sizeof(tNode));
	pNewNode->iData = _iData;
	pNewNode->pNextNode = _pList->pHeadNode; 

	// list의 head noe pointer를 갱신한다.
	_pList->pHeadNode = pNewNode;

	++_pList->iCount; 
}

void ReleaseList(tLinkedList* _pList)
{
	tNode* pDeleteNode = _pList->pHeadNode;

	while (true)
	{
		tNode* pNext = pDeleteNode->pNextNode;
		free(pDeleteNode);
		pDeleteNode = pNext;
	}
}
