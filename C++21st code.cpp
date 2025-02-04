 #include<iostream>
    using namespace std;
    int main()
    {
     cout<<"\n\t\t=====================================================\n";
     cout<<"\n\t\t ===( Your age in years, months, days, minutes andseconds )==\n";
    cout<<"\n\t\t======================================================\n";
    double a ;
    cout<<"\n \n\t\t Enter Your age by years : ";
    cin>>a;
    cout<<"\n \n\t\t Your age is "<<a<<" Years " ;
    cout<<"\n  \n \t\t = \t    " << (a*12)<<" Months ";
    cout<<"\n  \n \t\t = \t    "<< (a*365)<<" days";
    cout<<"\n  \n \t\t = \t    "<< (a*365*24)<<" Hours";
    cout<<"\n  \n \t\t = \t    "<< ((a*365*24*60))<<" Miniutes";
    cout<<"\n  \n \t\t = \t    "<< (a*365*24*60*60)<<" Seconds\n";
    cout<<"\n\t\t=========================================" <<endl;
    cin.get();
    return 0;
    }
