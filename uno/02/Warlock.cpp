#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title):
	_name(name), _title(title)
{
	std::cout << _name <<": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name <<" My job here is done!" << std::endl;
}



void Warlock::setTitle(const std::string &title)
{
	_title = title;
}


void Warlock::introduce() const
{
	std::cout << _name <<" I am "<< _name << ", "<<_title<<"!" << std::endl;
}

std::string const & Warlock::getName() const
{
	return (_name);
}

std::string const & Warlock::getTitle() const
{
	return (_title);
}
