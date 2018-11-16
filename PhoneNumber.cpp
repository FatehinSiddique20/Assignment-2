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

void PhoneNumber::remove_phone_number(string mobileNumber)
{

	NumberInfo  number(mobileNumber, numberOperator);
	if (UnsortList.LengthIs() == 1)
	{
		UnsortList.MakeEmpty();
	}
	else
	{
		UnsortList.DeleteItem(mobileNumber);
	}
}

bool PhoneNumber::search_mobile_number(string mobileNumber, string numberOperator)
{
	return UnsortList.search(mobileNumber);
}


bool PhoneNumber::change_operator(string mobileNumber, string numberOperator)
{
NumberInfo *temp;
	int length = numberList.LengthIs();
	numberList.ResetList();
	while (length--)
	{
			temp = numberList.GetNextItem();
			if (temp->get_mobile_number().compare(mobileNumber) == 0)
			{
				temp->set_number_operator(newOperator);
				return true;
			}
	}
	return false;
}
int PhoneNumber::get_length()
{
	return numberList.LengthIs();
}

void PhoneNumber::print()
{
UnsortList.print();
}

