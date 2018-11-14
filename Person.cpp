#include "Person.h"
#include<iostream>
using namespace std;

Person::Person()
{
	 name = "";
	 fatherName = "";
	 motherName = "";
	 maritalStatus;
	 nationalId = "";
	 spouseName = "";
	 presentAddress = "";
	 permanentAddress = "";
	 eyeColor = "";
	 hairColor = "";
         pheight = 0.0;
	 weight = 0.0;
	 

}
Person::~Person()
{
	 name = "";
	 fatherName = "";
	 motherName = "";
	 maritalStatus;
	 nationalId = "";
	 spouseName = "";
	 presentAddress = "";
	 permanentAddress = "";
	 eyeColor = "";
	 hairColor = "";
         pheight = 0.0;
	 weight = 0.0;
	 

}
Person::Person(string name, string fatherName, string motherName, string maritalStatus, string nationalId, string spouseName, string presentAddress, string permanentAddress, float height, float weight, string eyeColor, string hairColor)
{
		this->name = name;
		this->fatherName = fatherName;
		this->motherName = motherName;
		this->maritalStatus = maritalStatus;
		this->nationalId = nationalId;
		this->spouseName = spouseName;
		this->presentAddress = presentAddress;
		this->permanentAddress = permanentAddress;
		this->height = height;
		this->weight = weight;
		this->eyeColor = eyeColor;
		this->hairColor = name;
	
}
