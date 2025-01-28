#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
float a,b ; 
cout<<"\n\tEnter the number = "; 
cin>>a;
cout<<"\n\t  Enter exponent = " ; 
cin>>b;
cout<<"\n the base  " <<a<<" with the exponent " <<b;
cout<<"  = ";
cout<<pow(a,b)<<endl;
cout<<"\n\t----------------------------" ;
cin.get(); 
return 0 ;  
}
