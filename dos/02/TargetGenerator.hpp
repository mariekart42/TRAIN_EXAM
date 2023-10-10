#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;
class TargetGenerator
{
private:
	TargetGenerator(const TargetGenerator& src);
	TargetGenerator& operator=(const TargetGenerator& obj);
	std::map<std::string, ATarget*> _target;
public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget* target);

	void forgetTargetType(const std::string& type);

	ATarget* createTarget(const std::string targetName);
};




/*
* void learnTargetType(ATarget*), teaches a target to the generator

* void forgetTargetType(string const &), that makes the generator forget a
  target type if it's known

* ATarget* createTarget(string const &), that creates a target of the
  specified type
 * */