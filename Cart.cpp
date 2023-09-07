#include "Cart.h"
#include<list>

Cart::Cart()
{
}


void Cart::add(Product p, int a)
{
	products.push_back(p);
	amount.push_back(a);
}

Cart::~Cart()
{
}
