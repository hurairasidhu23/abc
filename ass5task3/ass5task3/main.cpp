//
//  main.cpp
//  ass5task3
//
//  Created by Mac on 02/03/2022.
//

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,numerator = 0,denumi = 0;
    char dummyChar,ch,choice;
    
    do
    {
        cout<<"enter the operator:"<<endl;
        cin>>ch;
        cout<<"enter first fraction in the form of a/b :"<<endl;
        cin>>a>>dummyChar>>b;
        cout<<"enter second fraction in the form of c/d"<<endl;
        cin>>c>>dummyChar>>d;
        switch(ch)
        {
            case'+':
                numerator= (a*d)+(b*c);
                denumi=(b*d);
                break;
                
            case'-':
                numerator= (a*d)+(b*c);
                denumi= (b*d);
                break;
                
            case'*':
                numerator=(a*d)+(c*b);
                denumi= (b*d);
                break;
                
            case'/':
                numerator=(a*d)+(c*b);
                denumi=(b*d);
                break;
                
        }
        
        cout<<a<<"/"<<b<<ch<<c<<"/"<<d<<"="<<numerator<<"/"<<denumi<<endl;
        cout<<"Do you want to continue y/n"<<endl;
        cin>>choice;
        
    }
    while (choice=='N'| choice=='n');
    {
        break;
    }
    
        
    
    
    
    
    
    
    return 0;
}
