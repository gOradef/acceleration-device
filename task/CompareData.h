#pragma once
#include <vector>
class CompareData
{
public:
	CompareData();
	void SetData(double curr_acc);
	void RefreshVec(double new_acc);
	double GetEndNum();
	void SetupAvgAcc(bool FCIC);
	double GetAvgAcc();
	//void GetArray();
private:
	std::vector<double>acc;
	double avg_num{ 0 };
	double prev_step_acc{0};
};

