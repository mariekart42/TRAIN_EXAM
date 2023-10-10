
#include <iostream>

class Warlock
{
private:
	std::string _name;
	std::string _title;

public:
	Warlock(std::string, std::string);
	~Warlock();

	std::string const & getName() const;
	std::string const & getTitle() const;

	//setTitle, returns void and takes a reference to constant string
	void setTitle(const std::string&);

	void introduce() const;

};
