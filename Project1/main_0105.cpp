
struct _tagMyST
{
	int a;  // member 
	float f; // member

}MYST;

int main()
{
	// ����ü�� ������ 
	MYST s = {}; 
	MYST* pST = &s; 
	pST + 1; 
	(*pST).a = 100; 
	(*pST).f = 3.14f;
	pST->a = 100; 
	pST->f = 3.14f;


	return 0; 
}