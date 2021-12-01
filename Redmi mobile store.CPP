// All HEADER FILES**************************

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

#include<fstream.h>
#include<iomanip.h>
#include<stdlib.h>

long pr;
int i,m;
char adress[130],user[20],add[130];
//*********************************************************************
char* tx(char toe[])
{
for(int za=0;toe[za]!='\0';++za)
{
if(toe[za]=='_')
toe[za]=' ';
}
return toe;
}

void login();
void in();
 void viewprofile();
long price()
{
return pr;
}
//**********************ALL THE MOBILE FUNCTION***************************************
void sevenS()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI NOTE 7S** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 48MP+5"<<endl;
cout.width(40);
cout<<" Front Camera -- 15MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 3Gb / 4Gb"<<endl;
cout.width(38);
cout<<" ROM -- 32Gb / 64Gb"<<endl;
cout.width(39);
cout<<" Battery -- 4100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi Note 7S having in 2 Varients:- \n \n 1. 32Gb ROM and 3Gb RAM : 9000 Rs. \n \n 2. 64Gb ROM and 4Gb RAM : 10500 Rs. \n";

cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=9000;
 }
else if(l==2)
{
y=0;
pr=10500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Press 'ENTER' to return on main menu.... \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Press 'Enter' to return on main menu....   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }

void sevenSpro()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI NOTE 7 PRO ** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 48MP+5"<<endl;
cout.width(40);
cout<<" Front Camera -- 15MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 8Gb / 4Gb"<<endl;
cout.width(38);
cout<<" ROM -- 128Gb / 64Gb"<<endl;
cout.width(39);
cout<<" Battery -- 5000 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi Note 7 PRO having in 2 Varients:- \n \n 1. 128Gb ROM and 8Gb RAM : 19000 Rs. \n \n 2. 64Gb ROM and 4Gb RAM : 16500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=19000;
 }
else if(l==2)
{
y=0;
pr=16500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Press 'ENTER' to return on main menu.... \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Press 'Enter' to return on main menu....   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }


void seven()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI NOTE 7 ** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 48MP+5"<<endl;
cout.width(40);
cout<<" Front Camera -- 15MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display with Noch)"<<endl;
cout.width(36);
cout<<" RAM -- 3Gb / 4Gb"<<endl;
cout.width(38);
cout<<" ROM -- 32Gb / 64Gb"<<endl;
cout.width(39);
cout<<" Battery -- 4100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi Note 7 having in 2 Varients:- \n \n 1. 32Gb ROM and 3Gb RAM : 12000 Rs. \n \n 2. 64Gb ROM and 4Gb RAM : 14500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=12000;
 }
else if(l==2)
{
y=0;
pr=14500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Press 'ENTER' to return on main menu.... \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n \t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Press 'Enter' to return on main menu....   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }



void poco()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF POCO F1 ** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 48MP+5"<<endl;
cout.width(40);
cout<<" Front Camera -- 21MP"<<endl;
cout.width(50);
cout<<" Display -- 6.3inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 6Gb / 8Gb"<<endl;
cout.width(38);
cout<<" ROM -- 128Gb / 256Gb"<<endl;
cout.width(39);
cout<<" Battery -- 5100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<" POCO F1 having in 2 Varients:- \n \n 1. 128Gb ROM and 6Gb RAM : 20000 Rs. \n \n 2. 256Gb ROM and 8Gb RAM : 25500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";

int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=20000;
 }
else if(l==2)
{
y=0;
pr=25500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Press 'ENTER' to return on main menu.... \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Press 'Enter' to return on main menu....   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }
void Nseven()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI 7 ** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 18MP+5"<<endl;
cout.width(40);
cout<<" Front Camera -- 13MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 3Gb / 4Gb"<<endl;
cout.width(38);
cout<<" ROM -- 32Gb / 64Gb"<<endl;
cout.width(39);
cout<<" Battery -- 4100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi 7 having in 2 Varients:- \n \n 1. 32Gb ROM and 3Gb RAM : 9000 Rs. \n \n 2. 64Gb ROM and 4Gb RAM : 10500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
cin>>t;
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=9000;
 }
else if(l==2)
{
y=0;
pr=10500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Press 'ENTER' to return on main menu.... \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Press 'Enter' to return on main menu....   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);


}
  void Sixpro()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI NOTE 6PRO ** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 15+5"<<endl;
cout.width(40);
cout<<" Front Camera -- 15MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 3Gb / 4Gb"<<endl;
cout.width(38);
cout<<" ROM -- 32Gb / 64Gb"<<endl;
cout.width(39);
cout<<" Battery -- 4100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi Note 6 PRO having in 2 Varients:- \n \n 1. 32Gb ROM and 3Gb RAM : 10000 Rs. \n \n 2. 64Gb ROM and 4Gb RAM : 12500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=11000;
 }
else if(l==2)
{
y=0;
pr=13500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Press 'ENTER' to return on main menu.... \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Press 'Enter' to return on main menu....   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }
      void six()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI 6 ** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 13MP+3"<<endl;
cout.width(40);
cout<<" Front Camera -- 8MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 3Gb / 4Gb"<<endl;
cout.width(38);
cout<<" ROM -- 32Gb / 64Gb"<<endl;
cout.width(39);
cout<<" Battery -- 4100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi 6 having in 2 Varients:- \n \n 1. 32Gb ROM and 3Gb RAM : 9000 Rs. \n \n 2. 64Gb ROM and 4Gb RAM : 10500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=9000;
 }
else if(l==2)
{
y=0;
pr=10500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Press 'ENTER' to return on main menu.... \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Press 'Enter' to return on main menu....   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }
	     void sixa()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI 6A ** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 13MP"<<endl;
cout.width(40);
cout<<" Front Camera -- 8MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 2Gb / 3Gb"<<endl;
cout.width(38);
cout<<" ROM -- 16Gb / 32Gb"<<endl;
cout.width(39);
cout<<" Battery -- 4100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi 6A having in 2 Varients:- \n \n 1. 16Gb ROM and 2Gb RAM : 6000 Rs. \n \n 2. 32Gb ROM and 3Gb RAM : 7500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
      int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=6000;
 }
else if(l==2)
{
y=0;
pr=7500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Press 'ENTER' to return on main menu.... \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Press 'Enter' to return on main menu....   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }

      void fivepro()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI NOTE 5PRO ** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 15MP+5"<<endl;
cout.width(40);
cout<<" Front Camera -- 15MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 3Gb / 4Gb"<<endl;
cout.width(38);
cout<<" ROM -- 32Gb / 64Gb"<<endl;
cout.width(39);
cout<<" Battery -- 4100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi Note 5 PRO having in 2 Varients:- \n \n 1. 32Gb ROM and 3Gb RAM : 12000 Rs. \n \n 2. 64Gb ROM and 4Gb RAM : 14500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=12000;
 }
else if(l==2)
{
y=0;
pr=14500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Press 'ENTER' to return on main menu.... \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Please Press 'ENTER' And Login Again as a Confirmation  \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }


	    void five()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI NOTE 5** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 13MP+5"<<endl;
cout.width(40);
cout<<" Front Camera -- 8MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 3Gb / 4Gb"<<endl;
cout.width(38);
cout<<" ROM -- 32Gb / 64Gb"<<endl;
cout.width(39);
cout<<" Battery -- 4100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi Note 5 having in 2 Varients:- \n \n 1. 32Gb ROM and 3Gb RAM : 9000 Rs. \n \n 2. 64Gb ROM and 4Gb RAM : 10500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=9000;
 }
else if(l==2)
{
y=0;
pr=10500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Please Press 'ENTER' And Login Again as a Confirmation \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !! Please Press 'ENTER' And Login Again as a Confirmation   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }


	       void fivea()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI 5A ** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 13MP"<<endl;
cout.width(40);
cout<<" Front Camera -- 5MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 2Gb / 3Gb"<<endl;
cout.width(38);
cout<<" ROM -- 16Gb / 32Gb"<<endl;
cout.width(39);
cout<<" Battery -- 4100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi 5A having in 2 Varients:- \n \n 1. 16Gb ROM and 2Gb RAM : 5000 Rs. \n \n 2. 32Gb ROM and 3Gb RAM : 6500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=5000;
 }
else if(l==2)
{
y=0;
pr=6500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Please Press 'ENTER' And Login Again as a Confirmation \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !! Please Press 'ENTER' And Login Again as a Confirmation \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }


	     void Y3()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI Y3** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 18MP+5"<<endl;
cout.width(40);
cout<<" Front Camera -- 15MP"<<endl;
cout.width(50);
cout<<" Display -- 6inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 3Gb / 4Gb"<<endl;
cout.width(38);
cout<<" ROM -- 32Gb / 64Gb"<<endl;
cout.width(39);
cout<<" Battery -- 3100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi Y3 having in 2 Varients:- \n \n 1. 32Gb ROM and 3Gb RAM : 10000 Rs. \n \n 2. 64Gb ROM and 4Gb RAM : 12500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=10000;
 }
else if(l==2)
{
y=0;
pr=12500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;

cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !! Please Press 'ENTER' And Login Again as a Confirmation \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !!Please Press 'ENTER' And Login Again as a Confirmation   \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }


	   void Go()
{
int t;
clrscr();
cout<<endl;
cout.width(50) ;
cout<<"**TOP FEATURES OF REDMI GO** \n "<<endl;
cout<<"************************************************************************"<<endl;
cout.width(41);
cout<<" Rear Camera -- 8MP+3"<<endl;
cout.width(40);
cout<<" Front Camera -- 5MP"<<endl;
cout.width(50);
cout<<" Display -- 5inch(Full Display)"<<endl;
cout.width(36);
cout<<" RAM -- 1Gb / 2Gb"<<endl;
cout.width(38);
cout<<" ROM -- 8Gb / 16Gb"<<endl;
cout.width(39);
cout<<" Battery -- 3100 Mah"<<endl;
cout.width(40);
cout<<"*************************************************************************"<<endl;
gotoxy(35,-2);
cout<<"Redmi GO having in 2 Varients:- \n \n 1. 8Gb ROM and 1Gb RAM : 3500 Rs. \n \n 2. 16Gb ROM and 2Gb RAM : 4500 Rs. \n";
cout<<" \n Enter your Choice To Buy:- ";
int y=0;
do{
int l;
cin>>l;
if (l==1)
{
y=0;
pr=3500;
 }
else if(l==2)
{
y=0;
pr=4500;
}
else
{
cout<<"\t Invalid Option \n \t *Enter valid option= ";
y=1;
}
}while(y==1);
t=price();
cout.width(30);
cout<<"Your total Price=" <<t<<endl;
cout<< " 1. Confirm Your Order \n 2. Cancel Your Order \n";
cout<<"**Enter Your Choice= ";
do
{
cin>>m;
if(m==1)
{
clrscr();
y=0;
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Shipped Successful*** \n Thankyou for visiting MI Store \n !!Please Press 'ENTER' And Login Again as a Confirmation \n";
cin.get();
cin.get();
login();
}
else if(m==2)
   {
clrscr();
cout<<"HELLO, "<<user<<endl;
cout<<"\n\t ***Your Order Cancelled Successful*** \n Thankyou for visiting MI Store \n !! Please Press 'ENTER' And Login Again as a Confirmation  \n";
y=0;
cin.get();
cin.get();
login();
   }
   else
   {
   cout<<" \n \t **Invalid Entered option** \n \t **Enter valid option= ";
   y=1;
	}
	}while(y==1);
	      }




	      void display()
{
cout<<"What you want to buy?? \n"<<endl;
cout<<"Latest:- \n        1.Redmi Note 7S \t 13.Redmi Go \t 12.Redmi Y3 "<<endl;
cout<<"********************************************************************* \n"<<endl;
cout<<"** All List of all Smartphones:-  ** \n"<<endl;
cout<<"0. CHECK PROFILE"<<endl;
cout<<"1.Redmi Note 7S"<<endl;
cout<<"2.Redmi Note 7Pro"<<endl;
cout<<"3.Redmi Note 7"<<endl;
cout<<"4.POCO F1"<<endl;
cout<<"5.Redmi 7"<<endl;
cout<<"6.Redmi Note 6 pro"<<endl;
cout<<"7.Redmi 6"<<endl;
cout<<"8.Redmi 6A"<<endl;
cout<<"9.Redmi note 5 pro"<<endl;
cout<<"10.Redmi note 5"<<endl;
cout<<"11.Redmi 5A"<<endl;
cout<<"12.Redmi Y3"<<endl;
cout<<"13.Redmi Go"<<endl<<" \n ";
cout<<"14.EXIT \n";
cout<<"Enter a no. which mobile you want to buy:- ";
int u=0;
do{
cin>>i;
if(i==0)
viewprofile();
else if(i==1)
sevenS();
else if(i==2)
sevenSpro();
else if(i==3)
seven();
else if(i==4)
poco();
else if(i==5)
Nseven();
else if(i==6)
Sixpro();
else if(i==7)
six();
else if(i==8)
sixa();
else if(i==9)
fivepro();
else if(i==10)
five();
else if(i==11)
fivea();
else if(i==12)
Y3();
else if(i==13)
Go();
else if(i==14)
{  system("cls");
in();
}
else
{
u=1;
cout<<"\t **Invalid Options** \n Enter Valid Option= ";
}
}while(u==1);
}

	    void modify()
	    { clrscr();
	    char ads[130];
	    cout.width(50);
	    cout<<"********************************************************************************\n\n";
	    cout.width(50);
	    cout<<"               EDIT YOUR PROFILE DETAIL"<<endl<<endl;
	    cout.width(50);
	    cout<<"********************************************************************************\n\n";
	    cout<<"Username --"<<user<<endl;
	    cout<<"\n\n Address --"<<tx(add)<<endl<<endl<<endl<<endl;
	    cout<<"Enter your New ADDRESS(Enter * to retain) (And use '_' instead of space :="<<" \n Address:= ";
	    gets(ads);
	    if(strcmp(ads,"*")==0)
	   {
	   cout<<"Your address Retain Successfully!!!";
	  viewprofile();
	   }
	   else
	   {
	   ifstream ia;
	   ofstream ka;
	    ia.open("database.txt");
	    ka.open("temp.txt");
	    char u[20],p[20],a[130];


	    while(ia>>u>>p>>a)
	    {
	    if(strcmp(u,user)==0)
	    ka<<u<<' '<<p<<' '<<ads<<endl;
	    else
	    ka<<u<<' '<<p<<' '<<a<<endl;
	    }
	    remove ("database.txt");


	    ia.close();
	    ka.close();

	     ifstream iaa;
	   ofstream kaa;
	    iaa.open("temp.txt");
	    kaa.open("database.txt");

	    char ua[20],pa[20],aa[130];

	    while(iaa>>ua>>pa>>aa)
	    {
		    kaa<<ua<<' '<<pa<<' '<<aa<<endl;
	    }
	    remove ("temp.txt");


	    iaa.close();
	    kaa.close();
		   clrscr();
	    cout<<"\n\n YOUR ADDRESSED CHANGED SUSCESSFULLY!!! \n\n";
	    cout<<"\n\n Confirm Your Login Information For verification!!! \n\n";
	   cout<<"\n\n Press 'Enter'";
	   cin.get();
	   cin.get();
	   login();

	    }

	    }

//*********************************************************************************************************
// LOGIN SYSTEM
//****************************************************************************
	       void in();

		 void viewprofile()
		 {
		 clrscr();
		 int ve;
		 cout.width(50);
		  cout<<" ***************************************************************************"<<endl<<endl;
		  cout.width(50);
		  cout<<"              Your Profile"<<endl<<endl;
		  cout.width(50);
		  cout<<"*****************************************************************************";
		  cout.width(36);
		  cout<<" Username --  "<<user<<endl;
		  cout.width(32);
		  cout<<" Address --  "<<tx(add)<<endl<<endl;
		  cout<<" 1. Change Address"<<endl;
		  cout<<" 2. BACK"<<endl;
		  cout<<"Enter your choice= ";
		  cin>>ve;
		  if(ve==1)
		  modify();
		  else if(ve==2)
	   display();










		  }




void login()
{
	int count=0;

	char pass[20]; char u[20];
	char p[20],ad[130];
	system("cls");
	cout<<"please enter the following Login details (without space)"<<endl;
	cout<<"USERNAME :";
	gets(user);
	cout<<"PASSWORD :";
	gets(pass);

	ifstream input;
	input.open("database.txt");
	if(!input)
	{
	system("cls");
		cout<<"\nLOGIN ERROR\n***Please check your username and password***\n\n";
		in();
	}
	else
	{
	while(!input.eof())
	{
	input>>u>>p>>ad;



		if(strcmp(u,user)==0 && strcmp(p,pass)==0)

		{
		strcpy(add,ad);
			count=1;
			system("cls");
		}
	}
	input.close();
	if(count==1)
	{
		cout<<"\n Hello "<<user<<"\n LOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n \n";



	cout<<"press any key to continue.......";
	cin.get();
	cin.get();

	system("cls");
	cout.width(40);

	//after loginlong t=0;
system("cls");
gotoxy(14,2);
display();

}
	else
	{       system("cls");
		cout<<"\nLOGIN ERROR\n***Please check your username and password***\n\n";
		in();
	}
}
}
void registr()
{
				       int count=0;
	char reguser[100],regpass[100],ru[100],rp[100];
	clrscr();

	cout<<"Enter following Details for Registration (Without Space):- \n\n";
	cout<<"Enter the username (Without space):";
	gets(reguser);


ifstream reg;
			reg.open("database.txt");
			if(reg)
			{
			while(reg>>ru>>rp)
					     {
				if(strcmp(ru,reguser)==0)
				{

					count=1;
					break;
				}
			}
			reg.close();

			if(count==1)
			{        system("cls");
				gotoxy(35,10);
				cout<<"\n\n **!!Please Registered with another username!!** \n \n";
				cout<<"\n Press Enter to Return Back.....";
				cin.get();
				cin.get();
				system("cls");
				in();
			}
				else if(count!=1)
		{
			cout<<"\nEnter the password (Without space):";
       gets(regpass);
       cout<<"Enter Your Address also as a Shipping Address(use '_' instead of Space):="<<" \n Address:= ";
       gets(adress);
	  ofstream reg;
	reg.open("database.txt",ios::app);
	reg<<reguser<<' '<<regpass<<' '<<adress<<endl;
	system("cls");
	cout<<"\n**Registration Sucessful**\n";
	reg.close();

	in();
}
			}
			   else
			   {
				cout<<"\nEnter the password :";
       gets(regpass);
	  ofstream reg;
	reg.open("database.txt",ios::app);
	   cout<<"Enter Your Address also as a Shipping Address(Use '_' instead of Space):=" <<" \n Address:= ";
       gets(adress);
	reg<<reguser<<' '<<regpass<<' '<<adress<<endl;
	system("cls");
	cout<<"\n**Registration Sucessful**\n";
	reg.close();
	in();
			   }


					      }
      void forgot()
{
	int ch;
	system("cls");
	cout<<"Forgotten ? We're here for help\n";
	cout<<"1.Search your id by username"<<endl;
	cout<<"2.Search your id by password"<<endl;
	cout<<"3.Main menu... \n";
	cout<<"Enter your choice :";
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			int count=0;
			char searchuser[20],su[20],sp[20];
			cout<<"\nEnter your remembered username :";
			gets(searchuser);

			ifstream searchu;
			searchu.open("database.txt");
			while(searchu>>su>>sp)
					     {
				if(strcmp(su,searchuser)==0)
				{

					count=1;
					break;
				}
			}
			searchu.close();
			if(count==1)
			{
				cout<<"\n\nHurray, account found\n";
				cout<<"\nYour password is "<<sp;
				cout<<"\n Press ENTER to Return Back..." ;
				cin.get();
				cin.get();
				system("cls");
				in();
			}
			else
			{
				cout<<"\nSorry, Your userID is not found in our database\n";
				cout<<"\nPlease kindly contact your system administrator for more details \n";
				cout<<"\n Press Enter to Return Back...";
				cin.get();
				cin.get();
			       system("cls");
			      in();
			}
			break;
		}
		case 2:
		{
			int count=0;
			char searchpass[20],su2[20],sp2[20];
			cout<<"\nEnter the remembered password :";
			gets(searchpass);

			ifstream searchp;
			searchp.open("database.txt");
			while(searchp>>su2>>sp2)
			{
				if(strcmp(sp2,searchpass)==0)
				{
					count=1;
					break;
				}
			}
			searchp.close();
			if(count==1)
			{
				cout<<"\nYour password is found in the database \n";
				cout<<"\nYour Id is : "<<su2;
				cout<<"\n Press ENTER to return Back...";
				cin.get();
				cin.get();
				system("cls");
				in();
			}
			else
			{
				cout<<"Sorry, We cannot found your password in our database \n";
				cout<<"\nkindly contact your administrator for more information\n";
				cout<<"\n Press ENTER to Return Back....";
				cin.get();
				cin.get();
				system("cls");
				in();
			}

			break;
		}

		case 3:
		{

			in();
		}
		default:
			cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
			forgot();
	}
}
	void in()
	{
	int choice;
	cout<<"***********************************************************************\n\n\n";
	cout<<"                      Welcome to MI Mobile Store                               \n\n";
	cout<<"*******************        MENU        *******************************\n\n";
	cout<<"1.LOGIN"<<endl;
	cout<<"2.REGISTER"<<endl;
	cout<<"3.FORGOT PASSWORD (or) USERNAME"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"\nEnter your choice :";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 1:
			login();
			break;
		case 2:
			registr();
			break;
		case 3:
			forgot();
			break;
		case 4:
			{ system("cls");
			gotoxy(30,10);
			cout<<"Thanks for using this program\nThis program is created by\n\n > Shashank Patel \n\n **Press Enter Key to Exit**";
		       cin.get();
		       cin.get();
		       exit(0);
		       break;
			}
		default:
			system("cls");
			cout<<"You've made a mistake , give it a try again\n"<<endl;
			in();
	}

}



































//****************************************************************************
void main()
{
clrscr();
in();
getch();
}
