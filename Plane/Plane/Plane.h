#pragma once
#include "stdafx.h"
#include <iostream>


int Exception(ifstream& in)
{
	setlocale(LC_ALL, "Russian");
	if (!in.is_open())
	{
		cout << "���� �� �����������\n";
		return 1;
	}
	else if (in.peek() == EOF)
	{
		cout << "���� ������\n";
		return 1;
	}
}