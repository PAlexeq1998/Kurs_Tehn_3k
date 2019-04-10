#include "stdafx.h"
#include "Builder.h"

Builder::Builder()
{
	param = Param();
}

Builder::~Builder()
{
}

void Builder::get_posadk_type()
{
	cout << "������� ��� �������\n";
	cin >> param.posadk_type;
	cout << "��� �������: " << param.posadk_type << endl;
}

void Builder::get_upr_type()
{
	cout << "����� ����������: " << param.upr_type << endl;
}

void Builder::get_ecipag()
{
	while (1)
	{
		cout << "������� ���������� �������\n";
		cin >> param.ecipag;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "������� ������������ �������\n";
			continue;
		}
		cout << "���������� �������: " << param.ecipag << endl;
		break;
	}
}

void Builder::get_product_year()
{
	while (1)
	{
		cout << "������� ��� ������������\n";
		cin >> param.product_year;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "������� ������������ �������\n";
			continue;
		}
		cout << "��� ������������: " << param.product_year << endl;
		break;
	}
}

void Builder::get_weapon_type()
{
	cout << "������� ��� ������\n";
	cin >> param.weapon_type;
	cout << "��� ������: " << param.weapon_type << endl;
}


void Builder::get_gragd()
{
	cout << "������� �������?: " << param.gragd << endl;
}

void Builder::get_param_type()
{
	cout << "��� ������������ ��������: " << param.param_type << endl;
}

void Builder::get_vzlet_mass()
{
	while (1)
	{
		cout << "������� ������� �����\n";
		cin >> param.vzlet_mass;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "������� ������������ �������\n";
			continue;
		}
		cout << "������� ����� �����: " << param.vzlet_mass << endl;
		break;
	}
}

void Builder::get_dvig_type()
{
	cout << "������� ��� ����������\n";
	cin >> param.dvig_type;
	cout << "��� ����������: " << param.dvig_type << endl;
}

void Builder::get_dvig_num()
{
	while (1)
	{
		cout << "������� ���������� ����������\n";
		cin >> param.dvig_num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "������� ������������ �������\n";
			continue;
		}
		cout << "���������� ����������: " << param.dvig_num << endl;
		break;
	}
}

void Builder::get_rasp_kril()
{
	cout << "������� ������������ �������\n";
	cin >> param.rasp_kril;
	cout << "������������ �������: " << param.rasp_kril << endl;
}

void Builder::get_shassi_type()
{
	cout << "������� ��� �����\n";
	cin >> param.shassi_type;
	cout << "��� �����: " << param.shassi_type << endl;
}

void Builder::get_speed_pol()
{
	while (1)
	{
		cout << "������� �������� �����\n";
		cin >> param.speed_pol;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "������� ������������ �������\n";
			continue;
		}
		cout << "�������� �����: " << param.speed_pol << endl;
		break;
	}
}

void Builder::get_vzlet_type()
{
	cout << "������� ��� �����\n";
	cin >> param.vzlet_type;
	cout << "��� �����: " << param.vzlet_type << endl;
}


void Builder::set_posadk_type(string posadk_type)
{
	param.posadk_type = posadk_type;
}

void Builder::set_upr_type()
{
	param.upr_type = "��� ����������";
}

void Builder::set_ecipag(int ecipag)
{
	param.ecipag = ecipag;
}

void Builder::set_product_year(int product_year)
{
	param.product_year = product_year;
}

void Builder::set_weapon_type(string weapon_type)
{
	param.weapon_type = weapon_type;
}

Param Builder::save_result()
{
	return Param();
}

void Builder::set_gragd()
{
	param.gragd = false;
}

void Builder::set_param_type()
{
	param.param_type = "������� ������";
}

void Builder::set_vzlet_mass(double vzlet_mass)
{
	param.vzlet_mass = vzlet_mass;
}

void Builder::set_dvig_type(string dvig_type)
{
	param.dvig_type = dvig_type;
}

void Builder::set_dvig_num(int dvig_num)
{
	param.dvig_num = dvig_num;
}

void Builder::set_rasp_kril(string rasp_kril)
{
	param.rasp_kril = rasp_kril;
}

void Builder::set_shassi_type(string shassi_type)
{
	param.shassi_type = shassi_type;
}

void Builder::set_speed_pol(double speed_pol)
{
	param.speed_pol = speed_pol;
}

void Builder::set_vzlet_type(string vzlet_type)
{
	param.vzlet_type = vzlet_type;
}

void Builder::file_get_posadk_type(ifstream& in)
{
	in >> param.posadk_type;
}

void Builder::file_get_ecipag(ifstream& in)
{
	in >> param.ecipag;
}

void Builder::file_get_product_year(ifstream& in)
{
	in >> param.product_year;
}

void Builder::file_get_weapon_type(ifstream& in)
{
	in >> param.weapon_type;
}


void Builder::file_get_vzlet_mass(ifstream& in)
{
	in >> param.vzlet_mass;
}

void Builder::file_get_dvig_type(ifstream& in)
{
	in >> param.dvig_type;
}

void Builder::file_get_dvig_num(ifstream& in)
{
	in >> param.dvig_num;
}

void Builder::file_get_rasp_kril(ifstream& in)
{
	in >> param.rasp_kril;
}

void Builder::file_get_shassi_type(ifstream& in)
{
	in >> param.shassi_type;
}

void Builder::file_get_speed_pol(ifstream& in)
{
	in >> param.speed_pol;
}

void Builder::file_get_vzlet_type(ifstream& in)
{
	in >> param.vzlet_type;
}