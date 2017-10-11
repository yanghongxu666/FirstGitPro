#include<iostream.h>
void main()
{
	int k,r;
	float s1,l1,p=3.14;
	cin>>k>>r;
	l1=2*p*r;
	s1=p*r*r;
	if(k==1)
		{cout<<s1<<endl;}
	else
		if(k==2)
		{cout<<l1<<endl;}
	else
		if(k==3)
		{cout<<l1<<s1<<endl;}
		else{cout<<"k值不符合条件"<<endl;}
}

