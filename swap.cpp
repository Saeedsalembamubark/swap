#include <iostream>
using namespace std;
void swap(int &x , int &y);
main()
{
int i= 10 ; 
int j=20;
swap(i,j);
cout<<i<<endl;
cout<<j<<endl;	
	
	
	
}
void swap(int &x , int &y)
{
	
int temp ;
temp = x ;
x= y;
x= temp;
	
	
	
}