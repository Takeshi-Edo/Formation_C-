#include "Sorcerer.hh"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(){
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;	
}

std::string Sorcerer::getName() const{  return _name;  }
std::string Sorcerer::getTitle() const{  return _title;  }

void Sorcerer::polymorph(const Victim& victim){
	victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& os, const Sorcerer& sorcerer){
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies !";
	return os;
}