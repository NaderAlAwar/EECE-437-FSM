#ifndef PORT_H
#define PORT_H

#include <string>
#include "FSM.h"

class Port{

public:

	Port();								//true by default
	Port(bool status, std::string input);
	Port(const Port &);

	bool isEnabled();					//returns enabled

	std::string getValue();

	// if isEnabled executes FSM
	bool execute();
	 
private:
	bool enabled;
	std::string value;

	FSM *f;
};


#endif // !PORT_H