#pragma once
#include "stdafx.h"
#include <iostream>


int Exception(ifstream& in)
{
	setlocale(LC_ALL, "Russian");
	if (!in.is_open())
	{
		cout << "Файл не открывается\n";
		return 1;
	}
	else if (in.peek() == EOF)
	{
		cout << "Файл пустой\n";
		return 1;
	}
}