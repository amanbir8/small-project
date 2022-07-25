#include <iostream>
using namespace std;

int main() 
{
    int ordercode, quantity;
    char yesno;
    string order,icon;
    int money=0,pay,change;
    icon [1] = 16;

do 
{
cout << "\n\n	Welcome to Vending Machine " ;
cout << "                \n\n\n                   MENU ";
cout << "\n\n          1. Water   -  RS 20  \n          2. Sprite  - RS 35 ";
cout << "\n          3. Coke    -  RS 30  \n          4. Royal   - RS 35 ";
cout << "\n          5. milk    -  RS 40  ";

	cout << "\n\n"<<icon[1]<<" Insert your Money     : RS ";
	cin  >> pay; 

	cout << "\n"<<icon[1]<< " Choose your order(1-5): ";
	cin  >> ordercode;
	
	cout << "\n"<<icon[1]<< " Please Enter Quantity : ";
	cin  >> quantity;
		
switch(ordercode)
{
	case 1:
		order = " Water ";
		money = quantity * 20;
		break;
	case 2:
		order = " Sprite";
		money = quantity * 35;
		break;
	case 3:
		order = " Coke";
		money = quantity * 30;
		break;
	case 4:
		order = " Royal";
		money = quantity * 35 ;
		break;
	case 5:
		order = " Milk";
		money = quantity * 40 ;
		break;
		
	default: 
	cout << "Invalid Input, please try again";
	break;
}	
	
	if (pay < money )
	{
		cout << " \n  Sorry, You have not enough money to proceed this transaction. ";
		cout << "\n   We have returned your RS "<<pay;
	}
	else
	{
	cout << "\n\n Your order     : ";
	cout << quantity << " pcs - " <<order<<endl;
	
	cout << " Total amount   : RS "<<money<<endl; 
	
	change = pay - money;
	cout << " Change         : RS "<<change;
	}
	
	cout<<"\n\n"<<icon[1]<< " Do you want to order again? (y/n): ";
	cin>>yesno;	
}

while(yesno == 'Y'|| yesno == 'y');

cout <<"\n\n Thank you for your purchase, Hope you buy again";
}
