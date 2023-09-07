#include<iostream> 
#include<string>
#include<stdlib.h>
#include<vector>
#include"Cart.h"
#include"Customer.h"
#include"Product.h"
#include"Seller.h"


//functions
using namespace std;
bool isSeller(vector<Seller> S, int id, string name);
bool isCustmoer(vector<Customer> C, int id, string name);
void diplayAllProducts(vector<Product> P);
void addNewProduct(vector<Product>& p, int sellerId, int productId);
void signUp();
void login();
void sellerPage(int id1);
void customerPage(int id1);

//global varirables
int sId = 3;
int pId = 3;
int cId = 3;
bool flagS = false;
bool flagC = false;
int id;
int choise;
string name;
vector<Seller> sellers;
vector<Product> products;
vector<Customer> customers;




void main()
{
	sellers.push_back(Seller(1, "souq", "souq.com"));
	sellers.push_back(Seller(2, "non", "non.com"));
	sellers.push_back(Seller(3, "jumia", "jumia.com"));

	products.push_back(Product(1, "PS5", 1999.99, "A", 1));
	products.push_back(Product(2, "LG_TV", 4000, "B", 2));
	products.push_back(Product(3, "T-Shirt", 250, "C", 3));

	customers.push_back(Customer(1, "Abdo", "abdo.com", "Cairo", 011001));
	customers.push_back(Customer(2, "Amr", "amr.com", "Giza", 010002));
	customers.push_back(Customer(3, "Omar", "omar.com", "Alex", 012003));

	while (true)
	{
		flagS = false;
		flagC = false;
		system("CLS");

		cout << "\t\t\t\t---------------------------------------------------------\n";
		cout << "\t\t\t\t| >> Welcome To Online Marketplace Management System << |\n";
		cout << "\t\t\t\t---------------------------------------------------------\n";

		int choise;
		cout << "\t\t\t\t\t\t\t-------------\n";
		cout << "\t\t\t\t\t\t\t| 1.sign in |\n";
		cout << "\t\t\t\t\t\t\t|-----------|\n";
		cout << "\t\t\t\t\t\t\t| 2.sign up |\n";
		cout << "\t\t\t\t\t\t\t-------------\n";
		cout << "\t\t\t\t\t\t    Enter your choise: ";
		cin >> choise;

		if (choise == 1) {
			system("cls");
			login();
		}

		if (choise == 2) {
			system("cls");
			signUp();
		}

	}


}


/////////////////////////// functions ////////////////////////

bool isSeller(vector<Seller> S, int id, string name) {
	bool flag = false;
	for (int i = 0; i < S.size(); i++)
	{
		if (S[i].getId() == id && S[i].getName() == name)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

bool isCustmoer(vector<Customer> C, int id, string name) {
	bool flag = false;
	for (int i = 0; i < C.size(); i++)
	{
		if (C[i].getId() == id && C[i].getName() == name)
		{
			flag = true;
			break;
		}
	}

	return flag;
}

void diplayAllProducts(vector<Product> P) {
	cout << "\t\t\t\tId\t\tName\t\tPrice\t\tCategory\n";
	cout << "\t\t\t\t---------------------------------------------------------\n";
	for (int i = 0; i < P.size(); i++)
	{
		cout << "\t\t\t\t " << P[i].getId() << "\t\t" << P[i].getName() << "\t\t" << P[i].getPrice() << "\t\t" << P[i].getCategory() << endl;

	}
	cout << "\t\t\t\t_________________________________________________________\n\n";
}

void addNewProduct(vector<Product>& p, int sellerId, int productId) {
	double price;
	string name;
	string category;

	cout << "\n\n\t\t\t\t\t\tProduct id will be: " << productId << endl;
	cout << "\n\t\t\t\t\t\tEnter product name: ";
	cin >> name;
	cout << "\n\t\t\t\t\t\tEnter product price: ";
	cin >> price;
	cout << "\n\t\t\t\t\t\tEnter product category: ";
	cin >> category;

	Product newp(productId, name, price, category, sellerId);

	p.push_back(newp);
}

void login()
{
	cout << "\n\n\t\t\t\t\t\t\t--------------\n";
	cout << "\t\t\t\t\t\t\t| 1.Seller   |\n";
	cout << "\t\t\t\t\t\t\t|------------|\n";
	cout << "\t\t\t\t\t\t\t| 2.Customer |\n";
	cout << "\t\t\t\t\t\t\t--------------\n";
	cout << "\t\t\t\t\t\t    Enter your choise: ";
	cin >> choise;
	system("cls");

	do
	{
		//system("CLS");
		cout << "\n\n\t\t\t\t\t\t\t>> Sign in <<\n";
		cout << "\t\t\t\t\t\t\t-------------\n\n";
		cout << "\t\t\t\t\t\t\tEnter your id: ";
		cin >> id;
		cout << "\t\t\t\t\t\t\tEnter your name: ";
		cin >> name;


		if (choise == 1) //if Seller
		{
			flagS = isSeller(sellers, id, name);
		}

		else if (choise == 2)//if Customer
		{
			flagC = isCustmoer(customers, id, name);
		}
		if (!flagS && !flagC)
		{
			cout << "\n\t\t\t\t\t\t\t1.Try again\n";
			cout << "\t\t\t\t\t\t\t2.Exit\n";
			cin >> choise;
			if (choise==1)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	} while (!flagS && !flagC);

	if (flagS) {
		system("cls");

		sellerPage(id);
	}
	else if (flagC) {
		system("cls");

		customerPage(id);
	}

}

void signUp()
{

	cout << "\n\n\t\t\t\t\t\t\t--------------\n";
	cout << "\t\t\t\t\t\t\t| 1.Seller   |\n";
	cout << "\t\t\t\t\t\t\t|------------|\n";
	cout << "\t\t\t\t\t\t\t| 2.Customer |\n";
	cout << "\t\t\t\t\t\t\t--------------\n";
	cout << "\t\t\t\t\t\t    Enter your choise: ";
	cin >> choise;
	system("cls");

	if (choise == 1)
	{

		string name;
		string email;

		sId++;
		cout << "\n\n\t\t\t\t\t\t\t>> Sign up <<\n";
		cout << "\t\t\t\t\t\t\t-------------\n\n";
		cout << "\t\t\t\t\t\t\tYour id will be: " << sId << endl;
		cout << "\t\t\t\t\t\t\tEnter your name: ";
		cin >> name;
		cout << "\t\t\t\t\t\t\tEnter your email: ";
		cin >> email;

		Seller s(sId, name, email);

		sellers.push_back(s);
		system("CLS");

		sellerPage(sId);

	}
	else if (choise == 2) {
		int phone;
		string name, address;
		string email;

		cId++;
		cout << "\n\n\t\t\t\t\t\t\t>> Sign up <<\n";
		cout << "\t\t\t\t\t\t\t-------------\n\n";
		cout << "\t\t\t\t\t\t\tYour id will be: " << cId << endl;
		cout << "\t\t\t\t\t\t\tEnter your name: ";
		cin >> name;
		cout << "\t\t\t\t\t\t\tEnter your email: ";
		cin >> email;
		cout << "\t\t\t\t\t\t\tEnter your address: ";
		cin >> address;
		cout << "\t\t\t\t\t\t\tEnter your phone: ";
		cin >> phone;

		Customer c(cId, name, email, address, phone);
		customers.push_back(c);
		system("cls");

		customerPage(cId);
	}
}

void sellerPage(int id1)
{
	do
	{
		cout << "\n\n\t\t\t\t\t\t  |   >> Welcome Seller <<  |\n";
		cout << "\t\t\t\t\t\t  --------------------------\n";
		cout << "\t\t\t\t\t\t  | 1.Display all products |\n";
		cout << "\t\t\t\t\t\t  | 2.Add new porduct      |\n";
		cout << "\t\t\t\t\t\t  | 3.Exit                 |\n";
		cout << "\t\t\t\t\t\t  --------------------------\n";
		cout << "\t\t\t\t\t\t    Enter your choise: ";
		cin >> choise;
		cout << endl;
		system("cls");

		if (choise == 1) {

			cout << "\t\t\t\t\t\t      All your products\n";
			cout << "\t\t\t\t\t\t      ------------------\n\n";
			cout << "\t\t\t\t\t\tName\t\tPrice\t\tCategory\n";
			cout << "\t\t\t\t\t\t----------------------------------------\n";
			for (int i = 0; i < products.size(); i++)
			{
				if (products[i].getSellerId() == id)
					cout << "\t\t\t\t\t\t" << products[i].getName() << "\t\t" << products[i].getPrice() << "\t\t" << products[i].getCategory() << endl;
			}
		}//end (display)
		else if (choise == 2) {
			pId++;

			double price;
			string name;
			string category;

			cout << "\n\n\t\t\t\t\t\t    Product id will be: " << pId << endl;
			cout << "\n\t\t\t\t\t\t    Enter product name: ";
			cin >> name;
			cout << "\n\t\t\t\t\t\t    Enter product price: ";
			cin >> price;
			cout << "\n\t\t\t\t\t\t    Enter product category (A or B or C): ";
			cin >> category;

			Product p(pId, name, price, category, id);

			products.push_back(p);

		}//end (add)
	} while (choise == 1 || choise == 2);



}

void customerPage(int id1)
{
	char confirm;
	int indexOfProduct, amount;
	do
	{
		cout << "\n\n\t\t\t\t\t\t\t  ------------------\n";
		cout << "\t\t\t\t\t\t\t  | 1.Buy                |\n";
		cout << "\t\t\t\t\t\t\t  | 2.See Receipt        |\n";
		cout << "\t\t\t\t\t\t\t  | 3.Search for product |\n";
		cout << "\t\t\t\t\t\t\t  | 4.Exit               |\n";
		cout << "\t\t\t\t\t\t\t  ----------------------\n";
		cout << "\t\t\t\t\t\t     Enter your choise: ";
		cin >> choise;
		system("cls");

		if (choise == 1) {
			diplayAllProducts(products);

			cout << "\t\t\t\t\t\tEnter id of product that you want: ";
			cin >> indexOfProduct;
			cout << "\t\t\t\t\t\tEnter amount of product: ";
			cin >> amount;
			cout << "\t\t\t\t\t\tConfirm product to cart? (y / n): ";
			cin >> confirm;
			if (confirm == 'y' || confirm == 'Y') {
				int i;
				for (i = 0; i < customers.size(); i++)
				{
					if (customers[i].getId() == id1)
						break;
				}
				for (int j = 0; j < products.size(); j++)
				{
					if (indexOfProduct == products[j].getId())
						customers[i].AddToCart(products[j], amount);
				}
			}

		}
		else if (choise == 2)
		{
			int i;
			for (i = 0; i < customers.size(); i++)
			{
				if (customers[i].getId() == id1)
				{
					break;
				}
			}
			customers[i].Display_Cart_Products();

		}
		else if (choise == 3)
		{
			string cata;
			cout << "\t\t\t\t\t\t     Category (A or B or c): ";
			cin >> cata;
			cout << "\t\t\t\t\t\t      All products\n";
			cout << "\t\t\t\t---------------------------------------------------------\n";
			cout << "\t\t\t\tId\t\tName\t\tPrice\n";
			cout << "\t\t\t\t---------------------------------------------------------\n";
			for (int i = 0; i < products.size(); i++)
			{
				if (products[i].getCategory() == cata)
					cout << "\t\t\t\t" << products[i].getId() << "\t\t" << products[i].getName() << "\t\t" << products[i].getPrice() << "\t\t" << endl;
			}
			cout << "\t\t\t\t\t\t\t  | 1.Buy              |\n";
			cout << "\t\t\t\t\t\t\t  | 2.main menu        |\n";
			cin >> choise;

			if (choise == 1) {


				cout << "\t\t\t\t\t\tEnter id of product that you want: ";
				cin >> indexOfProduct;
				cout << "\t\t\t\t\t\tEnter amount of product: ";
				cin >> amount;
				cout << "\t\t\t\t\t\tConfirm product to cart? (y / n): ";
				cin >> confirm;
				if (confirm == 'y' || confirm == 'Y') {
					int i;
					for (i = 0; i < customers.size(); i++)
					{
						if (customers[i].getId() == id1)
							break;
					}
					for (int j = 0; j < products.size(); j++)
					{
						if (indexOfProduct == products[j].getId())
							customers[i].AddToCart(products[j], amount);
					}
				}

			}
			else
			{
				system("CLS");
				continue;
			}
		}

	} while (choise == 1 || choise == 2 || choise == 3);

}