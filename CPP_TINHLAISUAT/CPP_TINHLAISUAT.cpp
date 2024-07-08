// CPP_TINHLAISUAT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

	int x;
	float tienlai, tiengui, laisuat, thoihan;
	for (x = 4; x >= 0; x--)
	{
		cout << "Nhap tien gui ban dau, lai suat va thoi han : " << endl;
		cin >> tiengui >> laisuat >> thoihan;
		tienlai = (tiengui * laisuat * thoihan) / 100;
		cout << "Tien gui ban dau = " << tiengui << endl;
		cout << "Lai suat = " << laisuat << "%" << endl;
		cout << "Thoi han = " << thoihan << " nam" << endl;
		cout << "So tien lai = " << tienlai << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
