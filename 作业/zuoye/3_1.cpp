#include<iostream.h>
void main()
{
	int a;
	cout<<"Please input a:";
	cin>>a;
	if(a<10)
		cout<<a<<"<10"<<endl;
	else
		if(10<=a<=99)
		cout<<"10<="<<a<<"<=99"<<endl;
	else
		if(100<=a<=999)
		cout<<"100<="<<a<<"<=999"<<endl;
	else
	    if(a>=1000)
		cout<<a<<">=1000"<<endl;
}