#pragma once

#include <map>
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class TargetGenerator
{
	private:
		TargetGenerator(const TargetGenerator&);
		TargetGenerator & operator=(const TargetGenerator&);
		std::map<std::string, ATarget*> _target;

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);

		void forgetTargetType(const std::string&);

		ATarget* createTarget(const std::string&);
};


/*
* void learnTargetType(ATarget*), teaches a target to the generator

* void forgetTargetType(string const &), that makes the generator forget a
  target type if it's known

* ATarget* createTarget(string const &), that creates a target of the
  specified type*/

