//filter by price and search min price
#include <iostream> 
using namespace std;

struct Fruit
{
	bool isValid = false;
	int id;
	int price;
	string color;
	int weight;
	string name;
};

Fruit GetNewFruit(int id)
{
	Fruit fruit;
	fruit.isValid = true;
	fruit.id = id;
	fruit.price = rand()%100;
	fruit.name = "Apple";
	fruit.color = "Green";
	fruit.weight = rand() % 10;
	return fruit;
}

Fruit ReadFruit()
{
	Fruit fruit;
	cout << "Enter Fruit id:" << endl;
	cin >> fruit.id;
	cout << "Enter Fruit price:" << endl;
	cin >> fruit.price;
	cout << "Enter Fruit name:" << endl;
	cin >> fruit.name;
	cout << "Enter Fruit color:" << endl;
	cin >> fruit.color;
	cout << "Enter Fruit weight:" << endl;
	cin >> fruit.weight;
	fruit.isValid = true;
	return fruit;
}

void WriteFruit(Fruit a)
{
	cout << "pArray[i].id:" << a.id << endl;
	cout << "pArray[i].price:" << a.price << endl;
	cout << "pArray[i].color:" << a.color << endl;
	cout << "pArray[i].name:" << a.name << endl;
	cout << "pArray[i].weight:" << a.weight << endl;
	cout << "pArray[i].isValid:" << a.isValid << endl;
	cout << endl;
}


Fruit SearchFruitById(int id, Fruit* list, int listSize)
{
	for (size_t i = 0; i < listSize; i++)
	{
		if (list[i].id == id) 
		{
			return list[i];
		}
	}
	Fruit result;
	return result;
}

Fruit FindFruitWithMinPrice(Fruit* list, int listSize)
{
	Fruit result = list[0];
	for (size_t i = 1; i < listSize; i++)
	{
		if (list[i].price < result.price)
		{
			result = list[i];
		}
	}
	return result;
}

int main()
{
	srand(time(NULL));
	int n;
	cout << "Enter number of elements:";
	cin >> n;
	Fruit* pArray;
	pArray = new Fruit[n];

	for (size_t i = 0; i < n; i++)
	{
		pArray[i] = GetNewFruit(i + 1);
		//cout << "\nEnter info about " << i << " Fruit:" << endl;
		//pArray[i] = ReadFruit();
	}

	for (size_t i = 0; i < n; i++)
	{
		WriteFruit(pArray[i]);
	}

	int price;
	cout << "Enter price to filter:";
	cin >> price;
	cout << "Fruits with price more then " << price << ":\n";
	for (size_t i = 0; i < n; i++)
	{
		if (pArray[i].price > price)
		{
			WriteFruit(pArray[i]);
		}
	}

	auto minPriceFruit = FindFruitWithMinPrice(pArray, n);
	cout << "Fruit with min price:\n";
	WriteFruit(minPriceFruit);

	delete[] pArray;
}

