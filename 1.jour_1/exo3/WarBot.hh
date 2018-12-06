#ifndef WARBOT_HH
#define WARBOT_HH

#include "Parts.hh"

class WarBot{
	public:
		WarBot(const std::string& serial = "Bob-01");
		~WarBot();

		void setParts(const Arm& arm);
		void setParts(const Leg& leg);
		void setParts(const Head& head);

		void swapParts(Arm& arm);
		void swapParts(Leg& Leg);
		void swapParts(Head& head);

		void informations();
		bool status();

	private:
		const std::string _serial;
		Arm _arm;
		Leg _leg;
		Head _head;
};

#endif