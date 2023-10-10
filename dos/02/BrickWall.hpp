#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class BrickWall : public ATarget
{
public:
	BrickWall();
	~BrickWall();

	//You will, of course, implement the clone() method. In the case of
	//BrickWall, it will return a pointer to a new BrickWall object.
	ATarget* clone() const;
};


