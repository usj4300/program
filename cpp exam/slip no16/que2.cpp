#include<iostream>
#include<conio.h>

class que2
	{
		public:
		virtual void show()=0;
	};
	class weight
	{
		int gm,kg;
		public:
			
		void get1()
		{
			cout<<"\n Enter Gram : ";
			cin>>gm;
		}
		void show()
		{
			kg=gm/1000;
			gm=gm % 1000;
			cout<<"\n "<<kg<<" :="" kg="" &="" "<<gm<<"="" gram";
		 }
	};
	class volume:public conversion
	{
		int ltr,mltr;
		public:
		void get2()
		{
			cout<<"\n Enter Milliliter : ";
			cin>>mltr;
			ltr=mltr % 1000;
			mltr=mltr / 1000;
		}
		void show()
		{
			cout<<"\n "<<ltr<<" :="" liter="" &="" "<<mltr<<"="" milliliter";
		}
	};
	class currency:public conversion
	{
		float pse,rs;
		public:
		void get3()
		{
			cout<<"\n Enter Rupees : ";
			cin>>rs;
			pse=rs*100;
		}
		void show()
		{
			cout<<"\n Paise : "<<pse;
		}
	};
	void main()
	{
		clrscr();
		weight w;
		volume v;
		currency c;
		conversion *p;
		cout<<"\n Accept Info........";
		w.get1();
		v.get2();
		c.get3();
		cout<<"\n-----------------------------------";
		p=&w;
		p->show();
		cout<<"\n-----------------------------------";
		p=&v;
		p->show();
		cout<<"\n-----------------------------------";
		p=&c;
		p->show();
		getch();
	}

