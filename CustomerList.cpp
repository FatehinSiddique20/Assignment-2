#include "CustomerList.h"

CustomerList::CustomerList()
{
}

CustomerList::CustomerList(string name, string fatherName, string motherName, string maritalStatus,
	string nationalId, string spouseName, string presentAddress, string permanentAddress, string eyeColor, string hairColor, string mobile_number, string number_operator, float height,
	float weight)
{
	insert_customer(name, fatherName, motherName, maritalStatus,
		nationalId, spouseName, presentAddress, permanentAddress, eyeColor, hairColor, mobile_number, number_operator, height,
		weight);
}


CustomerList::~CustomerList()
{
}
