#include "CompareData.h"


CompareData::CompareData() {
	std::vector<double>acc;
	acc.assign(20, 5);
}
void CompareData::SetData(double curr_acc) {
	acc.push_back(curr_acc);
}
double CompareData::GetBeginNum() {
	return acc.at(0);
}
