#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

vector<int> myvector;// Δήλωση vector με καθολική (global) εμβέλεια σε όλο το πρόγραμμα

int main()
{
	myvector.push_back(10);
	myvector.push_back(72);
	myvector.push_back(2);
	myvector.push_back(56);
	myvector.insert(myvector.begin() + 2 , 10);

	printf("%d\n",myvector[2]);

}