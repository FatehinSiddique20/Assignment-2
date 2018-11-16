#include "Person.h"
#include "PhoneNumber.h"
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
	void delete_phone(string, string);
	bool is_equal(string);
        void print();
private:
	PhoneNumber phoneList;
};

