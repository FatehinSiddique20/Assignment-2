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
string NumberInfo::get_mobile_number()
{
	return mobileNumber;
}

string NumberInfo::get_number_operator()
{
	return numberOperator;
}

void NumberInfo::set_mobile_number(string mobileNumber)
{
	this->mobileNumber = mobileNumber;
}