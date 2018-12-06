//////////////////////////////////////////////
//     Formation C++                        //
//     Exercice 1 : IOStream                //
//     Objectifs : temperature function     //
//////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(){
	double value = 0.00000;
	std::cin >> value;
	std::string degree;
	std::cin >> degree;

	if (degree=="Fahrenheit"){
		value = 5.0/9.0 * (value-32.0);
		std::cout << std::fixed << std::setprecision(4) << value << " Celsius" << std::endl;
	}
	else{
		value = (value*9.0/5.0) + 32.0;
		std::cout << std::fixed << std::setprecision(4) << value << " Fahrenheit" << std::endl;
	}



	return 0;
}
