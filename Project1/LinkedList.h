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

// 연결형 리스트 초기화 
void InitList(tLinkedList* _pList); 

// 연결형 리스트 데이터 삽입
void PushBack(tLinkedList* _pList, int _iData);
void PushFront(tLinkedList* _pList, int _iData); 

// 연결형 리스트 힙 메모리 영역에서 해제
void ReleaseList(tLinkedList* _pList); 