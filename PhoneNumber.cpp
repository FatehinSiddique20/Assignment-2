#include "PhoneNumber.h"
#include<iostream>


PhoneNumber::PhoneNumber()
{

}

PhoneNumber::PhoneNumber(string mobileNumber, string numberOperator)
{
   
add_phone_number(mobileNumber, numberOperator);

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
	if (UnsortList.LengthIs() == 1)
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
	return UnsortList.search(mobileNumber);
}
void PhoneNumber::print_phone_number()
{
UnsortList.print();
}

