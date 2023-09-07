#pragma once
#include<string>
using namespace std;
class Product
{
	int id;
	string name;
	double price;
	string category;
	int sellerId;
public:
	Product(int id, string name, double price, string category, int sellerId);

	void setId(int id);
	void setName(string name);
	void setPrice(double price);
	void setCategory(string category);
	void setSellerId(int sellerId);

	int getId();
	string getName();
	double getPrice();
	string getCategory();
	int getSellerId();

	~Product();
};

