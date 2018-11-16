#include<iostream>
using namespace std;
#include "CustomerList.h"

int main()
{
	cout <<"Creating customer list by inserting a customer-> " << endl;
	CustomerList a("Name", "FatherName", "MotherName", "Marital Status", "11111111111", "Spouse Name", "Present Address", "Permanant Address",
		 "eyeColor", "Hair Color", "017208437374", "Grameen Phone",105.0, 24);
	a.print();

	cout << endl << endl << "Inserting a new customer-> " << endl;
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "22222222222", "Spouse Name", "Present Address", "Permanant Address",
		 "eyeColor", "Hair Color", "01935664754", "Grameen Phone"100.0, 24);
	a.print();

	cout << endl << endl << "Inserting a new mobile number in a existing customer-> " << endl;
	a.insert_mobile_number("11111111111", "01952411521", "Grameen Phone");
	a.print();

	cout << endl << endl << "Inserting 5 new customer-> " << endl;
	a.insert_customer("Fattu", "FatherName", "MotherName", "Marital Status", "55555555555", "Spouse Name", "Present Address", "Permanant Address",
		 "eyeColor", "yellow", "01752411333", "Grameen Phone",100.0, 25);
	a.insert_customer("Mamu", "FatherName1", "MotherName", "Marital Status", "69696969696", "Spouse Name", "Present Address", "Permanant Address",
		 "eyeColor", "Green", "01752411444", "Grameen Phone",100.0, 26);
	a.insert_customer("Chachu", "FatherName2", "MotherName", "Marital Status", "55555666666", "Spouse Name", "Present Address", "Permanant Address",
		 "eyeColor", "Purple", "01752411333", "Grameen Phone",100.0, 27);
	a.insert_customer("Kaku", "FatherName3", "MotherName", "Marital Status", "99999966666", "Spouse Name", "Present Address", "Permanant Address",
		 "eyeColor", "Brown", "01752411222", "Grameen Phone",100.0, 28);
	a.insert_customer("Nanu", "FatherName4", "MotherName", "Marital Status", "77759595777", "Spouse Name", "Present Address", "Permanant Address",
		 "eyeColor", "Red", "01752411111", "Grameen Phone", 100.0, 29);
	a.insert_customer("Dadu", "FatherName5", "MotherName", "Marital Status", "90909090909", "Spouse Name", "Present Address", "Permanant Address",
		 "eyeColor", "White", "01752411518", "Grameen Phone",100.0, 30);
	a.print();

	cout << endl << endl << "Removing a mobile number from a existing customer-> " << endl;
	a.remove_mobile_number("017208437374");
	cout << "Changing mobile number operator of a existing customer-> " << endl;
	a.change_operator("01952411521", "Bangla Link");
	a.print();

	cout << endl << endl << " Inserting more than fifteen number in a existing customer-> " << endl;
	a.insert_mobile_number("234567889011", "01900000000", "Grameen Phone");
	a.insert_mobile_number("115555555555", "01911111111", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01712333333", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411561", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411571", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411581", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411591", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411101", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411111", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411121", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411131", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411141", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411151", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411161", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411171", "Grameen Phone");

	cout<<endl<<endl<<"By removing last number deleting the existing customer from list-> " << endl;
	cout << "Removing the last number from a customer: " << endl;
	a.remove_mobile_number("01752411518");
    a.print();

	
	return 0;

}
