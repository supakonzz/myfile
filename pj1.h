#include<iostream>
#include<vector>
using namespace std;

class Choose_skill{
	int hpmax;
	int atk;
	int def;
	int manamax;
	public:
		Choose_skill(int,int,int,int);
		vector<int> getStat();		
};

class Unit{
	string name;
	string type;
	int hp;
	int hpmax;
	int manamax;
	int mana;
	int atk;
	int def;
	Choose_skill *choose_skill;
	public:
		Unit(string,string);
		void Attack(Unit &);
		void beAttacked(int);
		int heal();
		bool isDead();
		void skill(Choose_skill *);	
		
};

Unit::Unit(string t,string n){
	type = t;
	name = n;
	if(type == "Hero"){
		hpmax = 0;
		manamax = 20;
		atk = 5;
		def = 20;	
	}else if(t == "Monster1"){
		hpmax = 30;
		atk = 2;
		def = 5;	
	}else if(t == "Monster2"){
		hpmax = 30;
		atk = 2;
		def = 5;
	}else if(t == "Monster3"){
		hpmax = 30;
		atk = 2;
		def = 5;
	}else if(t == "Monster4"){
		hpmax = 30;
		atk = 2;
		def = 5;
	}else if(t == "Monster5"){
		hpmax = 30;
		atk = 2;
		def = 5;
	}else if(t == "BigMonster"){
		hpmax = 150;
		atk = 10;
		def = 40;
	}
	hp = hpmax;	
	mana = manamax;
}

void Unit::Attack(Unit &u){
	return u.beAttacked(atk);
}

void Unit::beAttacked(int oppatk){
	int dmg = oppatk-def;
	if(dmg < 0) dmg = 0;
		hp = hp-dmg;	
}

int Unit::heal(){
	int temp = hp;
	hp += 30;
	if(hp > hpmax)  hp = hpmax;
	return hp-temp;	
}

bool Unit::isDead(){
	if(hp <= 0) return true;
	else return false;	
}

Choose_skill::Choose_skill(int a,int b,int c,int d){
	hpmax = a;
	manamax = b;
	atk = c;
	def = d;
}

vector<int> Choose_skill::getStat(){
	vector<int> s;
	s.push_back(hpmax);
	s.push_back(manamax);
	s.push_back(atk);
	s.push_back(def);
	return s;
}

void Unit::skill(Choose_skill *cs){
	vector<int> s = cs -> getStat();
	if(choose_skill == 0){
		choose_skill = cs;
		hpmax += s[0];
		hp = hpmax;
		manamax += s[1];
		mana = manamax;
		atk += s[2];
		def += s[3];
	}else{
		vector<int> s1 = choose_skill -> getStat();
		hpmax -= s1[0]+s[0];
		if(hp>hpmax) hp = hpmax;
		manamax -=  s1[1]+s[1];
		atk -= s1[2]+s[2];
		def -= s1[3]+s[3];
		choose_skill = cs;
	}
}





