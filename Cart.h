#pragma once
#include<list>
#include<vector>
#include"Product.h"
class Cart
{

public:
	vector<Product> products;
	vector<int> amount;

	Cart();

	void add(Product p, int amount);

	~Cart();
};

