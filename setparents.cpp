#include<iostream>
#include<string>
#include<vector>
using namespace std;
class People{
	string name;
	vector<People *> parents;
	vector<People *> children;
	public:
	People(string);
		~People();
		void setParent(People *);
		void setChild(People *);
		void removeChild(People *);
		string getName();
		void showParents();
		void showChildren();
};
People::People(string s){
name = s;
}


	
	

	


People::~People(){
	
cout << name << " was deleted.\n";


}
void People::setParent(People *p){
for(int i=0;i < parents.size(); i++){
if(parents[i] == p) return;
}
parents.push_back(p);
p->setChild(this);
}
void People::setChild(People *p){
for(int i=0;i < children.size(); i++){
if(children[i] == p) return;
}
children.push_back(p);
p->setParent(this);
}
void People::removeChild(People *p){
for(int i=0;i < children.size(); i++){
if(children[i] == p) {
	children.erase(children.begin()+i);
	
}
}
}
string People::getName(){
return name;
}

void People::showParents(){
cout << name << "'s parents: ";
for(int i=0;i < parents.size(); i++){
cout << parents[i]->getName() << " ";
}
cout << "\n";
}
void People::showChildren(){
cout << name << "'s children: ";
for(int i=0;i < children.size(); i++){
cout << children[i]->getName() << " ";
}
cout << "\n";
}
int main(){
People *a = new People("Alice");
People *b = new People("Bob");
People *c = new People("Charlie");
People *d = new People("David");
People *e = new People("Eve");
People *f = new People("Frank");
People *g = new People("Grace");
People *h = new People("Heidi");
People *w = new People("Wendy");
People *p = new People("Peggy");
People *m = new People("Mallet");
People *o = new People("Oscar");
c->setParent(a);
c->setParent(b);
d->setParent(a);
d->setParent(b);
d->setChild(g);
d->setChild(e);
g->setChild(h);
f->setChild(h);
h->setChild(w);
w->setParent(p);
p->setParent(m);
p->setParent(o);
a->showChildren();
 People * mystring[]={a,b,c,d,e,f,g,h,w,p,m,o};
vector <People *> x(mystring, mystring + sizeof(mystring) / sizeof(string) );
for(int i = 1;i<x.size();i++)
{
		x[i]->showChildren();
}
delete d;
 People * mystring2[]={a,b,c,f,p,m,o};
vector <People *> y(mystring2, mystring2 + sizeof(mystring2) / sizeof(string) );
for(int i = 0;i<y.size();i++)
{
		y[i]->showChildren();
}
return 0;
}
