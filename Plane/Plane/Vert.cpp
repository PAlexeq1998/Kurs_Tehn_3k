#include "stdafx.h"
#include "Vert.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Vert::Vert()
{
}


Vert::~Vert()
{
}

Param Vert::save_result()
{
	ofstream out;
	out.open("Result - Vert.txt", std::ios_base::app);
	out << "----------------\n";
	out << "Тип аппарата: " << param.param_type << endl;
	out << "Военный?: " << (param.gragd ? "Да" : "Нет") << endl;
	out << "Взлетная масса: " << param.vzlet_mass << endl;
	out << "Тип двигателей: " << param.dvig_type << endl;
	out << "Количество двигателей: " << param.dvig_num << endl;
	out << "Расположение крыльев: " << param.rasp_kril << endl;
	out << "Тип шасси: " << param.shassi_type << endl;
	out << "Скорость полета: " << param.speed_pol << endl;
	out << "Тип взлета: " << param.vzlet_type << endl;
	out << "Тип посадки: " << param.posadk_type << endl;
	out << "Способ управления: " << param.upr_type << endl;
	out << "Экипаж(количество человек): " << param.ecipag << endl;
	out << "Год производства: " << param.product_year << endl;
	out << "Тип вооружения: " << param.weapon_type << endl;
	out << "----------------\n";
	out.close();
	return param;
}


void Vert::set_gragd()
{
	param.gragd = false;
}

void Vert::set_param_type()
{
	param.param_type = "Вертолет";
}

void Vert::set_upr_type()
{
	param.upr_type = "Ручное управление";
}

