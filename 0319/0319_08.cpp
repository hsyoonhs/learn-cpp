#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
	int id;
	string name;
	int price;

public:
	void input();
	void print();
	bool isCheaper(Product other);
};

void Product::input()
{
	cout << "상품 번호: ";
	cin >> id;
	cout << "상품명: ";
	cin >> name;
	cout << "가격: ";
	cin >> price;
	cout << endl;
}

void Product::print()
{
	cout << "상품 번호 " << id << endl
		<< "상품명: " << name 
		<< "가격: " << price << endl;
}

bool Product::isCheaper(Product other)
{
	if (price < other.price)
	{
        return true;
	}
	else
	{
        return false;
	}
}

int main() 
{
	Product p1, p2;
	p1.input();
	p2.input();

	if (p1.isCheaper(p2))
	{
		p1.print();
	}
	else
	{
		p2.print();
	}
	cout << "이 상품이 더 쌉니다." << endl;

	return 0;
}
