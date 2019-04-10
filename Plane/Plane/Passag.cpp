#include "stdafx.h"
#include "Passag.h"


Passag::Passag()
{
}

Passag::~Passag()
{
}

Param Passag::save_result()
{
	ofstream out;
	out.open("Result - Passag.txt", std::ios_base::app);
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

void Passag::set_gragd()
{
	param.gragd = false;
}

void Passag::set_param_type()
{
	param.param_type = "������������ �������";
}

void Passag::set_upr_type()
{
	param.upr_type = "������ ����������";
}