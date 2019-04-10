#pragma once
#include "Builder.h"
class Passag :
	public Builder
{
public:
	Passag();
	~Passag();

	void set_gragd() override;
	void set_param_type() override;
	void set_upr_type() override;
	Param save_result() override;
};
