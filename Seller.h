#pragma once
#include <string>
#include<vector>
#include"Product.h"
using namespace std;
class Seller
{
	int id;
	string name;
	string email;

public:
	Seller(int id, string name, string email);

	void setId(int id);
	void setName(string name);
	void setEmail(string email);
	int getId();
	string getName();
	string getEmail();


	~Seller();
};

