#include "Seller.h"
#include<string.h>
#include<iostream>
using namespace std;

Seller::Seller(int id, string name, string email)
{
	this->id = id;
	this->name = name;
	this->email = email;
}

void Seller::setId(int id)
{
	this->id = id;
}
void Seller::setName(string name) {
	this->name = name;
}
void Seller::setEmail(string email) {
	this->email = email;
}
int Seller::getId() {
	return id;
}
string Seller::getName() {
	return name;
}
string Seller::getEmail() {
	return email;
}



Seller::~Seller()
{
}
