//ADDITION OF TWO NUMBERS USING POINTERS
 
#include<iostream.h>
using namespace std;
#include<conio.h>
void main()
{
int f,s,*p,*q,sum;
cout<<"Enter two integers to add\n";
cin>>f>>s;
p= &f;
q=&s;
sum= *p + *q;
cout<<"Sum of 2 numbers="<< sum;
getch();
}