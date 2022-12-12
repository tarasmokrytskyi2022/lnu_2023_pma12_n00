//Task 5.31 other version
#include <iostream>
using namespace std;

int Max(int* pArray, int n)
{
	int result = pArray[0];
	for (size_t i = 0; i < n; i++)
	{
		if (pArray[i] > result)
		{
			result = pArray[i];
		}
	}
	return result;
}

int Min(int* pArray, int n)
{
	int result = pArray[0];
	for (size_t i = 0; i < n; i++)
	{
		if (pArray[i] < result)
		{
			result = pArray[i];
		}
	}
	return result;
}

int ChangeArray(int* pArray, int n)
{
	int result = pArray[0];
	for (size_t i = 0; i < n; i++)
	{
		pArray[i] = -pArray[i] ;
		if (pArray[i] > result)
		{
			result = pArray[i];
		}
	}
	return result;
}

void PrinrArray(int* pArray, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << pArray[i] << " ";
	}
	cout << endl;
}

void ReadArray(int* pArray, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cin >> pArray[i];
	}
}

int main()
{
    int n;
    cin >> n;
	int* pArray_a = new int[n];
	int* pArray_b = new int[n];
	ReadArray(pArray_a, n);
	ReadArray(pArray_b, n);

	int max_a = Max(pArray_a, n);
	int max_b = Max(pArray_b, n);
	cout << max_a << " " << max_b << endl;;

	if (max_a > max_b) 
	{
		ChangeArray(pArray_a, n);
	}
	else
	{
		ChangeArray(pArray_b, n);
	}

	cout << "pArray_a:";
	PrinrArray(pArray_a, n);

	cout << "pArray_b:";
	PrinrArray(pArray_b, n);
}