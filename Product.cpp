#include "Product.h"
#include<string>
using namespace std;

Product::Product(int id, string name, double price, string category, int sellerId)
{
	this->id = id;
	this->name = name;
	this->price = price;
	this->category = category;
	this->sellerId = sellerId;
}


void Product::setId(int id) {
	this->id = id;
}
void Product::setName(string name) {
	this->name = name;
}
void Product::setPrice(double price) {
	this->price = price;
}
void Product::setCategory(string category) {
	this->category = category;
}
void Product::setSellerId(int sellerId) {
	this->sellerId = sellerId;
}

int Product::getId() {
	return id;
}
string Product::getName() {
	return name;
}
double Product::getPrice() {
	return price;
}
string Product::getCategory() {
	return category;
}
int Product::getSellerId() {
	return sellerId;
}

Product::~Product()
{
}
