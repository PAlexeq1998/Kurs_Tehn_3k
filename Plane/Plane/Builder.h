#pragma once

#include "Param.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Builder
{
protected:
	Param param;
public:
	Builder();
	~Builder();

	virtual void set_gragd();
	virtual void set_param_type();
	virtual void set_upr_type();

	void set_vzlet_mass(double vzlet_mass);
	void set_dvig_type(string dvig_type);
	void set_dvig_num(int dvig_num);
	void set_rasp_kril(string rasp_kril);
	void set_shassi_type(string shassi_type);
	void set_speed_pol(double speed_pol);
	void set_vzlet_type(string vzlet_type);
	void set_posadk_type(string posadk_type);
	void set_ecipag(int ecipag);
	void set_product_year(int product_year);
	void set_weapon_type(string weapon_type);

	virtual void get_gragd();
	virtual void get_param_type();
	virtual void get_upr_type();

	void get_vzlet_mass();
	void get_dvig_type();
	void get_dvig_num();
	void get_rasp_kril();
	void get_shassi_type();
	void get_speed_pol();
	void get_vzlet_type();
	void get_posadk_type();
	void get_ecipag();
	void get_product_year();
	void get_weapon_type();

	void file_get_posadk_type(ifstream& in);
	void file_get_ecipag(ifstream& in);
	void file_get_product_year(ifstream& in);
	void file_get_weapon_type(ifstream& in);
	void file_get_vzlet_mass(ifstream& in);
	void file_get_dvig_type(ifstream& in);
	void file_get_dvig_num(ifstream& in);
	void file_get_rasp_kril(ifstream& in);
	void file_get_shassi_type(ifstream& in);
	void file_get_speed_pol(ifstream& in);
	void file_get_vzlet_type(ifstream& in);

	virtual Param save_result();
};
