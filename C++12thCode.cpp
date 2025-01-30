#include<iostream>
    using namespace std; 
    int main()
    {
long double a,b,c,d; 
cout<<"\n Enter first number (a) : ";
cin>>a; 
cout<<"\n";
cout<<"\n Enter Second number (b) : ";
cin>>b; 
cout<<"\n";
cout<<"\n Enter Third number (c) : ";
cin>>c; 
cout<<"\n";
cout<<"\n Enter Fourth number (d) : ";
cin>>d; 
cout<<"\n";
if(a>b&&a>c&&a>d)
{
 cout<< "\n\n The Largest Number is a ="<<a<<endl ;     
}
else if (b>a&&b>c&&b>d)
{
    cout<<"\n\n The Largest Number is b = "<<b<<endl; 
}
else if (c>a&&c>b&&c>d)
{
    cout<<"\n\n The Largest Number is c = "<<c<<endl; 
}
else if (d>a&&d>b&&d>c)
{
    cout<<"\n\n The Largest Number is  d = "<<d<<endl;
}
else
{
    cout<<"\n a = b = c = d = "<<a<<endl;
}
cin.get();
return 0;
    }
