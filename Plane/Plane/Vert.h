#pragma once
#include "Builder.h"
class Vert :
	public
Builder
{
public:
	Vert();
	~Vert();

	void set_gragd() override;
	void set_param_type() override;
	void set_upr_type() override;
	Param save_result() override;
};
