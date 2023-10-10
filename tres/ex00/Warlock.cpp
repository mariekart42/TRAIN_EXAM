
#include "Warlock.hpp"


Warlock::Warlock() {}
Warlock::Warlock(std::string name, std::string title): name(name), title(title)
{
	std::cout << name << ": This looks like another boring day."<< std::endl;
}
Warlock::Warlock(const Warlock& src)
{
	*this = src;
}
Warlock& Warlock::operator=(const Warlock &src)
{
	name = src.name;
	title = src.title;
	return *this;
}
Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}






std::string Warlock::getName() const
{
	return name;
}

std::string Warlock::getTitle() const
{
	return title;
}


void Warlock::setTitle(const std::string& newTitle)
{
	title = newTitle;
}

void Warlock::introduce() const
{
	//<NAME>: I am <NAME>, <TITLE>!
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}