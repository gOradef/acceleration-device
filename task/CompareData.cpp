#include "CompareData.h"
#include <iostream>

CompareData::CompareData() {
	std::vector<double>acc;
}
void CompareData::SetData(double curr_acc) {
	acc.push_back(curr_acc);
}
void CompareData::RefreshVec(double new_acc) {
	prev_step_acc = *(acc.begin());
	acc.erase(acc.begin());
	acc.insert(acc.end(), new_acc);
}
double CompareData::GetEndNum() {
	return acc.at(0);
}
void CompareData::SetupAvgAcc(bool FCIC) {
		if (FCIC == 0) {
			for (int i = 0; i < acc.capacity(); i++) {
				avg_num += acc[i];
			}
			avg_num = avg_num / acc.capacity();
		}
		else {
			avg_num = avg_num * acc.capacity();
			avg_num = avg_num + ( *(acc.end() - 1) - prev_step_acc);
			avg_num = avg_num / acc.capacity();
		}
	}
double CompareData::GetAvgAcc() {
	return avg_num;
}
//double CompareData::GetMaxAcc() {
	//return acc.max_size();
//}
//void CompareData::GetArray() {
//	for (int i = 0; i < acc.capacity(); i++)
//	{
//		std::cout <<"array: "<< acc[i]<< std::endl;
//	}
//}
