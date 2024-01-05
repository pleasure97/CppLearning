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

	// �߰��� �����Ͱ� ������ ���������� Ȯ��
	if (_pList->iCount == 0)
	{
		_pList->pHeadNode = pNode;
		
	}
	else
	{
		// PushBack ���� ���� �������� ������ node�� pNextNode�� ������ node �ּҰ����� ����
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

	// list�� head noe pointer�� �����Ѵ�.
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
