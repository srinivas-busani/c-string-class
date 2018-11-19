#include<iostream>
using namespace std;//if not this getting error in istream and osstream decalaratiobns
class my_string
{
	char *p;
	public:
	my_string();
	my_string(const char *);
	my_string(my_string &);
	~my_string();
	friend istream & operator >>(istream &,my_string &);
	friend ostream & operator <<(ostream &,my_string &);
	
	/*assignment operator overloading functions prototypes*/
	my_string &operator =(my_string &);
	my_string &operator =(const char *);
	my_string &operator =(char *);


	/*binary + operator prototypes&*/
	//my_string &operator +(my_string &);
	my_string& operator +(my_string &);
	my_string &operator +(const char *);
	my_string &operator +(char *);
	friend my_string &operator +(const char *,my_string &);
	friend my_string &operator +(char *,my_string &);
	//my_string &operator +(my_string &);

};
