#ifndef PARTS_HH
#define PARTS_HH

#include <string>
#include <iostream>

class Arm{
	public:
		Arm(const std::string& serial = "A-01", bool functionnal = true);
		~Arm();

		bool isFunctionnal();
		const std::string& serial();
		void informations();

	private:
		std::string _serial;
		bool _functionnal;
	
};

class Head{
	public:
		Head(const std::string& serial = "H-01", bool functionnal = true);
		~Head();

		bool isFunctionnal();
		const std::string& serial();
		void informations();

	private:
		std::string _serial;
		bool _functionnal;
	
};

class Leg{
	public:
		Leg(const std::string& serial = "L-01", bool functionnal = true);
		~Leg();

		bool isFunctionnal();
		const std::string& serial();
		void informations();

	private:
		std::string _serial;
		bool _functionnal;
	
};

#endif