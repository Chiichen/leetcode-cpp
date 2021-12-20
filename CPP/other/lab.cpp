#include <bits/stdc++.h>
using namespace std;
struct point{
	int x;
	int y;
};
int distance(point p1,point p2)
{
	return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
}
int main(){
	point a,b,c,d;
	cout<<"请分别输入四个顶点坐标"<<endl;
	cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>d.x>>d.y;
	if(distance(a,b)==distance(c,d)&&distance(a,d)==distance(b,c)&&distance(a,c)==distance(b,d))
	{
		if(distance(a,b)==distance(b,c)) cout<<"asdasdasd is square";
		else cout<<"asdawfa is rectangle";
	}
	else cout<<"asdasd is other quadrilateral";
	return 0;
}
