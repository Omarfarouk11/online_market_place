#include<iostream>
#include "Customer.h"
#include<string>
#include<stack>
#include"Cart.h"
#include"Product.h"
using namespace std;

Customer::Customer(int id, string name, string email, string address, int phone)
{
	this->id = id;
	this->name = name;
	this->email = email;
	this->address = address;
	this->phone = phone;
}

void Customer::setId(int id) {
	this->id = id;
}
void Customer::setName(string name) {
	this->name = name;
}
void Customer::setEmail(string email) {
	this->email = email;
}
void Customer::setAddress(string address) {
	this->address = address;
}
void Customer::setPhone(int phone) {
	this->phone = phone;
}

int Customer::getId() {
	return id;
}
string Customer::getName() {
	return name;
}
string Customer::getEmail() {
	return email;
}
string Customer::getAddress() {
	return address;
}
int Customer::getPhone() {
	return phone;
}

void Customer::AddToCart(Product p, int amount) {
	this->cart.add(p, amount);
}

void Customer::Display_Cart_Products() {
	float sum = 0;
	cout << "\n\n\t\t\t\t\t\t\t    >> Your Receipt <<\n";
	cout << "\t\t\t\t\t\t\t    ==================\n";
	cout << "\n\n\t\t\t\t|   Product ID   |   Product Name   |   Product Amount   |";
	cout << "\t\t\t\t\t\t\t\t\t----------------------------------------------------------\n";
	for (int i = 0; i < this->cart.products.size(); i++)
	{
		sum += (this->cart.products[i].getPrice() * this->cart.amount[i]);


		cout << "\t\t\t\t\t" << cart.products[i].getId() << "\t\t" << cart.products[i].getName() << "\t\t\t" << cart.amount[i] << endl;
	}
	cout << "\n\t\t\t\t__________________________________________________________";
	cout << "\n\n\t\t\t\tPrice: " << sum << " $" << endl;
	cout << "\t\t\t\tShipment price: 30 $\n";
	cout << "\t\t\t\tTotal Price: " << sum + 30 << "$" << endl;
}

Customer::~Customer()
{
}
