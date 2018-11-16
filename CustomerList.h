#include"UnsortedTypeLL.h"
#include "CustomerData.h"

class CustomerList
{
public:
	CustomerList();
	CustomerList(string, string, string, string, string, string, string, string, string, string, string, string, float, float);
	~CustomerList();
	bool search_mobile(string);
	void insert_customer(string, string, string, string, string, string, string, string, string, string, string, string, float, float);
	void insert_mobile_number(string, string, string);
	void delete_customer(string);
	void remove_mobile_number(string);
	void change_operator(string,string);

	void print();
private:
	UnsortedTypeLL<CustomerData> customerList;
};

