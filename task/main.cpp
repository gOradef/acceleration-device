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
	CompareData arr;
	while (true) {
		for (int i = 0; i < 21; i++) {
			std::cin >> curr_acceler;
			arr.SetData(curr_acceler);
		}

	}

	//std::cout << arr.GetBeginNum();
	return 0;
}