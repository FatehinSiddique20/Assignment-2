#include"UnsortedTypeLL.h"
#include "CustomerData.h"

class CustomerList
{
public:
	CustomerList();
	CustomerList(string, string, string, string, string, string, string, string, float, float, string, string, string, string);
	~CustomerList();
	bool search_mobile(string);
	void insert_customer(string, string, string, string, string, string, string, string, float, float, string, string, string, string);
	void insert_mobile_number(string, string, string);
	void delete_customer(string);
	void print();
private:
	UnsortedTypeLL<CustomerData> customerList;
};

