#include "WarBot.hh"

int main(){
	WarBot r2d2;

	Arm a("A-1-18-2-04-2", false);
	Arm a2("A-2-18-2-04-2", true);
	Leg l("L-1-18-2-04-2", true);
	Head h("H-1-18-2-04-2", true);

	r2d2.setParts(a);
	r2d2.setParts(l);
	r2d2.setParts(h);

	std::cout << std::boolalpha << r2d2.status() << std::endl;
	r2d2.informations();

	std::cout << std::endl;

	a2.informations();
	r2d2.swapParts(a2);
	a2.informations();
	r2d2.informations();

	return 0;
}