//House.h
#include <string>
using namespace std;

class House
{
private:
	int number;
	string color;
public:
	int getNumber();
	string getColor();
	void setNumber(int);
	void setColor(string);

	House();
	House(int, string);
	void Input();
	void Output();

	friend istream& operator>>(istream&, House&);
	friend ostream& operator<<(ostream&, House&);
	friend House operator+(House&, House&);
};