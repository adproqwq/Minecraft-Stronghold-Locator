#include<bits/stdc++.h>
using namespace std;
struct tCoor
{
	double x,y,k,b;
};
tCoor a[10];
int main()
{
	cout<<"欢迎使用要塞定位器，该版本是：1.0.2"<<endl;
	cout<<"作者：Adpro"<<endl<<endl<<endl;
	cout<<"请输入当前坐标（游戏坐标的第一个和第三个数）：";
	cin>>a[0].x>>a[0].y;
	cout<<"请输入末影之眼掉落坐标：";
	cin>>a[1].x>>a[1].y;
	cout<<"请离开当前位置至少100格（不要超过1000格），离开越远，误差越小"<<endl<<"请输入当前坐标（游戏坐标的第一个和第三个数）：";
	cin>>a[2].x>>a[2].y;
	cout<<"请输入末影之眼掉落坐标：";
	cin>>a[3].x>>a[3].y;
	if(a[0].x>a[1].x) swap(a[0],a[1]);
	a[4].k=(a[1].y-a[0].y)/(a[1].x-a[0].x);
	a[4].b=a[0].y-a[4].k*a[0].x;
	if(a[2].x>a[3].x) swap(a[2],a[3]);
	a[5].k=(a[3].y-a[2].y)/(a[3].x-a[2].x);
	a[5].b=a[2].y-a[5].k*a[2].x;
	if(a[4].k>a[5].k) swap(a[4],a[5]);
	double oppob;
	if(a[5].b>0) oppob=~(int)a[5].b+1;
	else if(a[5].b<0) oppob=~((int)a[5].b-1);
	double n=(oppob+a[4].b)/(a[5].k-a[4].k);
	double m=a[4].k*n+a[4].b;
	cout<<"末地要塞的坐标大约是："<<ceil(n)<<" "<<ceil(m)<<endl<<"仅供参考，可在到达后多丢几次眼"<<endl;
	system("Pause");
	
	return 0;
}
