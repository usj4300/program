#include<iostream>
#include<conio.h>
using namespace std;

class conversion 
{
   public:
    // Pure virtual functions
   void virtual read()=0;  
   void virtual convert()=0;
   void virtual disp()=0;
};
class weight: public conversion
{
   float k,g; // k= kilogram , g=gram
   public:
   void read()
   {
      cout<<"\nEnter kilogram: ";
      cin>>k;
   }
   void convert()
   {
   	g=k*1000;
   }
   void disp()
   {
      cout<<"\nKilogram is: "<<k;
      cout<<"\nGram is: "<<g;
   }
};
class volume: public conversion
{
   float l,m; //l= Liter , m= mililiter
   public:
   void read()
   {
   	cout<<"\nEnter Liter: ";
      cin>>l;
   }
   void convert()
   {
   	m=l*1000;
   }
   void disp()
   {
   	cout<<"\nLiter is: "<<l;
      cout<<"\nMililiter is: "<<m;
   }
};
class currency:public conversion
{
	float r,p; //r= rupee , p= paise
   public:
	void read()
   {
      cout<<"\nEnter Rupees: ";
      cin>>r;
   }
   void convert()
   {
   	p=r*100;
   }
   void disp()
   {
   	cout<<"\nRupees is: "<<r;
      cout<<"\nPaise is: "<<p;
   }
}

void main()
{
   weight w; //object created
   volume v; //object created
   currency c; //object created
   int ch;
	do
   {
   	cout<<"\n1.Convert kilogram to gram\n2.Convert Liter to Mililiter\n3.Convert Rupees to                         Paise\n4.Exit\nEnter your choice: ";
      cin>>ch;
      switch(ch)
      {
      	case 1:
         	w.read();
                w.convert();
                w.disp();break;
         case 2:
   		 v.read();
   		 v.convert();
 	  	 v.disp();break;
         case 3:
   		 c.read();
 		 c.convert();
		 c.disp();break;
      }
   }while(ch!=4);
}
