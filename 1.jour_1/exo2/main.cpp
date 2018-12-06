#include "Medic.hh"

int main(){
	/////////////////////
	Medic m("Junior", 5);
	std::cout << "Medic " << m.name() << std::endl;
	m.status();
	std::cout << std::endl;

	Medic m2;
	std::cout << "Medic " << m2.name() << std::endl;
	m2.status();
	std::cout << std::endl;

	////////////////////
	m.shareStimPaks(6, m2.stimPaks());
	m.status();
	m2.status();
	std::cout << std::endl;

	///////////
	for (int i=0;i<5;i++)
		m.useStimPaks();

	m.status();
	m2.status();
	std::cout << std::endl;

	/////////////
	m.addStimPaks(0);
	m2.shareStimPaks(5, m.stimPaks());
	m.status();
	m2.status();

	return 0;
}