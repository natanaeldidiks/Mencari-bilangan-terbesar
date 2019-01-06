#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a,b,c;
    cout<<"========Mencari bilangan terbesar==========\n";
    cout<<"\nMasukan Bilangan Pertama : "; cin>>a;
    cout<<"\nMasukan Bilangan kedua  : "; cin>>b;
    cout<<"\nMasukan Bilangan ketiga : "; cin>>c;
        if(a>b)
        {
            cout<<"\n"<<a<<" Adalah Bilangan Terbesar ";
        }
        else if(b>c)
        {
            cout<<"\n"<<b<<" Adalah Bilangan Terbesar ";
        }
        else
        {
            cout<<"\n"<<c<<" Adalah Bilangan Terbesar ";
        }

cout<<endl;
    getch();
    return 0;
}
