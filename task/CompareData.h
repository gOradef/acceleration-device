#pragma once
#include <vector>
class CompareData
{
public:
	CompareData();
	void SetData(double curr_acc);
	void RefreshVec(double new_acc);
	double GetEndNum();
	double GetAvgAcc();
	double GetMaxAcc();
	//void GetArray();
private:
	std::vector<double>acc;
};

