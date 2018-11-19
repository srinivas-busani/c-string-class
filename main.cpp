#include<iostream>
#include"class.h"
main()
{

	my_string s1,s2(" vector "),s3=s2,s4;
	char s[20]=" ABCD ";
	//intializations 
	cout<<"using param constructor s2="<<s2<<endl;
	cout<<"using copy constructor s3="<<s3<<endl;
	
	//extraction operator
	cin>>s1;
	cout<<"using extraction operator s1="<<s1;
	//assignment
		cout<<"---------------------assigniment operator---------------------"<<endl;
		
		//using object
		s4=s1;
		cout<<"(Assignment)both are objects::s4=s1->      s4= "<<s4<<endl;
		
		//using string constant
		s4="bangalore";
		cout<<"s4=string constant ->                      s4= "<<s4<<endl;
		
		s4=s;
		cout<<"s4=s(string)------------                   s4= "<<s4<<endl;
		//using pointer
		char *p="india";
		s4=p;
		cout<<"using pointer      s4=p-->                 s4= "<<s4<<endl;
	
	
	//concatination
	
			cout<<"----------------concationation-------------"<<endl;
	//	s3=s1+s2;
	s4=s2+s3;
	cout<<"two objects --s4=s2+s3-----                        s4= "<<s4<<endl;	
	s4=s2+s;
	cout<<"s4=s2+s(obj+string)----------                      s4="<<s4<<endl;

	s4=s2+p;
	cout<<"obj+pointer---s4=s2+p---------                     s4 "<<s4<<endl;
	
	s4=s2+" busani ";
	cout<<"obj+string const --s4=s2+\"busnai\" ---            s4="<<s4<<endl;


	s4="busani"+s2;//friend
	cout<<"string constnt + obj---s4=\"busani\"+obj --        s4="<<s4<<endl;


	s4=s+s2;//friend
	cout<<"string + obj--s4=s+s2-------------------           s4= "<<s4<<endl;

	s4=p+s2;//frien
	cout<<"pointer+obj--s4=p+s2------------------             s4= "<<s4<<endl;

	s4=s+s2+p+"busani";
	cout<<"s4=s+s2+p+string_constnt---                        s4= "<<s4<<endl;

}
