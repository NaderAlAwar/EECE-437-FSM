#include <vector>

class Action{

public:

	/**
	 * @brief Empty constructor
	 */
	Action();

	/**
	 * @brief Action constructor takes a function pointer as an input
	 * @description Function pointed to must have an argument of type integer vector.
	 */
	Action(void(*func)(std::vector<int> &));

	
	Action(const Action &);

	void print_variables();
	
	std::vector<int> execute_action();
	
	void update_variables(std::vector<int>);			//this updates the variables in the Action object.

private:											//they then have to be copied back to the FSM

	
	void(*function)(std::vector<int> &);

	std::vector<int> variables;

};
