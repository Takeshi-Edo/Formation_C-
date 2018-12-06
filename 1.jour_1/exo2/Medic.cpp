#include "Medic.hh"

Medic::Medic(const std::string &name, int stimPaks): myName(name), numberStimPaks(stimPaks){
}

Medic::~Medic(){}

int& Medic::stimPaks(){
	return numberStimPaks;
}

const std::string& Medic::name(){
	return myName;
}

void Medic::shareStimPaks(int number, int& stock){
	if (number > numberStimPaks){
		std::cout << "don't be greedy" << std::endl;
	}
	else{
		std::cout << "keep the change" << std::endl;
		stock += number;
		numberStimPaks -= number;
	}
}

void Medic::addStimPaks(unsigned int number){
	if(number == 0){
		std::cout << "Hey boya, did you forget something" << std::endl;
	}
	else{
		numberStimPaks += number;
	}
}

void Medic::useStimPaks(){
	if (numberStimPaks==0){
		std::cout << "Mediiiiiic" << std::endl;
	} 
	else {
		numberStimPaks--;
		std::cout << "Time to kick some ass and chew bubble gum" << std::endl;
	}
}

void Medic::status(){
	std::cout << "Soldier " << myName << " reporting " << numberStimPaks << " stimpacks remaining sir !" << std::endl;
}