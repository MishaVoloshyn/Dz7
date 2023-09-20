#pragma once
#include <iostream>
using namespace std;

class DinArr
{
private:
	int* pointer;
	int size;
public:
	DinArr();
	DinArr(int);
	DinArr(const DinArr&);
	~DinArr();

	void Input();
	int* GetterP()const;
	int GetterS()const;
	void Console()const;

	void ReSize(int size);
	int LookFor(int look);
	void Sorting();
	void Refactor();
};