#include<iostream.h>
void main()
{
	int a,b,y2;
	float y1;
	cin>>a>>b;
	y1=a%b;
	y2=a/b;
	if(y1==0)
	{cout<<"a/b="<<y2<<endl;}
	else{cout<<"a/b="<<y2<<"......"<<y1<<endl;}
}