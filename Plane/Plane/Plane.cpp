#include "stdafx.h"
#include "Builder.h"
#include "Vert.h"
#include "Kvadro.h"
#include "Voen.h"
#include "Passag.h"
#include "Plane.h"
#include <iostream>

int Exception(ifstream& in);

int main()
{
	setlocale(LC_ALL, "Russian");
	Builder* builder;
	Param param;
	double vzlet_mass = 0, sp = 0;
	string dt, rk, st, vt, pt, wt;
	int dn = 0, ec = 0, py = 0;
	int flag = 1;
	int flag2 = 0;
	while (flag) {
		cout << "Конвейер сборки летательный аппаратов\nВыбор летательного аппарата?\n";
		cout << "1 - Пассажирский самолёт\n";
		cout << "2 - Боевой самолёт\n";
		cout << "3 - Вертолёт\n";
		cout << "4 - Квадрокоптер\n";
		cout << "0 - Выход\n";
		flag2 = 0;
		cin >> flag;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Введено некорректное значеие\n";
			continue;
		}

		switch (flag) {
		case 1:
			//Пассажирский самолет
			cout << "1 - Ввод с консоли\n";
			cout << "2 - Ввод из файла\n";
			cin >> flag2;
			if (flag2 == 1)
			{
				builder = new Passag();
				builder->set_param_type();
				builder->set_gragd();
				builder->set_upr_type();
				builder->set_vzlet_mass(vzlet_mass);
				builder->set_dvig_type(dt);
				builder->set_dvig_num(dn);
				builder->set_rasp_kril(rk);
				builder->set_shassi_type(st);
				builder->set_speed_pol(sp);
				builder->set_vzlet_type(vt);
				builder->set_posadk_type(pt);
				builder->set_ecipag(ec);
				builder->set_product_year(py);
				builder->set_weapon_type(wt);

				builder->get_param_type();
				builder->get_gragd();
				builder->get_upr_type();
				builder->get_vzlet_mass();
				builder->get_dvig_type();
				builder->get_dvig_num();
				builder->get_rasp_kril();
				builder->get_shassi_type();
				builder->get_speed_pol();
				builder->get_vzlet_type();
				builder->get_posadk_type();
				builder->get_ecipag();
				builder->get_product_year();
				builder->get_weapon_type();

				param = builder->save_result();
				delete builder;
				break;
			}
			else if (flag2 == 2)
			{
				string fileName;
				cout << "Введите имя файла - ";
				cin >> fileName;
				ifstream in(fileName);

				if (Exception(in) == 1)
					break;

				string rasd;
				int count;

				in >> count;	
				in >> rasd;
				for (int i = 0; i < count; i++)
				{
					builder = new Passag();
					builder->set_param_type();
					builder->set_gragd();
					builder->set_upr_type();
					builder->set_vzlet_mass(vzlet_mass);
					builder->set_dvig_type(dt);
					builder->set_dvig_num(dn);
					builder->set_rasp_kril(rk);
					builder->set_shassi_type(st);
					builder->set_speed_pol(sp);
					builder->set_vzlet_type(vt);
					builder->set_posadk_type(pt);
					builder->set_ecipag(ec);
					builder->set_product_year(py);
					builder->set_weapon_type(wt);

					builder->file_get_vzlet_mass(in);
					builder->file_get_dvig_type(in);
					builder->file_get_dvig_num(in);
					builder->file_get_rasp_kril(in);
					builder->file_get_shassi_type(in);
					builder->file_get_speed_pol(in);
					builder->file_get_vzlet_type(in);
					builder->file_get_posadk_type(in);
					builder->file_get_ecipag(in);
					builder->file_get_product_year(in);
					builder->file_get_weapon_type(in);

					string rasd;
					in >> rasd;

					param = builder->save_result();
					delete builder;
				}
				break;
			}
		case 2:
			cout << "1 - Ввод с консоли\n";
			cout << "2 - Ввод из файла\n";
			cin >> flag2;
			if (flag2 == 1)
			{
				//Боевой самолёт
				builder = new Voen();
				builder->set_param_type();
				builder->set_gragd();
				builder->set_upr_type();
				builder->set_vzlet_mass(vzlet_mass);
				builder->set_dvig_type(dt);
				builder->set_dvig_num(dn);
				builder->set_rasp_kril(rk);
				builder->set_shassi_type(st);
				builder->set_speed_pol(sp);
				builder->set_vzlet_type(vt);
				builder->set_posadk_type(pt);
				builder->set_ecipag(ec);
				builder->set_product_year(py);
				builder->set_weapon_type(wt);

				builder->get_param_type();
				builder->get_gragd();
				builder->get_upr_type();
				builder->get_vzlet_mass();
				builder->get_dvig_type();
				builder->get_dvig_num();
				builder->get_rasp_kril();
				builder->get_shassi_type();
				builder->get_speed_pol();
				builder->get_vzlet_type();
				builder->get_posadk_type();
				builder->get_ecipag();
				builder->get_product_year();
				builder->get_weapon_type();

				param = builder->save_result();
				delete builder;
				break;
			}
			else if (flag2 == 2)
			{
				string fileName;
				cout << "Введите имя файла - ";
				cin >> fileName;
				ifstream in(fileName);

				if (Exception(in) == 1)
					break;

				string rasd;
				int count;

				in >> count;
				in >> rasd;
				for (int i = 0; i < count; i++)
				{
					builder = new Voen();
					builder->set_param_type();
					builder->set_gragd();
					builder->set_upr_type();
					builder->set_vzlet_mass(vzlet_mass);
					builder->set_dvig_type(dt);
					builder->set_dvig_num(dn);
					builder->set_rasp_kril(rk);
					builder->set_shassi_type(st);
					builder->set_speed_pol(sp);
					builder->set_vzlet_type(vt);
					builder->set_posadk_type(pt);
					builder->set_ecipag(ec);
					builder->set_product_year(py);
					builder->set_weapon_type(wt);

					builder->file_get_vzlet_mass(in);
					builder->file_get_dvig_type(in);
					builder->file_get_dvig_num(in);
					builder->file_get_rasp_kril(in);
					builder->file_get_shassi_type(in);
					builder->file_get_speed_pol(in);
					builder->file_get_vzlet_type(in);
					builder->file_get_posadk_type(in);
					builder->file_get_ecipag(in);
					builder->file_get_product_year(in);
					builder->file_get_weapon_type(in);

					string rasd;
					in >> rasd;

					param = builder->save_result();
					delete builder;
				}
				break;
			}
		case 3:
			//Вертолёт
			cout << "1 - Ввод с консоли\n";
			cout << "2 - Ввод из файла\n";
			cin >> flag2;
			if (flag2 == 1)
			{
				builder = new Vert();
				builder->set_param_type();
				builder->set_gragd();
				builder->set_upr_type();
				builder->set_vzlet_mass(vzlet_mass);
				builder->set_dvig_type(dt);
				builder->set_dvig_num(dn);
				builder->set_rasp_kril(rk);
				builder->set_shassi_type(st);
				builder->set_speed_pol(sp);
				builder->set_vzlet_type(vt);
				builder->set_posadk_type(pt);
				builder->set_ecipag(ec);
				builder->set_product_year(py);
				builder->set_weapon_type(wt);

				builder->get_param_type();
				builder->get_gragd();
				builder->get_upr_type();
				builder->get_vzlet_mass();
				builder->get_dvig_type();
				builder->get_dvig_num();
				builder->get_rasp_kril();
				builder->get_shassi_type();
				builder->get_speed_pol();
				builder->get_vzlet_type();
				builder->get_posadk_type();
				builder->get_ecipag();
				builder->get_product_year();
				builder->get_weapon_type();

				param = builder->save_result();
				delete builder;
				break;
			}
			else if (flag2 == 2)
			{
				string fileName;
				cout << "Введите имя файла - ";
				cin >> fileName;
				ifstream in(fileName);

				if (Exception(in) == 1)
					break;

				string rasd;
				int count;

				in >> count;
				in >> rasd;
				for (int i = 0; i < count; i++)
				{
					builder = new Vert();
					builder->set_param_type();
					builder->set_gragd();
					builder->set_upr_type();
					builder->set_vzlet_mass(vzlet_mass);
					builder->set_dvig_type(dt);
					builder->set_dvig_num(dn);
					builder->set_rasp_kril(rk);
					builder->set_shassi_type(st);
					builder->set_speed_pol(sp);
					builder->set_vzlet_type(vt);
					builder->set_posadk_type(pt);
					builder->set_ecipag(ec);
					builder->set_product_year(py);
					builder->set_weapon_type(wt);

					builder->file_get_vzlet_mass(in);
					builder->file_get_dvig_type(in);
					builder->file_get_dvig_num(in);
					builder->file_get_rasp_kril(in);
					builder->file_get_shassi_type(in);
					builder->file_get_speed_pol(in);
					builder->file_get_vzlet_type(in);
					builder->file_get_posadk_type(in);
					builder->file_get_ecipag(in);
					builder->file_get_product_year(in);
					builder->file_get_weapon_type(in);

					string rasd;
					in >> rasd;

					param = builder->save_result();
					delete builder;
				}
				break;
			}
		case 4:
			//Квадрокоптер 
			cout << "1 - Ввод с консоли\n";
			cout << "2 - Ввод из файла\n";
			cin >> flag2;
			if (flag2 == 1)
			{
				builder = new Kvadro();
				builder->set_param_type();
				builder->set_gragd();
				builder->set_upr_type();
				builder->set_vzlet_mass(vzlet_mass);
				builder->set_dvig_type(dt);
				builder->set_dvig_num(dn);
				builder->set_rasp_kril(rk);
				builder->set_shassi_type(st);
				builder->set_speed_pol(sp);
				builder->set_vzlet_type(vt);
				builder->set_posadk_type(pt);
				builder->set_ecipag(ec);
				builder->set_product_year(py);
				builder->set_weapon_type(wt);

				builder->get_param_type();
				builder->get_gragd();
				builder->get_upr_type();
				builder->get_vzlet_mass();
				builder->get_dvig_type();
				builder->get_dvig_num();
				builder->get_rasp_kril();
				builder->get_shassi_type();
				builder->get_speed_pol();
				builder->get_vzlet_type();
				builder->get_posadk_type();
				builder->get_ecipag();
				builder->get_product_year();
				builder->get_weapon_type();

				param = builder->save_result();
				delete builder;
				break;
			}
			else if (flag2 == 2)
			{
				string fileName;
				cout << "Введите имя файла - ";
				cin >> fileName;
				ifstream in(fileName);

				if (Exception(in) == 1)
					break;

				string rasd;
				int count;

				in >> count;
				in >> rasd;
				for (int i = 0; i < count; i++)
				{
					builder = new Kvadro();
					builder->set_param_type();
					builder->set_gragd();
					builder->set_upr_type();
					builder->set_vzlet_mass(vzlet_mass);
					builder->set_dvig_type(dt);
					builder->set_dvig_num(dn);
					builder->set_rasp_kril(rk);
					builder->set_shassi_type(st);
					builder->set_speed_pol(sp);
					builder->set_vzlet_type(vt);
					builder->set_posadk_type(pt);
					builder->set_ecipag(ec);
					builder->set_product_year(py);
					builder->set_weapon_type(wt);

					builder->file_get_vzlet_mass(in);
					builder->file_get_dvig_type(in);
					builder->file_get_dvig_num(in);
					builder->file_get_rasp_kril(in);
					builder->file_get_shassi_type(in);
					builder->file_get_speed_pol(in);
					builder->file_get_vzlet_type(in);
					builder->file_get_posadk_type(in);
					builder->file_get_ecipag(in);
					builder->file_get_product_year(in);
					builder->file_get_weapon_type(in);

					string rasd;
					in >> rasd;

					param = builder->save_result();
					delete builder;
				}
				break;
			}
		case 0: break;
		}
	}

	return 0;
}
