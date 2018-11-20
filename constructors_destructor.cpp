#include<iostream>
#include"class.h"
my_string::my_string():p(0){}
my_string::my_string(const char *temp)
{
	short int i;
	for(i=0;temp[i];i++);//length of the string
	p=new char[i+1];
	for(i=0;temp[i];i++)
		p[i]=temp[i];   //copying 
	p[i]=temp[i];
}
my_string::my_string(my_string &temp)
{
	int i;
	for(i=0;temp.p[i];i++);
	p=new char[i+1];
	for(i=0;temp.p[i];i++)
		p[i]=temp.p[i];
	p[i]=temp.p[i];
}
my_string::~my_string()
{
	if(p!=0)
		delete p;
}


