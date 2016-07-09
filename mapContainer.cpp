// mapContainer.cpp : Defines the entry point for the console application.
//

#include <map>
#include <iostream>
#include <string>
#include<iterator>

using namespace std;
int main(int argc, std::string args)
{
	std::map<int, std::string> prize;
	prize[446]= "Anthony";
	prize[432]= "Jane";
	prize[405]= "Kate";
	prize[399]= "Njuguna";
	prize[396]= "Ombima";

	cout<<"Number of students getting prizes:"<<prize.size()<<endl;

	for(prize<int, std::string>::const_iterator itr=prize.cbegin(); itr!=prize.cend(); ++itr){
		cout<<"Prizelist:"<< itr->second<<endl;
	}
	prize<int, std::string>::iterator insert=prize.begin();
	prize.insert(begin, pair<int, std::string>(412, "Sylvia"));

	std::string name;
	cout<<"Enter a name to search for in the prizelist:";
	cin>>name;
	cout<<endl;

	if(prize.find(name) !=prize.end()){
		cout<<prize[name]<<endl;}
	else{
		cout<<"Name is not on the pricelist"<<endl;
	}
	return 0;
}

