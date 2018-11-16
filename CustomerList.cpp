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

bool CustomerList::search_mobile(string mobileNumber)
{
	CustomerData *temp;
	bool found = false;
	int length = customerList.LengthIs();
	customerList.ResetList();
	while (length--)
	{
		temp = customerList.GetNextItem();
		found = temp->check_mobile(mobileNumber);
		if(found)
            break;
	}
	return found;
}

bool check_nid(string nationalId)
{
	return nationalId.length() == 11;
}
void CustomerList::delete_customer(string nId)
{

	customerList.DeleteItem(nId);
}
void CustomerList::insert_customer(string name, string fatherName, string motherName, string maritalStatus,
	string nationalId, string spouseName, string presentAddress, string permanentAddress, string eyeColor, string hairColor, string mobileNumber, string numberOperator, float height,
	float weight)
{

	CustomerData customer(name, fatherName, motherName, maritalStatus,
		nationalId, spouseName, presentAddress, permanentAddress, eyeColor, hairColor, mobileNumber, numberOperator, height,
		weight);
	if (check_nid(nationalId))
	{
		if (customerList.search(nationalId))
		{
			cout << "This NID already exists." << endl;
		}
		else
		{
			if (!search_mobile(mobileNumber))
			{
				customerList.InsertItem(customer);
			}
			else
				cout << "This Mobile Number already exists." << endl;
		}
	}
	else
	{
		cout << "This National Id is Not Correct." << endl;
	}
}

void CustomerList::insert_mobile_number(string nationalId, string mobileNumber,string numberOperator)
{
	CustomerData *temp;
	bool found = false;
	int length = customerList.LengthIs();
	customerList.ResetList();
	if (check_nid(nationalId))
	{
		if (!(search_mobile(mobileNumber)))
		{
			customerList.ResetList();
			while (length--)
			{
				temp = customerList.GetNextItem();
				found = temp->insert_phone(nationalId, mobileNumber, numberOperator);
			}
			if (!found)
			{
				cout << "This National Id is not found." << endl;
			}
		}
		else
			cout << "This Number already exists" << endl;

	}
	else
	{
		cout << "National Id is incorrect." << endl;
	}
}
void CustomerList::change_operator(string mobileNumber, string newOperator)
{
	CustomerData *temp;
	bool found = false;
	int length = customerList.LengthIs();
	customerList.ResetList();
	if (search_mobile(mobileNumber))
	{
		customerList.ResetList();
		while (length--)
		{

			temp = customerList.GetNextItem();
			found = temp->change_operator(mobileNumber, newOperator);
			if (found)
				break;
		}
		if (!found)
		{
			cout << ""This National Id is not found." << endl;
		}
	}
	else
		cout << "This Number is Not in the list." << endl;
}
void CustomerList::remove_mobile_number(string mobileNumber)
{
	CustomerData *temp;
	bool found = false;
	int length = customerList.LengthIs();
	customerList.ResetList();
		if (search_mobile(mobileNumber))
		{
			customerList.ResetList();
			while (length--)
			{
				temp = customerList.GetNextItem();
				if (temp->check_mobile(mobileNumber))
				{
					if (temp->count_number() == 1)
					{
						string nId = temp->get_national_id();
						customerList.DeleteItem(nId);
					}
					else
						temp->delete_phone(mobileNumber);
					found = true;
				}
				if (found)
					break;
			}
			if (!found)
			{
				cout << "This National Id is not found." << endl;
			}
		}
		else
			cout << "This Number is Not Resistered." << endl;
}
void CustomerList::print()
{
	customerList.print();
}
