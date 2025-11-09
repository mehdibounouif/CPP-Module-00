
#ifndef CONTACT
#define CONTACT


#include <iomanip>
#include <iostream>
#include <cstdlib>

class	Contact
{
	static std::string	fields[5];
	std::string			info[5];
	public:
		Contact(void);
		void	seter();
		void	geter(int index);
		void	geter_one_contact();
};

#endif
