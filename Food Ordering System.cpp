#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Food
{
	private :
		string name;
		string pizza1,pizza2,pizza3,pizza4 ;
		string roll1,roll2,roll3;
		string bur1,bur2,bur3;
		string sand1,sand2,sand3;
		string bir1,bir2,bir3;
		int choice,pchoice,pchoice1,quantity;	
		string thing;
		public:
		Food()
		{
			pizza1="Chicken Fazita";
			pizza2="Chicken Bar BQ";
			pizza3="Peri Peri";
			pizza4="Creamy Max";
			roll1="Chicken Chatni Roll";
			roll2="Chicken Mayo Roll";
			roll3="Veg Roll With Fries";
			bur1="Zinger Burger";
			bur2="Chicken Burger";
			bur3="Beef Burger";
			sand1="Club Sandwich";
			sand2="Chicken Crispy Sandwich";
			sand3="Extream Veg Sandwich";
			bir1="Chicken Biryani";
			bir2="Prawn Biryani";
			bir3="Beef Biryani";
		}
		void setName(string n)
		{
			name=n;
		}
		void menu();		
		void pizzas();
		void burgers();
		void sandwitch();
		void rolls();
		void biryani();
		int getQuantity()
		{
			return quantity;
		}
		string getName()
		{
			return name;		
		}
		string getThing()
		{
			return thing;
		}
		friend void operator<<(ostream  &out,Food obj);
		friend void operator>>(istream  &in,Food obj);
};
void operator<<(ostream  &out,Food obj)
{
	ofstream fout;	
	fout.open("Food.txt",ios::app);
		if(!fout)
		{
			cout<<"Sorry!!!!\nFile cannot open "<<endl;
			cout<<"try again";
		}
		else
		{
			fout<<obj.getName()<<",";
			fout<<obj.getQuantity()<<",";
		}
	fout.close();
}
void Food::menu()
{	
	do
	{
		cout<<"\t\t\t\t--------Menu--------\n\n";		
		cout<<"1) Pizzas\n";
		cout<<"2) Burgers\n";
		cout<<"3) Sandwich\n";
		cout<<"4) Rolls\n";
		cout<<"5) Biryani\n\n";
		cout<<"\nPlease Enter your Choice: ";
		cin>>choice;
		if(choice <1 || choice > 5 )
		{
			cout<<"Invalid choice "<<endl;
			cout<<"Try again";
		}
	}while(choice <1 || choice > 5 );	
	switch(choice)
	{
		case 1:
			pizzas();
			break;
		case 2:
			burgers();
			break;
		case 3:
			sandwitch();
			break;
		case 4:
			rolls();
			break;
		case 5:
			biryani();				
			break;
	}
}
void Food::pizzas()
{
	cout<<"\n1) "<<pizza1<<"\n";
	cout<<"2) "<<pizza2<<"\n";
	cout<<"3) "<<pizza3<<"\n";
	cout<<"4) "<<pizza4<<"\n";
	cout<<"\nPlease Enter which Flavour would you like to have?:";
	cin>>pchoice;	
	if(pchoice>=1 && pchoice<=5)
	{
		cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
		cout<<"\nChoose Size Please:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
				case 1:
					choice = 250*quantity;
					break;
				case 2:
					choice = 500*quantity;
					break;
				case 3:
					choice = 900*quantity;
					break;
			}
			system("CLS");
			switch (pchoice1)
			{
				case 1:
			 		cout<<"\t\t\t--------Your Order---------\n";
				 	cout<<""<<quantity<<" "<<pizza1;
					cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
					cout<<"\n\nThank you For Ordering From 007 Fast Food\n";
					break;
				case 2:
					cout<<"\t\t--------Your Order---------\n";
			 		cout<<""<<quantity<<"  "<<pizza2;
			 		cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 		cout<<"\nThank you For Ordering From 007 Fast Food\n";
					break;
			 	case 3:
			 		cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<pizza3;
			 		cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 		cout<<"\nThank you For Ordering From 007 Fast Food\n";
					break;			 	
				case 4:
			 		cout<<"\t\t--------Your Order---------\n";
			 		cout<<""<<quantity<<" "<<pizza4;
			 		cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
					cout<<"\nThank you For Ordering From 007 Fast Food\n";
					break;
			}
		}
	}
}
void Food::burgers() 
{
	cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
		cout<<"2 "<<bur2<<" Rs.150"<<"\n";
		cout<<"3 "<<bur3<<" Rs.160"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 180*quantity;
			break;
			case 2: choice = 150*quantity;
			break;
			case 3: choice = 160*quantity;
			break;
			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 007 Fast Food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bur2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 007 Pizza\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 007 Fast Food\n";
			 break;
			}	
}
}
void Food::biryani()
{
	cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
	cout<<"2 "<<bir2<<" Rs.220"<<"\n";
	cout<<"3 "<<bir3<<" Rs.140"<<"\n";
	cout<<"\nPlease Enter which Biryani you would like to have?:";
	cin>>pchoice1;
	if(pchoice1>=1 && pchoice1<=3)
	{
		cout<<"\nPlease Enter Quantity: ";
		cin>>quantity;
		switch(pchoice1)
		{
			case 1:
				choice = 160*quantity;
				break;
			case 2:
				choice = 220*quantity;
				break;
			case 3:
				choice = 140*quantity;
				break;
		}
		system("CLS");
		switch (pchoice1)
		{
			case 1:
			 	cout<<"\t\t--------Your Order---------\n";
				cout<<""<<quantity<<" "<<bir1;
				cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				cout<<"\nThank you For Ordering From 007 Fast Food \n";
				break;
			case 2:
				cout<<"\t\t--------Your Order---------\n";
				cout<<""<<quantity<<"  "<<bir2;
				cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				cout<<"\nThank you For Ordering From 007 Fast Food\n";
				break;
			case 3:
				cout<<"\t\t--------Your Order---------\n";
				cout<<""<<quantity<<" "<<bir3;
				cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				cout<<"\nThank you For Ordering From 007 Fast Food\n";
				break;
		}
	}
}
void Food::rolls()
{
	cout<<"\n1 "<<roll1<<" Rs.150"<<"\n";
	cout<<"2 "<<roll2<<" Rs.100"<<"\n";
	cout<<"3 "<<roll3<<" Rs.120"<<"\n";
	cout<<"\nPlease Enter which you would like to have?: ";
	cin>>pchoice1;
	if(pchoice1>=1 && pchoice1<=3)
	{
		cout<<"\nHow Much Rolls Do you want: ";
		cin>>quantity;	
		switch(pchoice1)
		{
			case 1:
				choice = 150*quantity;
				break;
			case 2:
				choice = 100*quantity;
				break;
			case 3:
				choice = 120*quantity;
				break;
		}
		system("CLS");
		switch (pchoice1)
		{
			case 1:
				cout<<"\t\t--------Your Order---------\n";
				cout<<""<<quantity<<" "<<roll1;
				cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				cout<<"\nThank you For Ordering From 007 Fast Food\n";
				break;
			case 2:
				cout<<"\t\t--------Your Order---------\n";
				cout<<""<<quantity<<"  "<<roll2;
				cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				cout<<"\nThank you For Ordering From 007 Fast Food\n";
				break;
			case 3:
				cout<<"\t\t--------Your Order---------\n";
				cout<<""<<quantity<<" "<<roll3;
				cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				cout<<"\nThank you For Ordering From 007 Fast Food\n";
				break;
		}
	}
}
void Food::sandwitch()
{
	cout<<"\n1  "<<sand1<<" Rs.240"<<"\n";
	cout<<"2  "<<sand2<<" Rs.160"<<"\n";
	cout<<"3  "<<sand3<<" Rs.100"<<"\n";
	cout<<"\nPlease Enter which Sandwich you would like to have?:";
	cin>>pchoice1;	
	if(pchoice1>=1 && pchoice1<=3)
	{
		cout<<"\nPlease Enter Quantity: ";
		cin>>quantity;
		switch(pchoice1)
		{
			case 1: choice = 240*quantity;
			break;
			case 2: choice = 160*quantity;
			break;
			case 3: choice = 100*quantity;
			break;
		}
		system("CLS");
		switch (pchoice1)
		{
			case 1:
			cout<<"\t\t--------Your Order---------\n";
			cout<<""<<quantity<<" "<<sand1;
			cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			cout<<"\nThank you For Ordering From 007 Fast Food\n";
			break;
			case 2:
			cout<<"\t\t--------Your Order---------\n";
			cout<<""<<quantity<<"  "<<sand2;
			cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			cout<<"\nThank you For Ordering From 007 Fast Food\n";	
			break;
			case 3:
			cout<<"\t\t--------Your Order---------\n";
			cout<<""<<quantity<<" "<<sand2;
			cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			cout<<"\nThank you For Ordering From 007 Fast Food\n";
			break;
		}		
	}
}
int main()
{
	string name;
	char gotostart;
	ofstream fout;
	Food f1; 	
		again :
		cout<<"\t\t\t----------Wrlcome to 007 Fast Food-----------\n\n";
		cout<<"Please Enter Your Name: ";
		getline(cin,name);
		cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";
		f1.setName(name);
		f1.menu(); 
		cout<<f1;	
		cout<<"Would You like to Start the program again? Y / N: " ;
		cin>>gotostart;
		if(gotostart=='Y' || gotostart=='y')
		{
			cin.ignore();
			goto again;
		}		
	return 0;
}

