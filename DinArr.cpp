#include "DinArr.h"
#include<Windows.h>
DinArr::DinArr(): pointer(nullptr), size(0){}

DinArr::DinArr(int siz) {
	size = siz;
	pointer = new int[siz] {};
}



DinArr::DinArr(const DinArr& a) {
	size = a.size;
	pointer = new int[size];
	for (int i = 0; i < size; i++)
	{
		pointer[i] = a.pointer[i];
	}
}


DinArr::~DinArr() {
	delete[]pointer;
}


void DinArr::Input() {
	for (int i = 0; i < size; i++)
	{
		pointer[i] = rand () % 100;
	}
}


int* DinArr::GetterP()const {
	return pointer;
}

int DinArr::GetterS()const {
	return size;
}

void DinArr::Console()const {
	for (int i = 0; i < size; i++)
	{
		cout << pointer[i] << endl;
	}
}


void DinArr::ReSize(int siz) {
	size += siz;
	int* temp = new int[size];
	for (int i = 0; i < size; i++) {
		if (i >= size - siz) {
			temp[i] = 0;
		}
		else
		{
			temp[i] = pointer[i];
		}
		
	}
	delete[]pointer;
	pointer = new int[size];
	pointer = temp;
}

int DinArr::LookFor(int look) {
	for (int i = 0; i < size; i++) {
		if (pointer[i] == look) {
			return i;
		}
	}
	return -1;
}

void DinArr::Sorting() {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (pointer[j] > pointer[j + 1])
			{
				swap(pointer[j], pointer[j + 1]);
			}
		}
	}
}



void DinArr::Refactor()
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (j < j + 1)
			{
				swap(pointer[j], pointer[j + 1]);
			}
		}
	}
}
