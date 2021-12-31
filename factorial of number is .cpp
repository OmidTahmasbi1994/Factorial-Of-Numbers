#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	int number , factorial = 1 , i;
	
	cout<<"enter a positive number : ";
	
	cin>>number;
	
	for (int a=1 ; a<=number ; a++)
	{
		i = factorial * a ;
		
		factorial = i ;
	}
	
	cout<<number<<" ! = "<<factorial<<endl;
	
	getch();
	
}
