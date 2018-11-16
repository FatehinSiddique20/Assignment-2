#include "CustomerData.h"
#include<iostream>

CustomerData::CustomerData()
{
}
CustomerData::CustomerData(string name, string fatherName, string motherName, string maritalStatus,
	string nationalId, string spouseName, string presentAddress, string permanentAddress, string eyeColor, string hairColor,string mobile_number,string number_operator, float height,
	         float weight)
{
	this->name = name;
	this->fatherName = fatherName;
	this->motherName = motherName;
	this->maritalStatus = maritalStatus;
	this->nationalId = nationalId;
	this->spouseName = spouseName;
	this->presentAddress = presentAddress;
	this->permanentAddress = permanentAddress;
	this->eyeColor = eyeColor;
	this->hairColor = name;
	phoneList.add_phone_number(mobile_number, number_operator);
        this->height = height;
	this->weight = weight;
}

CustomerData::~CustomerData()
{
}

bool CustomerData::check_nid(string nId)
{
	return nId.compare(nId)==0;
}



void CustomerData::print()
{
	this->print_person();
	phoneList.print();
}

bool CustomerData::insert_phone(string nId,string mobileNumber, string numberOperator)
{
	if (nId.compare(nationalId) == 0)
	{
		phoneList.add_phone_number(mobileNumber, numberOperator);
		return true;

	}
	else
	{
		return false;
	}
}

void CustomerData::delete_phone(string mobileNumber)
{
	phoneList.remove_phone_number(mobileNumber);
}

bool CustomerData::is_equal(string nId)
{
	return (nId.compare(nationalId) == 0);
}
bool CustomerData::change_operator(string mobileNumber, string numberOperator)
{
	return phoneList.change_operator(mobileNumber, numberOperator);
}

int CustomerData::count_number()
{
	return phoneList.get_length();
}