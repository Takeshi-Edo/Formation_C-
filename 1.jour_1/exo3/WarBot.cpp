#include "WarBot.hh"

WarBot::WarBot(const std::string& serial) : _serial(serial){}
WarBot::~WarBot(){}

void WarBot::setParts(const Arm& arm){_arm = arm;}
void WarBot::setParts(const Leg& leg){_leg = leg;}
void WarBot::setParts(const Head& head){_head = head;}

void WarBot::swapParts(Arm& arm){
	Arm a = _arm;
	_arm = arm;
	arm = a;
}
void WarBot::swapParts(Leg& leg){
	Leg l = _leg;
	_leg = leg;
	leg = l;
}

void WarBot::swapParts(Head& head){
	Head h = _head;
	_head = head;
	head = h;
}

void WarBot::informations(){
	std::cout << "[WarBot] " << _serial << std::endl;
	_arm.informations();
	_leg.informations();
	_head.informations();
}

bool WarBot::status(){
	return (_arm.isFunctionnal() && _leg.isFunctionnal() && _head.isFunctionnal());
}