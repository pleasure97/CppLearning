#pragma once

typedef struct _tagNode
{
	int iData;
	struct tNode* pNextNode;

}tNode;

typedef struct _tagList
{
	int iCount; 
	tNode* pHeadNode;

}tLinkedList;

// ������ ����Ʈ �ʱ�ȭ 
void InitList(tLinkedList* _pList); 

// ������ ����Ʈ ������ ����
void PushBack(tLinkedList* _pList, int _iData);
void PushFront(tLinkedList* _pList, int _iData); 

// ������ ����Ʈ �� �޸� �������� ����
void ReleaseList(tLinkedList* _pList); 