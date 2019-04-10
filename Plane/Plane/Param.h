#pragma once

#include <string>
#include <iostream>
using namespace std;

class Param
{
public:
	Param();
	~Param();

	bool gragd = false; 
	string param_type = ""; 
	double vzlet_mass = 0; 
	string dvig_type = ""; 
	int dvig_num = 0;
	string rasp_kril = "";
	string shassi_type = ""; 
	double speed_pol = 0;
	string vzlet_type = "";
	string posadk_type = ""; 
	string upr_type = ""; 
	int ecipag = 0; 
	int product_year = 0; 
	string weapon_type = ""; 
};
