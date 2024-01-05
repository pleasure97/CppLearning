unsigned int GetLength(const wchar_t* _pStr)
{
	unsigned int i = 0;
	while ('\0' != _pStr[i])
	{
		++i;
	}
	return i;


}


int wcscmp(const wchar_t* _lStr, const wchar_t* _rStr)
{
	// 1. 문자열을 서로 비교하기 (Hint : ASCII code에서 우열이 낮으면 순서가 증가한다)
	int i = 0; 
	while (_lStr[i] != 0 || _rStr[i] != 0)
	{
		if (_lStr[i] > _rStr[i])
		{
			return -1; 
		}
		
		if (_lStr[i] < _rStr[i])
		{
			return 1; 
		}

		++i; 
	}
	return 0; 

}

int StrCmp(const wchar_t* _left, const wchar_t* _right)
{
	int leftLen = GetLength(_left); 
	int rightLen = GetLength(_right); 

	int iLoop = leftLen < rightLen ? leftLen : rightLen; 

	for (int i = 0; i < iLoop; ++i)
	{
		if (_left[i] < _right[i])
		{
			return -1; 
		}
		else
		{
			return 1;
		}
	}

}



int main()
{

	return 0; 
}