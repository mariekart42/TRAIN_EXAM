#pragma once


#include <iostream>

class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock &operator=(const Warlock&);
	Warlock(const Warlock&);
public:
	Warlock(std::string, std::string);
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;
	void setTitle(const std::string&);
	void introduce() const;
};

