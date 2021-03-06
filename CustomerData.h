#include "Person.h"
#include "PhoneNumber.h"
#include<string>
using namespace std;

class CustomerData: public Person
{
public:
	CustomerData();
	CustomerData(string, string, string, string, string, string, string, string, string, string,string,string, float, float);
	~CustomerData();
	bool check_nid(string);
	bool check_mobile(string);
	bool insert_phone(string,string, string);
	void delete_phone(string);
	bool is_equal(string);
	bool change_operator(string,string);
	int count_number();

        void print();
private:
	PhoneNumber phoneList;
};

