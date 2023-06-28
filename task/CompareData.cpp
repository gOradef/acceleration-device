#include "CompareData.h"
#include <iostream>

CompareData::CompareData() {
	std::vector<double>acc;
	acc.assign(20, 5);
}
void CompareData::SetData(double curr_acc) {
	acc.push_back(curr_acc);
}
void CompareData::RefreshVec(double new_acc) {
	acc.erase(acc.end()-1);
	acc.insert(acc.begin(), new_acc);
}
double CompareData::GetEndNum() {
	return acc.at(0);
}
double CompareData::GetAvgAcc() {
	
}
double CompareData::GetMaxAcc() {
	return acc.max_size();
}
//void CompareData::GetArray() {
//	for (int i = 0; i < acc.capacity(); i++)
//	{
//		std::cout <<"array: "<< acc[i]<< std::endl;
//	}
//}
