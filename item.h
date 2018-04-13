#include<iostream>
using namespace std;
class Item{
	public:
		bool temp;
		int hp_item=10;
		int mp_item=10;
		int num_hp_item=0;
		int num_mp_item=0;
		int price;
		void item(int);	
		int used_item(int);
		void dead(bool);	
};

void Item::item(int x){
	switch(x){
		case 1:
			
			num_hp_item+=1;
			cout<<num_hp_item<<endl;
			break;
		case 2:
			num_mp_item+=1;
			break;
	}
}



void Item::dead(bool temp){
	
	if(temp==1){
		
		item(temp);
	}
}

int Item::used_item(int x){
	switch(x){
		
		case 1:
			num_hp_item-=1;
			cout<<num_hp_item<<endl;
			return hp_item;
			break;
		case 2:
			num_mp_item-=1;
			return mp_item;
			break;
	}
}


