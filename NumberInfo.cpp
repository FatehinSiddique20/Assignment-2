#include "NumberInfo.h"
#include <string>

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
void NumberInfo::is_equal(string mobileNumber)
{
 if (this->mobileNumber.compare(mobileNumber)==0)
{
return true;
}
else 
return false;
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
bool NumberInfo::same_number(string mobileNumber)
{
if (this->mobileNumber.compare(mobileNumber) == 0)
		return true;
	else
		return false;
}
void NumberInfo:: print()
{
cout<< "Mobile Number: "<<mobileNumber<<" " << "Operator: "<<numberOperator<< endl;
}