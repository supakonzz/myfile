#include<iostream>
using namespace std;
struct Rect{
double x,y,w,h;
};
Rect merge(Rect &a,Rect &b,Rect &c,Rect &d){
//Write definition of merge() here.
	Rect R5;
	R5.x = min(min(a.x,b.x),min(c.x,d.x));
	R5.y = max(max(a.y,b.y),max(c.y,d.y));
	R5.w = max(max(a.x+a.w,b.x+b.w),max(c.x+c.w,d.x+d.w))-min(min(a.x,b.x),min(c.x,d.x));
	R5.h = max(max(a.y,b.y),max(c.y,d.y))-min(min(a.y-a.h,b.y-b.h),min(c.y-c.h,d.y-d.h));
	return R5;
};
int main(){
Rect R1,R2,R3,R4,R5;
cout << "Please input Rect 1 (x y w h): ";
cin >> R1.x >> R1.y >> R1.w >> R1.h;
cout << "Please input Rect 2 (x y w h): ";
cin >> R2.x >> R2.y >> R2.w >> R2.h;
cout << "Please input Rect 3 (x y w h): ";
cin >> R3.x >> R3.y >> R3.w >> R3.h;
cout << "Please input Rect 4 (x y w h): ";
cin >> R4.x >> R4.y >> R4.w >> R4.h;
//Write your code here.
R5 = merge(R1,R2,R3,R4);
cout << "Merged Rect = ";
cout << R5.x << " " << R5.y << " " << R5.w << " " << R5.h << " ";

return 0;
}

