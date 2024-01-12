#include<bits/stdc++.h>
#include<windows.h>
#include<fstream>
#include<iostream>
using namespace std;
bool  Empty=true;
//arrays
string costomerName;
int noofdays;
string *name;
int n;
string email;
char adhar[12];
string phone;
string dob;
string  age;
string temp;
int bottldrunkedbycustomer=0;
int billofcustomer=0;
int roomno;

int pepsi=0;
int fanta=0;
int sprite=0;
int fruty=0;
int lassi=0;
int beer=0;
int thumsup=0;
ofstream drinks;

class bill
{
	public:
	int a,b,c;
	void bills(){
		cout<<"Bill section\n";
		cout<<"Enter custumers NAME id\n";
		string id;
		cin>>id;
		ifstream customerdetail;
		customerdetail.open("cust_detail.txt");
		customerdetail>>costomerName;
		if(id==costomerName){
			cout<<"Custumer Found\n";
	
		}
		else
		cout<<"Custumer does not found";
	}
	

};
void drink()
{
	int c;

	cout<<"Choose the following options\n";
	cout<<"1.Update the data of Drinks\n";
	cout<<"2.See the remaining stock\n";
	cin>>c;
	if(c==1)
	{
		drinks.open("drink.txt");
		cout<<"Enter the data in digits\n";
		cout<<"pepsi: ";
        cin>>pepsi;
		drinks<<pepsi<<endl;
		cout<<"Fanta: ";
		cin>>fanta;
		drinks<<fanta<<endl;
		cout<<"Sprite: ";
		cin>>sprite;
		drinks<<sprite<<endl;
		cout<<"Fruti: ";
		cin>>fruty;
		drinks<<fruty<<endl;
		cout<<"Lassi: ";
		cin>>lassi;
		drinks<<lassi<<endl;
		cout<<"Beer: ";
		cin>>beer;
		drinks<<beer<<endl;
		cout<<"Thums up: ";
		cin>>thumsup;
		drinks<<thumsup<<endl;
	}
	drinks.close();
	if(c==2){
		ifstream drinks;
		drinks.open("drink.txt");
		cout<<"COLD DRINKS remaining in stock are: \n";
		cout<<"pepsi: ";
		drinks>>pepsi;
		cout<<pepsi<<endl;
		cout<<"Fanta: ";
		drinks>>fanta;
		cout<<fanta<<endl;
		cout<<"Sprite: ";
		drinks>>sprite;
		cout<<sprite<<endl;
		cout<<"Fruti: ";
		drinks>>fruty;
		cout<<fruty<<endl;
		cout<<"Lassi: ";
		drinks>>lassi;
		cout<<"Beer: ";
		drinks>>beer;
		cout<<beer<<endl;
		cout<<"Thums up: ";
		drinks>>thumsup;
		cout<<thumsup<<endl;
	}
	drinks.close();
}
ofstream customerdetail;
ofstream floor1;
ofstream floor2;
ofstream floor3;
ofstream roomrent;
ofstream drinktype;
ofstream hotdrink;
void floor_1();
void floor_2();
void floor_3();



void emptyroomInfo()
{
	cout<<"Current room Status\n";
	cout<<"Total Floors in a hotel:3\n";
	cout<<"Total rooms are:10 on each floor\n";
	// cout<<"Rooms Occupied on first floor are :";
	int choice;
	cout<<"Choose the options to view information about each floor\n";
	cout<<"\t\n1.first floor\t\n2.Second floor\t\n3.Third floor";
	cin>>choice;
	switch(choice){
		case 1:
		floor_1();
		break;
		case 2:
		floor_2();
		break;
		case 3:
		floor_3();
		break;
		case 4:
		cout<<"Invalid choice\n";
	}
	
}	

void  floor_1()
  
	{
		ifstream floor1;
		floor1.open("floor1.txt");
		cout<<"Rooms Booked on floor 1 are : "<<endl;
		while(!floor1.eof())
		{
			// cin.ignore();
			floor1>>roomno;
			cout<<roomno<<endl;
		}
		floor1.close();
		cout<<endl;
	}
	void  floor_2()
	{
		ifstream floor2;
		floor2.open("floor2.txt");
		cout<<"Rooms Booked on floor 2 are : "<<endl;
		while(!floor2.eof())
		{
			// cin.ignore();
			floor2>>roomno;
			cout<<roomno<<endl;
		}
		floor2.close();
		cout<<endl;
	}
	void  floor_3()
	{
		ifstream floor3;
		floor3.open("floor3.txt");
		cout<<"Rooms Booked on floor 3 are : "<<endl;
		while(!floor3.eof())
		{
			// cin.ignore();
			floor3>>roomno;
			cout<<roomno<<endl;
		}
		floor3.close();
		cout<<endl;
	}

class order
{
	public:
	int cost;
	void drinks()
	{
		int type;
		cout<<"Place a order for drink\n";
		cout<<"Choose the type of DRINK!!!";
		cout<<"\t\n1. \nCOLD 2.HOT";
		cout<<endl;
      
		cin>>type;
		switch(type)
		{
			case 1:
			cold();
			break;
			case 2:
			hot();
			break;
			case 3:
			cout<<"Invalid choice!!!\n";
		}
	}
	 void cold()
	{
		ka:
		cout<<"Choose a drink\n";
		cout<<"1.FRESH GINGER TEA\n ";
		cout<<"2.FRUIT TEA\n ";
		cout<<"3.FRESH MINT TEA\n ";
		cout<<"4.HOT CHOCOLATE\n";
		cout<<"5.COFFE\n";
		cout<<"6.HOT LEMON\n";
		cout<<"7.GREEN TEA\n";
		cout<<"8.CHAI\n";
		system("cls");
		int typ;
		cin>>typ;
		if(typ==1)
		{
			drinktype.open("drinktype.txt",ios::app);
			cout<<"Ginger tea selected\n";
			drinktype<<"Ginger tea"<<endl;
			cout<<endl;
			drinktype.close();
		}
		else if(typ==2){
			drinktype.open("drinktype.txt",ios::app);
			cout<<"Fruit tea selected\n";
			drinktype<<"Fruit tea"<<endl;
			cout<<endl;
			drinktype.close();
		}
		else if(typ==3){
			drinktype.open("drinktype.txt",ios::app);
			cout<<"Fresh mint tea selected\n";
			drinktype<<"Fresh mint tea"<<endl;
			drinktype.close();
		}
		else if(typ==4){
			drinktype.open("drinktype.txt",ios::app);
			cout<<"Hot chocolate selected\n";
			drinktype<<"Hot chocolate"<<endl;
			drinktype.close();
		}
		else if(typ==5){
			drinktype.open("drinktype.txt",ios::app);
			cout<<"Coffe selected\n";
			drinktype<<"Coffe"<<endl;
			drinktype.close();
		}
		else if(typ==6){
			drinktype.open("drinktype.txt",ios::app);
			cout<<"Hot lemon Selected\n";
			drinktype<<"Hot Lemon"<<endl;
			drinktype.close();
		}
		else if(typ==7){
			drinktype.open("drinktype.txt",ios::app);
			cout<<"Green tea selected\n";
			drinktype<<"Green Tea"<<endl;
			drinktype.close();
		}
		else if(typ==8){
			drinktype.open("drinktype.txt",ios::app);
			cout<<"Chai Selected\n";
			drinktype<<"Chai"<<endl;
			drinktype.close();
		}
		else if(typ<1 && typ>8){
			cout<<"Invalid Choice!!!\n";
			cout<<"Choose proper drinkn\n";
			goto ka;
		}

	}

	void  hot()
	{
		la:
		cout<<"choose form the following menu\n";
		cout<<"1.honey citrus mint tea\n";
		cout<<"2.Streamed apple juice\n";
		cout<<"3.Flat white\n";
		cout<<"4.Cinnamon Dolce latte\n";
		cout<<"5.Peppermint Mocha\n";
		cout<<"6.Matcha tea latte\n";
		cout<<"7.Caffe Americano\n";
		cout<<"8.Pumpkin Spice Latte\n";
		int typ;
		cin>>typ;
		hotdrink.open("hotdrink.txt",ios::app);
		if(typ==1)

		{
			cout<<"honey citrus mint tea SELECTED\n";
			hotdrink<<"honey citrus mint tea"<<endl;
			hotdrink.close();
		}
		else if(typ==2)

		{
			cout<<"Streamed apple juice SELECTED\n";
			hotdrink<<"Streamed apple juice"<<endl;
			hotdrink.close();
		}
		else if(typ==3)

		{
			cout<<"Flat white SELECTED\n";
			hotdrink<<"Flat white"<<endl;
			hotdrink.close();
		}
		else if(typ==4)

		{
			cout<<"Cinnamon Dolce latte SELECTED\n";
			hotdrink<<"Cinnamon Dolce latte"<<endl;
			hotdrink.close();
		}
		else if(typ==5)

		{
			cout<<"Peppermint Mocha SELECTED\n";
			hotdrink<<"Peppermint Mocha"<<endl;
			hotdrink.close();
		}
		else if(typ==6)

		{
			cout<<"Matcha tea latte SELECTED\n";
			hotdrink<<"Matcha tea latte"<<endl;
			hotdrink.close();
		}
		else if(typ==7)
		{
			cout<<"Caffe Americano SELECTED\n";
			hotdrink<<"Caffe Americano"<<endl;
			hotdrink.close();
		}
		else if(typ==8)
		{
			cout<<"Pumpkin Spice Latte SELECTED\n";
			hotdrink<<"Pumpkin Spice Latte"<<endl;
			hotdrink.close();
		}
		else if(typ<1 && typ>8){
			cout<<"Invalid Choice!!!\n";
			cout<<"Choose proper drinkn\n";
			goto la;
		}


	}

};
void print()
{
   cout<<"Information of customer "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Name of customer is:";
	cout<<costomerName;
	cout<<"\n";
	cout<<"email of customer is:";
	cout<<email;
	cout<<endl;
	cout<<"Aadhar number of customer:";
	cout<<adhar<<endl;
    cout<<"Mobile number of customer is: ";
	cout<<phone<<endl;
	cout<<"DOB of customer is: ";
	cout<<dob<<endl;
	cout<<"Age of customer is: ";
	cout<<age;	
	cout<<endl;
	cout<<endl;
	temp=costomerName;

}
void infocustomer()
{
	ifstream customerdetail;
	customerdetail.open("cust_detail.txt");
    int s=0;
	
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"                      WELCOME TO RED ROCK INN                                    "<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"The information of customers is getting ready...\n";
	cout<<"Please wait for some time :)\n";
	
	while(!customerdetail.eof()){
		// int i=1;
		
	
    customerdetail>>costomerName;
	customerdetail>>email;
	customerdetail>>adhar;
	customerdetail>>phone;
	customerdetail>>dob;
	customerdetail>>age;
	if(temp==costomerName)
	{
		break;
	}
	
	print();
	}
	if(costomerName.empty())
	{
       cout<<"list is empty"<<endl;
	}
	customerdetail.close();  
}
int search(string Name)
 {
    ifstream  customerdetail;
    customerdetail.open("cust_detail.txt");
    while (!customerdetail.eof()) {

    customerdetail>>costomerName;
	customerdetail>>email;
	customerdetail>>adhar;
	customerdetail>>phone;
	customerdetail>>dob;
	customerdetail>>age;
        if (Name==costomerName ) {
        
            print();
			temp=costomerName;
			customerdetail.close();
            return 1;
        }
       
    }
    	system("cls");
    cout<<"Sorry custumer Not Availiable!!!"<<endl;
	customerdetail.close();
    return -1;
}
void deletes(string Name) 
{
    int num = search( Name);
    if (num==1) {
    
        ofstream write;
            write.open("temps.txt");
        ifstream customerdetail;
        customerdetail.open("cust_detail.txt");
        while (!customerdetail.eof()) {
			customerdetail>>costomerName;
	      customerdetail>>email;
            customerdetail>>adhar;
	        customerdetail>>phone;
	        customerdetail>>dob;
	         customerdetail>>age;
           
            if ( costomerName!=Name)
			{
               
               write<<"\n"<<costomerName;
	      write<<"\n"<<email;
            write<<"\n"<<adhar;
	        write<<"\n"<<phone;
	        write<<"\n"<<dob;
	         write<<"\n"<<age;
            }
        }
        write.close();
        customerdetail.close();
        remove("cust_detail.txt");
        rename("temps.txt", "cust_detail.txt");
       
        cout << "\n\tData deleted successfuly"<<endl;
    }
    else {
    		system("cls");
        cout << "\n\tRecord not deleted Something do Wrong";
    }
}
void newcustomer()
{
	
	int i;
	la:
	cout<<"Enter no of customer\n";
	cin>>n;
	if(n<4){
		customerdetail.open("cust_detail.txt",ios::app);
	
		for(i=0;i<n;i++){
			
			cout<<"Name of"<<(i+1)<<"customer:";
			cin>>costomerName;
			customerdetail<<costomerName<<endl;
			cout<<"Enter the email of "<<i+1<<" customer:";
			cin>>email;
			customerdetail<<email<<endl;
			cout<<"Enter the aadhar number of "<<i+1<<" customer:";
			cin>>adhar;
			customerdetail<<adhar<<endl;
			cout<<"Enter the mobile number of "<<i+1<<" customer:";
			cin>>phone;
			customerdetail<<phone<<endl;
			cout<<"Enter the date of birth of "<<i+1<<" customer:";
			cin>>dob;
			customerdetail<<dob<<endl;
			cout<<"Enter the age of "<<i+1<<" customer:";
			cin>>age;
			customerdetail<<age<<endl;

			cout<<endl;
			cout<<endl;
			
		}
		customerdetail.close();
		cout<<"Select floor and room number to live:\n";
		cout<<"1.for floor 1\n";
		cout<<"2.for floor 2\n";
		cout<<"3.for floor 3\n";
			int floor;
			cin>>floor;
			if(floor==1)
			{
				
				floor1.open("floor1.txt",ios::app);
				cout<<"Enter room no to live.:1 to 10: \n";
			    cin>>roomno;
				floor1<<roomno<<endl;
				cout<<endl;
				floor1.close();
			}
			
			else if(floor==2)
			{
				floor2.open("floor2.txt",ios::app);
				cout<<"Enter room no.: from 11 to 20: ";
				cin>>roomno;
				floor2<<roomno<<endl;
				cout<<endl;
				floor2.close();
			}
			else if(floor==3){
				floor3.open("floor3.txt",ios::app);
				cout<<"Enter a room no. to live:from 21 to 30: \n";
				cin>>roomno;
				floor3<<roomno<<endl;
				cout<<endl;
				floor3.close();
			}
	
	}
	else
	{
		cout<<"Maximum 3 people can live in one room"<<endl;
		cout<<"Please book another room for remaining customers\n";
		goto la;
	}
	int type;
	cout<<"Choose the type of room:\n";
	
	cout<<"1.Simple room, rent: Rs1199/day\n";
	cout<<"2.Premium room, rent:Rs1690/day\n ";
	cout<<"3.Ultra Premium room, rent: Rs2490/day\n";
	cout<<"4.Luxury Room, rent: Rs4490/day\n";

	cin>>type;
	roomrent.open("rent.txt",ios::app);
	cout<<"Enter no.of days you want to live\n";
	cin>>noofdays;
	customerdetail<<noofdays<<endl;
	
	if(type==1)
	{
		cout<<"Total rent of simple room for "<<noofdays<<"is Rs:"<<1199*(noofdays)<<endl;
		customerdetail<<(1199*(noofdays))<<endl;
	    // customerdetail.close();
	}
	else if(type==2)
	{
		cout<<"Total rent of premium room for "<<noofdays<<"is Rs:"<<1690*(noofdays)<<endl;
		customerdetail<<(1690*(noofdays))<<endl;
	    // customerdetail.close();
	}
	else if(type==3)
	{
		cout<<"Total rent of ultra premium room for "<<noofdays<<"is Rs:"<<2490*(noofdays)<<endl;
		customerdetail<<(2490*(noofdays))<<endl;
	    // customerdetail.close();
	}
	else if(type==4)
	{
		// customerdetail.open("cust_detail.txt",ios::app);
		cout<<"Total rent of Luxury room for "<<noofdays<<"is Rs:"<<4490*(noofdays)<<endl;
		customerdetail<<(4490*(noofdays))<<endl;
	//  customerdetail.close();
	}
	roomrent.close();
	cout<<"Room booked Sucessfully:)\n\n";
	
}
int login()
{
	int count;
	string userid,password,id,pass;
//	system("cls");
	cout<<"\t\tPlease enter your username and password-"<<endl;
	cout<<"\t\tUSERNAME-";
	cin>>userid;
	cout<<"\t\tPASSWORD-";
	cin>>password;
	ifstream input("record.txt");
	while(input>>id>>pass)
	{
		if(id==userid&&pass==password)
		{
			count=1;
		//	system("cls");
		}
	}
	input.close();
	if(count==1)
	{    	system("cls");
		cout<<"\t\tYou login is successfully"<<endl;
	
		cout<<"#######################WELCOME-"<<userid<<"############################ "<<endl;
			return 1;
	}
	else
	{
			system("cls");
			cout<<"\t\tLogin error please check your password and username"<<endl;
			return 0;
	}
	
}
void registration()
{
		string ruserid,rpassword,rid,rpass;
		//system("cls");
		cout<<"\t\t\tEnter a username-";
		cin>>ruserid;
		cout<<"\t\t\tEnter a password-";
		cin>>rpassword;
		
		ofstream f1("record.txt",ios::app);
		f1<<ruserid<<' '<<rpassword<<endl;
			system("cls");
		cout<<"\t\t\tRegistration is successful!!!\n"<<endl;
	}
void forgot()
{
	int option;
//	system("cls");
		do
		{
		
    cout<<"press 1 to Search your password by username"<<endl;
    cout<<"press 2 for Go Back"<<endl;
	cout<<"\t\t\tEnter your choice-";
	cin>>option;
	
	
	
	switch(option)
	{
		case 1:
		{
				system("cls");
		int count=0;
		string suserid,sid,spass;
		cout<<"\t\t\tEnter the username which you rememberd:";
		cin>>suserid;
		ifstream f2("record.txt");
		while(f2>>sid>>spass)
		{	
		     if(sid==suserid)
				count=1;
     	}           
		if(count==1)
		{
				system("cls");
		
			cout<<"\n\nYour account is found!!!!\n";
			cout<<"\n\nYour password is-"<<spass<<endl;	
		}
		else
		{
				system("cls");
		cout<<"\t\tSorry your account is not found!!\n"<<endl;
	}
	}
	case 2:
		break;
	default:
		cout<<"Please Enter correct choice"<<endl;
}
}while(option!=2);
}
int main()
{
	int ch,choice;
    string temp;
	do
	{
	     cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"                      WELCOME TO RED ROCK INN                              "<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;
	
		cout<<"________________________________________________________________________________"<<endl;
	   cout<<"\t\t\tWELCOME TO LOGIN PAGE"<<endl;
	cout<<"__________________________________________________________________________________"<<endl;
	cout<<"\t1.Manager Login"<<endl;
	cout<<"\t2.Register"<<endl;
	cout<<"\t3.Forgot password"<<endl;
	cout<<"\t4.Close Application"<<endl;
	cout<<"\t\tEnter your choice-";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
     case 1:
	 if(login())
	 {
	do
	{
	
	
    cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"                      WELCOME TO RED ROCK INN                               "<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;

	cout<<"Choose the following Actions\n";
	cout<<"1.Get inforamtion about empty Rooms\n";
	// cout<<"2.To get information about Empty Rooms on each floor\n";
	cout<<"3.Get information about Remaining stock of drinks\n";
	cout<<"4.To add new customer\n";
	cout<<"5.Get information about customer in room\n";
	cout<<"6.Place a order for a custumer\n";
    cout<<"7.Search a custumer record\n";
	cout<<"8.Delete a customer record\n";
    cout<<"9.Exit from Application\n";
	cin>>ch;
	system("cls");
	switch(ch)
	{
		case 1:
		emptyroomInfo();
		break;
		// case 2:
		// emptyroomInfoeachfoor();
		// break;
		case 3:
        drink();
		break;
		case 4:
		newcustomer();
		break;
		case 5:
		infocustomer();
		break;
		case 6:
		 order o;
		o.drinks();
		break;
        case 7:
        cout<<"Enter a customer name=";
        cin>>temp;
        search(temp);
        break;
		 case 8:
        cout<<"Enter a customer name=";
        cin>>temp;
        deletes(temp);
        break;
		case 9:
		cout<<"Logout Successfully\n";
		break;
		default:
		cout<<"Please enter correct choice:)\n";
	}
	}while(ch!=9);
	 }
	 break;
	 	case 2:
				system("cls");
			registration();
			break;
		case 3:
				system("cls");
			forgot();
			break;
		case 4:
				system("cls");
		    cout<<"Thank You "<<endl;
		    break;
		default:
				system("cls");
			
			cout<<"Please enter correct choice"<<endl;
	}
			
	
}while(choice!=4);
		
    

}
