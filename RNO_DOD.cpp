#include <iostream>
using namespace std;
 
int main()
{
int t, n, a, wynik;
int tb[100];
 
    cin >> t;                   
    for(int i=0;i<t;++i)
    {
           wynik=0; 
           cin>>n;                     
           for(int j=0;j<n;++j)
           {
                cin>>a;         
                wynik += a;           
           }
           tb[i]=wynik;        
    }
    for(int k=0;k<t;++k)
           cout<<tb[k]<<"\n";
 
cin.ignore();
cin.get();
return 0;
} 
