
#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}
TargetGenerator::TargetGenerator(const TargetGenerator& src)
{
	*this = src;
}
TargetGenerator& TargetGenerator::operator=(const TargetGenerator &obj)
{
	return *this;
}


void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
	{
		_target[target->getType()] = target;
	}
}

void TargetGenerator::forgetTargetType(const std::string &targetName)
{
	if (_target.find(targetName) != _target.end())
	{
		_target.erase(_target.find(targetName));
	}
}

ATarget* TargetGenerator::createTarget(const std::string &target)
{
	ATarget *tmp = NULL;

	if (_target.find(target) != _target.end())
	{
		tmp = _target[target];
	}
	return tmp;
}