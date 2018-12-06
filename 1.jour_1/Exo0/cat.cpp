//////////////////////////////////////
//     Formation C++                //
//     Exercice 0 : IOStream        //
//     Objectifs : cat function     //
//////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]){
	int i;
	char c;
	std::ifstream myFile;

	for (i=1 ; i<argc ; i++){
		c = ' ';
		myFile.open(argv[i], std::ifstream::in);
		while (myFile.is_open()){
			c = myFile.get();
			if(c==EOF)
				myFile.close();
			else
				std::cout << c;
		}
	}

	return 0;
}
