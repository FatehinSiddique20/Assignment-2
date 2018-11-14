#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED
#include<string>
#include<iostream>
#include"UnsortedTypeLL.h"
#include "NumberInfo.h"

using namespace std;

class PhoneNumber
{
public:
	PhoneNumber();
	PhoneNumber(string, string);
	~PhoneNumber();
	void add_phone_number(string, string);
	void remove_phone_number(string, string);
	bool search_phone_number(string, string);
        void print_phone_number();
private:
	UnsortedTypeLL<NumberInfo> UnsortList;


};



#endif // PHONENUMBER_H_INCLUDED
