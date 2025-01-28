  #include<iostream>
    using namespace std; 
    int main()
    {
float x ; 
cout<<"\n\n\n\t\t Enter Your number  : "; 
cin>>x; 
float*ptr=&x; 
cout<<"\n\n\t***************************************\n\n";
cout<<"\n\n\tYour number is ";
cout<<*ptr ;
cout<<" is pointed in memory as -->  ";
cout<<ptr;
cout<<"\n\n\t***************************************\n\n"; 
    cin.get(); 
    return 0 ;  
    }
