#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	char str1[] = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd'};
	char str2[] = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd'};
	char symbol;
	for (int j = 0; j < sizeof(str1); j++) {
		printf("%c", str1[j]);
	}
	while (true)
	{  	
		symbol = _getch();
		if (symbol == ' ')
		{
			for (int i = 0; i < sizeof(str1); i++) {
				Sleep(500);
				system("cls");
				char deletedSymbol = str1[i];
				str1[i] = ' ';
				for (int j = 0; j < sizeof(str1); j++) {
					printf("%c", str1[j]);
				}
				str1[i] = deletedSymbol;
 			}
			for (int i = sizeof(str1) - 2; i >= 0; i--) {
				Sleep(500);
				system("cls");
				char deletedSymbol = str1[i];
				str1[i] = ' ';
				for (int j = 0; j < sizeof(str1); j++) {
					printf("%c", str1[j]);
				}
				str1[i] = deletedSymbol;
			}
			Sleep(500);
			system("cls");
			for (int j = 0; j < sizeof(str1); j++) {
				printf("%c", str1[j]);
			}
		}
		else if ((int)symbol == 27)
		{
			exit(0);
		}
	}
}