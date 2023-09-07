#pragma once
#include<string>
#include"Cart.h"
#include"Product.h"
#include"vector"
using namespace std;
class Customer
{
	int id;
	string name;
	string email;
	string address;
	int phone;
	Cart cart;


public:
	Customer(int id, string name, string email, string address, int phone);

	void setId(int id);
	void setName(string name);
	void setEmail(string email);
	void setAddress(string address);
	void setPhone(int phone);

	int getId();
	string getName();
	string getEmail();
	string getAddress();
	int getPhone();

	void AddToCart(Product p, int amount);
	void Display_Cart_Products();

	~Customer();
};

