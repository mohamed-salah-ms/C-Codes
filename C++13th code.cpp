 #include<iostream>
    using namespace std; 
    int main()
    {
int i ; 
cout<<" \n\n\t\t Enter The number : ";
cin>>i; 
start :
if(i>500)
{
return 0;   
}
if (i%2==0)
{
    cout<<"\n This is even number  --> "<<" ("<<i<<") "; 
}
i++;
goto start; 
    cin.get();
    return 0 ; 
    }
