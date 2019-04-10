#include "stdafx.h"
#include "Voen.h"



Voen::Voen()
{
}

Voen::~Voen()
{
}

Param Voen::save_result()
{
	ofstream out;
	out.open("Result - Boevoy.txt", std::ios_base::app);
	out << "----------------\n";
	out << "��� ��������: " << param.param_type << endl;
	out << "�������?: " << (param.gragd ? "��" : "���") << endl;
	out << "�������� �����: " << param.vzlet_mass << endl;
	out << "��� ����������: " << param.dvig_type << endl;
	out << "���������� ����������: " << param.dvig_num << endl;
	out << "������������ �������: " << param.rasp_kril << endl;
	out << "��� �����: " << param.shassi_type << endl;
	out << "�������� ������: " << param.speed_pol << endl;
	out << "��� ������: " << param.vzlet_type << endl;
	out << "��� �������: " << param.posadk_type << endl;
	out << "������ ����������: " << param.upr_type << endl;
	out << "������(���������� �������): " << param.ecipag << endl;
	out << "��� ������������: " << param.product_year << endl;
	out << "��� ����������: " << param.weapon_type << endl;
	out << "----------------\n";
	out.close();

	return param;
}

void Voen::set_gragd()
{
	param.gragd = true;
}

void Voen::set_param_type()
{
	param.param_type = "������ �������";
}

void Voen::set_upr_type()
{
	param.upr_type = "������ ����������";
}
