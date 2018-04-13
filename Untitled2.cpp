#include"pj1.h"
#include"item.h"

int main(){
	Unit x("Hero","x");
	Item a;
	
	cout << x.isDead()<<endl;
	a.temp = x.isDead();
	a.dead(a.temp);
	a.used_item(1);
	
}
