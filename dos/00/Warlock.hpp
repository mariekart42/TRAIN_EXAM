#pragma once

#include <iostream>

class Warlock
{
private:
	Warlock(const Warlock&);
	Warlock &operator=(const Warlock&);
	Warlock();
	std::string _name;
	std::string _title;

public:
	Warlock(std::string, std::string);
	~Warlock();

	const std::string& getName() const;
	const std::string& getTitle() const;

	void setTitle(const std::string&);

	void introduce() const;
};


