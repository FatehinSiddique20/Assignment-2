#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{

}

PhoneNumber::PhoneNumber(string mobileNumber, string numberOperator)
{
	NumberInfo  number(mobileNumber,numberOperator);
	if (numberList.LengthIs() == 15)
	{
		cout << "Already have 15 numbers!" << endl;
	}
	else
	{
		numberList.InsertItem(number);
	}
	

}


PhoneNumber::~PhoneNumber()
{

}