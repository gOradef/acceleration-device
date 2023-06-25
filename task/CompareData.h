#pragma once
#include <vector>
class CompareData
{
public:
	CompareData();
	void SetData(double curr_acc);
	double GetBeginNum();
private:
	std::vector<double>acc;
};

