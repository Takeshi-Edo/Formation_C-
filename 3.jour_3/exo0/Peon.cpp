#include "Peon.hh"

Peon::Peon(std::string name) : Victim(name){
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(){
	std::cout << "Bleuark ..." << std::endl;
}

void Peon::getPolymorphed() const{
	std::cout << _name << " has been turned into a pink ponney!" << std::endl;
}