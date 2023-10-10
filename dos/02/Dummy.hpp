#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class Dummy : public ATarget
{
public:
	Dummy();
	~Dummy();

	//You will, of course, implement the clone() method. In the case of
	//Dummy, it will return a pointer to a new Dummy object.
	ATarget* clone() const;
};


