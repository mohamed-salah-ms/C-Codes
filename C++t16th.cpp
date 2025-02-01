   #include<iostream>
    using namespace std; 
    int main()
    {
int a ; 
float b;
double c; 
long double d; 
char e; 
string f="Welcome in C++ Variables " ;
bool x ; 
cout<<"\n";
cout<<" Enter integer number a : "; 
cin>>a; 
    cout<<"\n\n\t****************************************\n\n";
cout<<"Enter float number b : ";
cin>>b; 
    cout<<"\n\n\t****************************************\n\n";
cout<<"Enter double number c : ";
cin>>c;
    cout<<"\n\n\t****************************************\n\n";
cout<<"Enter long double number d : "; 
cin>>d; 
    cout<<"\n\n\t****************************************\n\n";
cout<<" Enter a letter in Variable e --> "; 
cin>>e;
    cout<<"\n\n\t****************************************\n\n";
cout<<" Enter  Zero Or one --> " ; 
cin>>x;
    cout<<"\n\n\t****************************************\n\n";
cout<<"\n\n\n\t\t";
cout<<f<<endl; 
cout<<"\n\n\n\t\t";
cout<<"\n\t you have enter  a,b c ,d ,e ,f,x = \n\n";
cout<<"\n\n\n\t\t";
cout<<a<<endl;
cout<<"\n\n\n\t\t";
cout<<b<<endl;
cout<<"\n\n\n\t\t";
cout<<c<<endl;
cout<<"\n\n\n\t\t";
cout<<d<<endl; 
cout<<"\n\n\n\t\t";
cout<<e<<endl;
    cout<<"\n\n\n\t\t";
if(x>0)
{
cout<<"True = "<<x<<endl;
}
else
{
cout<<"False = "<<x<<endl;
}
cout<<"\n\n\n\t\t";
    cout<<"\n\n\n\t\t";
cin.get();
cout<<"\n\n\n\t\t";
system("pause");
cout<<"\n\n\n\t\t";
return 0;
    }
