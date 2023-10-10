#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;
class TargetGenerator
{
	private:
		TargetGenerator &operator=(const TargetGenerator&);
		TargetGenerator(const TargetGenerator&);
		std::map<std::string, ATarget*> _target;

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);
		void forgetTargetType(const std::string &);
		ATarget* createTarget(const std::string &);
};

//It will have the following functions:
//
//* void learnTargetType(ATarget*), teaches a target to the generator
//
//* void forgetTargetType(string const &), that makes the generator forget a
//  target type if it's known
//
//* ATarget* createTarget(string const &), that creates a target of the
//  specified type