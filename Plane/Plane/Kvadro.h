#pragma once
#include "Builder.h"
class Kvadro :
	public Builder
{
public:
	Kvadro();
	~Kvadro();

	void set_gragd() override;
	void set_param_type() override;
	void set_upr_type() override;
	Param save_result() override;
};

