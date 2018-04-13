#include<iostream>
class Item{
	public:
		int hp_item=10;
		int mp_item=10;
		int num_hp_item;
		int num_mp_item;
		int price;
		void item(int);	
		int used_item(int);
			
};
void dead(bool);

void Item::item(int x){
	switch(x){
		case 1:
			num_hp_item+=1;
			break;
		case 2:
			num_mp_item+=1;
			break;
	}
}



 void Item::dead(bool x){
	int a=1;
	item(a);
}

int Item::used_item(int x){
	switch(x){
		case 1:
			num_hp_item-=1;
			return hp_item;
			break;
		case 2:
			num_mp_item-=1;
			return hp_item;
			break;
	}
}



