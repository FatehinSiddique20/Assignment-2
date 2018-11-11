#include "NumberInfo.h"

NumberInfo::NumberInfo()
{
}
NumberInfo::NumberInfo(string mobileNumber,string numberOperator)
{
	this->mobileNumber = mobileNumber;
	this->numberOperator = numberOperator;
}


NumberInfo::~NumberInfo()
{
}

void NumberInfo::set_number_operator(string numberOperator)
{
	this->numberOperator = numberOperator;
}