#include<bits/stdc++.h>
using namespace std;
struct tCoor
{
	double x,y,k,b;
};
tCoor a[10];
int main()
{
	cout<<"��ӭʹ��Ҫ����λ�����ð汾�ǣ�1.0.2"<<endl;
	cout<<"���ߣ�Adpro"<<endl<<endl<<endl;
	cout<<"�����뵱ǰ���꣨��Ϸ����ĵ�һ���͵�����������";
	cin>>a[0].x>>a[0].y;
	cout<<"������ĩӰ֮�۵������꣺";
	cin>>a[1].x>>a[1].y;
	cout<<"���뿪��ǰλ������100�񣨲�Ҫ����1000�񣩣��뿪ԽԶ�����ԽС"<<endl<<"�����뵱ǰ���꣨��Ϸ����ĵ�һ���͵�����������";
	cin>>a[2].x>>a[2].y;
	cout<<"������ĩӰ֮�۵������꣺";
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
	cout<<"ĩ��Ҫ���������Լ�ǣ�"<<ceil(n)<<" "<<ceil(m)<<endl<<"�����ο������ڵ����ඪ������"<<endl;
	system("Pause");
	
	return 0;
}
