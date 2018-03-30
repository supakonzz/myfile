#include<iostream>
using namespace std;

class People
{
	public:
	string name;
	char gender;
	int age;
	long long int money;
	double height;
	double weight;
	People * in_relation_with;
	bool flirt(People &);
};
bool People::flirt(People &target)
{
	if(target.gender == 'm')
	{
		if(target.age<=30||target.age>=10)
		{
			if(target.height>=170)
			{
				if(target.weight==67)
				{
					if(target.money>=20000000)
					{
						cout<<name;
						People temp;	
						temp.in_relation_with=;
						in_relation_with=&target;
						target.in_relation_with=&temp;
						cout<<temp.name<<endl;
						return true;
					}
					else cout<<"fuck you\n";
				}
				else cout<<"fuck you\n";
			}
			else cout<<"fuck you\n";
		}
		else cout<<"fuck you\n";
	}
	else cout<<"fuck you\n";
}

int main()
{
	People x,y;
	cout<< "enter name gender age height weight money : ";
	cin>>x.name;
	cout<< "enter name gender age height weight money : ";
	cin>>x.name>>y.gender>>y.age>>y.height>>y.weight>>y.money;
	cout<<x.flirt(y)<<endl;
	cout<<y.name<<" is fan of "<<x.name<<endl;
	
	
}
