#include<iostream>
#include<cmath>
int main()
{
float x , y ; 
std::cout<<" Enter First Number x : "; 
std::cin>>x; 
std::cout<<"Enter Second Number y : "; 
std::cin>>y; 
std::cout<<"\n---------------------------\n";
std::cout<<"\n\tThe max. number is = ";
std::cout<<fmax(x,y)<<std::endl; 
return 0 ; 
}
