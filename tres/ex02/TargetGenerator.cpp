
#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {}
TargetGenerator::TargetGenerator(const TargetGenerator& src)
{
	*this = src;
}
TargetGenerator& TargetGenerator::operator=(const TargetGenerator &src)
{
	return *this;
}
TargetGenerator::~TargetGenerator()
{
}





void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
	{
		_target[target->getType()] = target;
	}
}

void TargetGenerator::forgetTargetType(const std::string & type)
{
	if (_target.find(type) != _target.end())
	{
		_target.erase(_target.find(type));
	}
}

ATarget * TargetGenerator::createTarget(const std::string & target)
{
	ATarget* tmp = NULL;
	if (_target.find(target) != _target.end())
	{
		tmp = _target[target];
	}
	return tmp;
}