#include<iostream>
#include<conio.h>
class district
{
public: int code;
char name[20];
int area,pop,lrate;
public:
void details()
{
cout<<"\District code\t name\tarea\tpopulation\tliteracy rate";
cin>>code >>name>>area>>pop>>lrate;
}
void details(int nm)
{
cout<<"\nDetails of ONE district :\n";
cout<<"\ncode\tname\tarea\tpop\tlrate \n";
cout<<"=====================================\n" ;
cout<<"\ncode\tname\tarea\tpop\tlrate \n";
}
void details(char*)
{
cout<<"\ncode\tname\tarea\tpop\tlrate \n";
}
};
void main()
{
int i,n,hrate;
district s[20];
clrscr();
cout<<"How many district information:"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
s[i].details();
}
hrate=s[0].lrate
for(i=0;i<n;i++)
{
if(hrate<=s[i].lrate)
{
hrate=s[i].lrate;
}
}
Cout<<"Highest literacy rate"<<endl;
Cout<<hrate;
cout<<"Details of all district: \n";
cout<<"\District code\t name\tarea\tpopulation\tliteracy rate"<<endl ;
cout<<"=====================================\n" ;
for(i=0;i<n;i++)
{
s[i].details(s[i].name);
}
getch();
}

