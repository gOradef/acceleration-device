#include <iostream>
#include "CompareData.h"


int main() {
	//int mass_of_car{ 1500 };
	//double coeficient{ 0.4 };


	/*double CurrNumOfAcceliration{ 0 };
	double* CNOA = &CurrNumOfAcceliration;

	double AverageNumOfAceliration{0};
	double* ANOA = &AverageNumOfAceliration;

	int takenum{ 0 };
	while (true) {
		for (int i = 0; i < 5; i++) {
			if (takenum == 15)
			{
				
			}
			std::cin >> *CNOA;
			*ANOA += *CNOA;
			takenum++;
		}
		*ANOA = *ANOA / takenum;
		std::cout << *ANOA;
	}*/
	double curr_acceler;
	bool BufferIsSkipped{0};
	while (BufferIsSkipped != 1) {
		std::cin >> curr_acceler;
		if (curr_acceler == 0) {
			continue;
		}
		else {
			BufferIsSkipped = 1;
		}
	}
	std::cout << "Trash is skipped \n";
	bool FirstConfigurationIsCompleted{ 0 };
	CompareData arr;
	while (true) {
		if (FirstConfigurationIsCompleted != 1) 
		{
			for (int i = 0; i < 4; i++) {   //choose what is i need to be | 4 is test num
				std::cin >> curr_acceler;
				arr.SetData(curr_acceler);
			}
			arr.SetupAvgAcc(FirstConfigurationIsCompleted);
			FirstConfigurationIsCompleted = 1;
			std::cout << "FirstConfigurationIsCompleted now \n";
		}
		//main method to fill vec by accelerations
		std::cin >> curr_acceler;
		arr.RefreshVec(curr_acceler);
		arr.SetupAvgAcc(FirstConfigurationIsCompleted);
		std::cout << arr.GetAvgAcc() << std::endl;

	}	

	return 0;
}