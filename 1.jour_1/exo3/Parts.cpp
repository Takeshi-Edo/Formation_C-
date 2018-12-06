#include "Parts.hh"

Leg::Leg(const std::string& serial, bool functionnal) : _serial(serial), _functionnal(functionnal){}
Leg::~Leg(){}

bool Leg::isFunctionnal(){
	return _functionnal;
}

const std::string& Leg::serial(){
	return _serial;
}

void Leg::informations(){
	if (isFunctionnal())
		std::cout << "[Parts] Legs " << serial() << " status : OK" << std::endl;
	else
		std::cout << "[Parts] Legs " << serial() << " status : KO" << std::endl;

}

Head::Head(const std::string& serial, bool functionnal) : _serial(serial), _functionnal(functionnal){}
Head::~Head(){}

bool Head::isFunctionnal(){
	return _functionnal;
}

const std::string& Head::serial(){
	return _serial;
}

void Head::informations(){
	if (isFunctionnal())
		std::cout << "[Parts] Head " << serial() << " status : OK" << std::endl;
	else
		std::cout << "[Parts] Head " << serial() << " status : KO" << std::endl;

}

Arm::Arm(const std::string& serial, bool functionnal) : _serial(serial), _functionnal(functionnal){}
Arm::~Arm(){}

bool Arm::isFunctionnal(){
	return _functionnal;
}

const std::string& Arm::serial(){
	return _serial;
}

void Arm::informations(){
	if (isFunctionnal())
		std::cout << "[Parts] Arms " << serial() << " status : OK" << std::endl;
	else
		std::cout << "[Parts] Arms " << serial() << " status : KO" << std::endl;

}