#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{

}

PhoneNumber::PhoneNumber(string mobileNumber, string numberOperator)
{
	add_phone_number(string mobileNumber, string numberOperator);
	

}


PhoneNumber::~PhoneNumber()
{

}

void PhoneNumber::add_phone_number(string mobileNumber, string numberOperator)
{
	NumberInfo  number(mobileNumber, numberOperator);
	if (UnsortList.LengthIs() == 15)
	{
		cout << "Already have 15 numbers!" << endl;
	}
	else
	{
		UnsortList.InsertItem(number);
	}



}

void PhoneNumber::remove_phone_number(string mobileNumber, string numberOperator)
{

	NumberInfo  number(mobileNumber, numberOperator);
	if (numberList.LengthIs() == 1)
	{
		UnsortList.MakeEmpty();
	}
	else
	{
		UnsortList.DeleteItem(number);
	}
}

bool PhoneNumber::search_phone_number(string mobileNumber, string numberOperator)
{
	NumberInfo  number(mobileNumber, numberOperator);
	
	bool found = false;
	UnsortList.RetrieveItem(number, found);
	return found;
}


