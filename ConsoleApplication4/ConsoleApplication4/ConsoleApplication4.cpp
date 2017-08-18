// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>


using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	//variable declarations
	unsigned int n, i;
	//bool flag;//this is what bubbleSort() function returns
	// function declarations
	void bubbleSort(int*,int,int);
	void bubbleSortShow(int*, int);

	//code
	cout << "This application visualises how bubble sort works.\n.............................................................";
	cout << "\nEnter the length of the array";
	cin >> n;
	int myList[10];
	cout << "Enter the array elements in random order";
	for (i = 0; i < n; i++)
	{
		cin >> myList[i];
	}
	i = 0;
	do
	{
		bubbleSortShow(myList, n);
		bubbleSort(myList, n, i);
		i++;

	} while (i<=n);
	int a = 1;
	return 0;
	
}


void bubbleSort(int* myList,int n, int i)
{
	for (i=0; i < n;i++)
		if (i<n-1)
			if (myList[i]>myList[i + 1])
			{
				int temp = myList[i];
				myList[i] = myList[i + 1];
				myList[i + 1] = temp;
			}

}

void bubbleSortShow(int * myList,int n)
{
	cout << "\nNext Step\n....................";
	for (int i = 0; i < n; i++)
	{
		cout << myList[i] << '\t';
		if (i < n - 1)
			if (myList[i + 1] < myList[i])
				cout << "<->\t";
	}
}
