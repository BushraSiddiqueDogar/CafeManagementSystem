#include<iostream>
#include<conio.h>

using namespace std;

int d;             //extras deal
int priceb[8] = { 50, 80, 70, 120, 130, 150, 130, 130 };
int priced[11] = { 120, 75, 80, 80, 75, 65, 100, 55, 120, 80, 130 };

// menu for beverages using function
void menub()
{

	// prices entered in array
	cout << "\n\tBeverages:" << endl;
	cout << "1. Milk Tea---------" << priceb[0] << " Rs " << endl;
	cout << "2. Green tea--------" << priceb[1] << " Rs " << endl;
	cout << "3. Pink tea---------" << priceb[2] << " Rs " << endl;
	cout << "4. Cold coffee------" << priceb[3] << " Rs " << endl;
	cout << "5. Black Coffee-----" << priceb[4] << " Rs " << endl;
	cout << "6. Cappachino-------" << priceb[5] << " Rs " << endl;
	cout << "7. Hot chocolate----" << priceb[6] << " Rs " << endl;
	cout << "8. Espresso---------" << priceb[7] << " Rs " << endl;
}
//// menu for desserts using function
void menud()
{
	// prices entered using array

	cout << "\n\tDesserts:" << endl;
	cout << "1.  Ice cream Sandwich------------" << priced[0] << "Rs" << endl;
	cout << "2.  Chocolate cake(1 pc)--------" << priced[1] << "Rs" << endl;
	cout << "3.  Blueberry pie---------------" << priced[2] << "Rs" << endl;
	cout << "4.  Strawberry pie--------------" << priced[3] << "Rs" << endl;
	cout << "5.  Fruit bowl------------------" << priced[4] << "Rs" << endl;
	cout << "6.  Vanilla cream cake(1 pc)----" << priced[5] << "Rs" << endl;
	cout << "7.  Chocolate crossont----------" << priced[6] << "Rs" << endl;
	cout << "8.  French toast----------------" << priced[7] << "Rs" << endl;
	cout << "9.  Coffee cake(1 pc)-----------" << priced[8] << "Rs" << endl;
	cout << "10. Plain muffin----------------" << priced[9] << "Rs" << endl;
	cout << "11. Chocochip muffin------------" << priced[10] << "Rs" << endl;
}
// extras added using fuction
void extras()
{
	// prices for extras using array
	int extra[3] = { 20, 20, 20 };
	cout << "\n\tExtras:" << endl;
	cout << "1. Sugar-------" << extra[0] << "Rs" << endl;
	cout << "2. Cream-------" << extra[1] << "Rs" << endl;
	cout << "3. Milk--------" << extra[2] << "Rs" << endl;
}

    // Funtion for tax.
void tax(int sum)
{
	float t_bill, tax;
	if (sum <= 500)
	{
		tax = (sum * 10)/ 100;
		t_bill = sum + tax;
		cout << "Your bill is   " << t_bill;
	}
	else if (sum > 500 && sum <= 1000)
	{
		tax = (sum * 10) / 100 ;
		t_bill = sum + tax;
		cout << "Your bill is   " << t_bill;

		float discount, d_bill;
		discount = (t_bill * 5 )/ 100;
		d_bill = t_bill - discount;
		cout << "\nWe will give you the discount of 5% on your order \n";
		cout << "You have to pay:  " << d_bill;
	}
	else if (sum > 1000)
	{
		tax = (sum * 10) / 100;
		t_bill = sum + tax;
		cout << "Your bill is   " << t_bill;

		float discount, d_bill;
		discount = (t_bill * 10) / 100;
		d_bill = t_bill - discount;
		cout << "\nWe will give you the discount of 10% on your order\n";
		cout << "You have to pay:  " << d_bill;
	}
	
}
int total1(int it, int deals, char v)
{
	int bill, e_bill;
	//char v;
	if (it == 1)
	{
		bill = priceb[0] * deals;
		if (v == 'y')
		{
			e_bill = d * 20;
			bill = e_bill + bill;
		}
	}
	else if (it == 2)
	{
		bill = 80 * deals;
		if (v == 'y')
		{
			e_bill = d * 20;
			bill = e_bill + bill;
		}
	}

	else if (it == 3)
	{
		bill = 70 * deals;
		if (v == 'y')
		{
			e_bill = d * 20;
			bill = e_bill + bill;
		}
	}
	else if (it == 4)
	{
		bill = 120 * deals;
		if (v == 'y')
		{
			e_bill = d * 20;
			bill = e_bill + bill;
		}
	}
	else if (it == 5 || it == 7 || it == 8)
	{
		bill = 130 * deals;
		if (v == 'y')
		{
			e_bill = d * 20;
			bill = e_bill + bill;
		}
	}
	else if (it == 6)
	{
		bill = 150 * deals;
		if (v == 'y')
		{
			e_bill = d * 20;
			bill = e_bill + bill;
		}
	}

	return bill;
}

int total2(int it, int deals)
{
	int bill;
	if (it == 1 || it == 9)
	{
		bill = 120 * deals;
	}
	else if (it == 2 || it == 5)
	{
		bill = 75 * deals;
	}
	else if (it == 3 || it == 4 || it == 10)
	{
		bill = 80 * deals;
	}
	else if (it == 6)
	{
		bill = 65 * deals;
	}
	else if (it == 7)
	{
		bill = 100 * deals;
	}
	else if (it == 8)
	{
		bill = 55 * deals;
	}
	else if (it == 11)
	{
		bill = 130 * deals;
	}
	return bill;
}

// main body starts
int main()
{
int q=0;
do{
     
	cout<<"==>\t\tSelect Below Employee or Customer";
	cout<<"\n\tEmployee for Press :: e ";
	cout<<"\n\tCustomer for Press :: c  ==> Your choice : ";
	char type,v;
	cin>>type;
	//switch cases are use for customer and employees.
      switch(type)
      {
	case 'c':
	{
	 int it, deals; // it stands for item no.

	 // loop given for 100 customers
	for (int i = 1; i < 100; i++)
	{
		cout << "\n-------------------------------------------------------------------------------------------------------------------------------";
		// our intro
		cout << "\n\t\t\t\t\t Welcome to Youth cafe" << endl;
		cout << "\n\n\t\t \t\t\t'Start your day with us'" << endl;
		cout << endl;
		cout << "\tContact no.: 03222587416 \t\t Address: 91Y phase 3 DHA" << endl;

		cout << endl;
		cout << "\t==>\t\tTimings:" << endl;
		cout << "\t\tMonday-Sunday: "<< " \t8:00am-10:00pm" << endl;
		cout << "\t\tFriday:  "<< " \t 7:30am-12:30pm" << endl;
		cout << "\n-----------------------------------------------------------------------------------------------------------------------------" << endl;
		// options for customers start
		cout << "     Customer # " << i << endl;
		cout << "\n\n\t\t\t      'Our Menu' " << endl;
		cout << endl;
		// selection for menu
		cout << "\t1. Beverages \n";
		cout << "\t2. Desserts \n";
		cout << "\t3. For both \n";
		int sm; // sm mesns select menu
		cout << "==>\t\tYour Order: ";
		cin >> sm;
		if(sm==1 ||sm==2 ||sm==3)
		// condition starts
		{
		
		if (sm == 1)
		{
			// menu for beverages called
			menub();
			cout << "\n------------------------------------------------------------------------------------------------------------------------------" << endl;
			// option given for how many items you want from beverages
			int nof, order; // stands for no. of items
			cout << "Enter the number of items you want from our beverage section: ";
			cin >> nof;
			if(nof==1 ||nof<=8)
			{
			
			// loop used for the no. of items
                   int bill[nof];
			for (int a = 0; a < nof; a++)
			{
				//int it; // it stands for item no.
				cout << "Enter the item no. " << a + 1 << " : ";
				cin >> it;
				cout<<endl;
				// conditions to print what you want
				int priceb[8] = { 50, 80, 70, 120, 130, 150, 130, 130 };
				if (it == 1)
					cout << "\t1. Milk Tea---------" << priceb[0] << " Rs " << endl;
				else if (it == 2)
					cout << "\t2. Green tea--------" << priceb[1] << " Rs " << endl;
				else if (it == 3)
					cout << "\t3. Pink tea---------" << priceb[2] << " Rs " << endl;
				else if (it == 4)
					cout << "\t4. Cold coffee------" << priceb[3] << " Rs " << endl;
				else if (it == 5)
					cout << "\t5. Black Coffee-----" << priceb[4] << " Rs " << endl;
				else if (it == 6)
					cout << "\t6. Cappuchino-------" << priceb[5] << " Rs " << endl;
				else if (it == 7)
					cout << "\t7. Hot chocolate----" << priceb[6] << " Rs " << endl;
				else if (it == 8)
					cout << "\t8. Espresso---------" << priceb[7] << " Rs " << endl;
				else
				{    cout<<"\t Invalid input. \n";
					}	
				cout << "Enter the no. of deals you want of this item: ";
				cin >> deals;
				cout << "Do you want any extras with your beverage..." << endl;
				cout << "==>  y for yes & n for no : ";
				//char v;
				cin >> v;
				switch (v)
				{
				case 'y':
				{
					extras();
					int extra[3] = { 20, 20, 20 };
					int num1, o;
					cout << "\n How many extra item(s) you want to add : ";

					cin >> num1;
					for (int j = 0; j < num1; j++)
					{
						cout << "\n Enter the item no." << j + 1 << " : ";
						cin >> o;
						if (o == 1)
							cout << "\t1. Sugar-------" << extra[0] << "Rs" << endl;
						else if (o == 2)
							cout << "\t2. Cream-------" << extra[1] << "Rs" << endl;
						else if (o == 3)
							cout << "\t3. Milk--------" << extra[2] << "Rs" << endl;
						else
						{    cout<<"\t Invalid Input. \n";
							}	

						cout << "\nHow much of it you want: ";
						cin >> d;
					}
					break;
				}
				default:
				{
					cout << "OK...\n" << endl;
				}
				}
			bill[a] =	total1(it, deals, v);
			}
			int sum=0;
			for(int i=0 ;i<nof ; i++)
			{
				sum=sum+bill[i];
			}

			tax(sum);
		}
		else
		{
			cout<<"\t Invalid input. \n";
		}
	}
		else if (sm == 2)
		{
			// menu for desserts called
			menud();
			cout << "\n----------------------------------------------------------------------------------------------------------------------------" << endl;
			// option given for how many items you want from desserts
			int nof, order; // stands for no. of items
			cout << "Enter the number of items you want from our dessert section : ";
			cin >> nof;
			if(nof==1 || nof<=11)
			{
			
			int it , bill[nof]; // it stands for item no.
			
			// loop used for the no. of items
			for (int b = 0; b < nof; b++)
			{

				cout << "Enter the item no." << b + 1 << " :";
				cin >> it;
				// conditions to print what you want
				int priced[11] = { 120, 75, 80, 80, 75, 65, 100, 55, 120, 80, 130 };
				if (it == 1)
					cout << "\t1.  Ice cream Sandwich------------" << priced[0] << "Rs" << endl;
				else if (it == 2)
					cout << "\t2.  Chocolate cake(1 pc)--------" << priced[1] << "Rs" << endl;
				else if (it == 3)
					cout << "\t3.  Blueberry pie---------------" << priced[2] << "Rs" << endl;
				else if (it == 4)
					cout << "\t4.  Strawberry pie--------------" << priced[3] << "Rs" << endl;
				else if (it == 5)
					cout << "\t5.  Fruit bowl------------------" << priced[4] << "Rs" << endl;
				else if (it == 6)
					cout << "\t6.  Vanilla cream cake(1 pc)----" << priced[5] << "Rs" << endl;
				else if (it == 7)
					cout << "\t7.  Chocolate crossont----------" << priced[6] << "Rs" << endl;
				else if (it == 8)
					cout << "\t8.  French toast----------------" << priced[7] << "Rs" << endl;
				else if (it == 9)
					cout << "\t9.  Coffee cake(1 pc)-----------" << priced[8] << "Rs" << endl;
				else if (it == 10)
					cout << "\t10. Plain muffin----------------" << priced[9] << "Rs" << endl;
				else if (it == 11)
					cout << "\t11. Chocochip muffin------------" << priced[10] << "Rs" << endl;
				else
				{      cout<<"\t Invalid Input. \n";
					}	
				cout << "Enter the no. of deals you want of this item : ";
				cin >> deals;
				
				bill[b]= total2(it, deals);
			}
			int sum=0;
			for(int i=0 ;i<nof ; i++)
			{
				sum=sum+bill[i];
			}
             tax(sum);
		}
		else
		{
			cout<<"\t Invalid Input. \n";
		}
		}
		else if (sm == 3)
		{
			// menu for beverages called
			menub();
			cout << "\n-------------------------------------------------------------------------------------------------------------------------" << endl;
			// option given for how many items you want from beverages
			int nof, order; // stands for no. of items
			cout << "Enter the number of items you want from our beverage section : ";
			cin >> nof;
			int bill1[nof],sum1=0  ; 
			if(nof==1  || nof<=8)
			{
			// loop used for the no. of items
			for (int a = 0; a < nof; a++)
			{
				cout << "Enter the item no." << a + 1 << "  :";
				cin >> it;
				// conditions to print what you want
				int priceb[8] = { 50, 80, 70, 120, 130, 150, 130, 130 };
				if (it == 1)
					cout << "\t1. Milk Tea---------" << priceb[0] << " Rs " << endl;
				else if (it == 2)
					cout << "\t2. Green tea--------" << priceb[1] << " Rs " << endl;
				else if (it == 3)
					cout << "\t3. Pink tea---------" << priceb[2] << " Rs " << endl;
				else if (it == 4)
					cout << "\t4. Cold coffee------" << priceb[3] << " Rs " << endl;
				else if (it == 5)
					cout << "\t5. Black Coffee-----" << priceb[4] << " Rs " << endl;
				else if (it == 6)
					cout << "\t6. Cappachino-------" << priceb[5] << " Rs " << endl;
				else if (it == 7)
					cout << "\t7. Hot chocolate----" << priceb[6] << " Rs " << endl;
				else if (it == 8)
					cout << "\t8. Espresso---------" << priceb[7] << " Rs " << endl;
				else 
				{   cout<<" \t Invalid input.\n";
					}	
				cout << "Enter the no. of deals you want of this item : ";
				cin >> deals;
				// case used for extras
				cout << "Do you want any extras with your beverage..." << endl;
				cout << "==>  y for yes & n for no : ";
				//char v;
				cin >> v;
				switch (v)
				{
				case 'y':
				{
					extras();
					int extra[3] = { 20, 20, 20 };
					int num1, o, d;
					cout << "\n How many extra item(s) you want to add: ";
					// loop used for if you want more than 1 item from extas
					cin >> num1;
					for (int j = 0; j < num1; j++)
					{
						cout << "\n Enter the item no." << j + 1 << " : ";
						cin >> o;
						if (o == 1)
							cout << "\t1. Sugar-------" << extra[0] << "Rs" << endl;
						else if (o == 2)
							cout << "\t2. Cream-------" << extra[1] << "Rs" << endl;
						else if (o == 3)
							cout << "\t3. Milk--------" << extra[2] << "Rs" << endl;
                        else 
                            {  cout<<"\t Invalid Input. \n";
							}
						cout << "\nHow much of it you want : ";
						cin >> d;
					}
					break;
				}
				default:
				{
					cout << "OK...\n";
				}
				}
					bill1[a] =	total1(it, deals, v);
			}
		}
		
		
			// menu for desserts called
			menud();
			cout << "\n---------------------------------------------------------------------------------------------------------------------------" << endl;
			// option given for how many items you want from desserts
			int nofd; // stands for no. of items
			cout << "\nEnter the number of items you want from our dessert section : ";
			cin >> nofd;
			if(nofd ==1 || nofd<=11)
			{
			
			int bill2[nofd],sum2=0;
			// loop used for the no. of items
			for (int b = 0; b < nofd; b++)
			{
				cout << "\nEnter the item no." << b + 1 << " :";
				cin >> it;
				// conditions to print what you want
				int priced[11] = { 120, 75, 80, 80, 75, 65, 100, 55, 120, 80, 130 };
				if (it == 1)
					cout << "\t1.  Ice cream Sandwich------------" << priced[0] << "Rs" << endl;
				else if (it == 2)
					cout << "\t2.  Chocolate cake(1 pc)--------" << priced[1] << "Rs" << endl;
				else if (it == 3)
					cout << "\t3.  Blueberry pie---------------" << priced[2] << "Rs" << endl;
				else if (it == 4)
					cout << "\t4.  Strawberry pie--------------" << priced[3] << "Rs" << endl;
				else if (it == 5)
					cout << "\t5.  Fruit bowl------------------" << priced[4] << "Rs" << endl;
				else if (it == 6)
					cout << "\t6.  Vanilla cream cake(1 pc)----" << priced[5] << "Rs" << endl;
				else if (it == 7)
					cout << "\t7.  Chocolate crossont----------" << priced[6] << "Rs" << endl;
				else if (it == 8)
					cout << "\t8.  French toast----------------" << priced[7] << "Rs" << endl;
				else if (it == 9)
					cout << "\t9.  Coffee cake(1 pc)-----------" << priced[8] << "Rs" << endl;
				else if (it == 10)
					cout << "\t10. Plain muffin----------------" << priced[9] << "Rs" << endl;
				else if (it == 11)
					cout << "\t11. Chocochip muffin------------" << priced[10] << "Rs" << endl;
				else         //If user press wrong key.
	            	{
		            	cout<<"Invalid input.";
	                 	}
				cout << "Enter the no. of deals you want of this item : ";
				cin >> deals;
				
				bill2[b]= total2(it, deals);
			}
		    int sum;
			for(int i=0 ;i<nofd || i<nof ; i++)
			{
				sum=bill1[i]+bill2[i];
			}
				tax(sum);
				}
				else
				{
					cout<<" \t Invalid Input.\n";
				}
				}
	 else
	 {
	 	cout<<" Invalid Input \n";
				 }
			}
		else 
			{
				cout<<"\t Invalid Input \n";
			}
	// REVIEW
	cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------";
	cout << "\n==>\tPlease Rate us out of 10:";
	int review;
	cin >> review;
	if (review < 8)
		cout << "\n\t We will try our best to improve our service. THANK YOU:) ";
	else
		cout << "\n\tTHANK YOU , Please come again :)";
}
break;
}
    case 'e':
      	{
//      		taking data from employees.
      		cout<<"\n==>\t  Enter your 4 digit id : ";
      			int id ,option;
      		     cin>>id;
      		if(id==3637 || id==3955 || id==8101)
      	    {
      		cout<<"\t What you want to see? \n";
      		cout<<"\t 1.  Working hours \n";
      		cout<<"\t 2.  Salary  \n";
      		cout<<"\t 3.  Asking for a day off \n";
      		cin>>option;
      		if(id==3637)
      		{ 
      		      cout<<"\n\t Employee id :"<<id;
      			cout<<"\n\t Employee Name : John ";
      			cout<<"\n\t Employee Age : 24 ";
      			if(option==1)
      			{
      				cout<<"\n\t Your weekly Working hour are :"<<14*7<<endl;
				}
				else if(option==2)
				{
					cout<<"\n\t Your Salary is : Rs. 20,000 only. ";
				}
				else if(option==3)
				{
					cout<<"\n\t Your request is accepted.";
					cout<<"\n\t Have a nice day :)";
				}
			}
			if(id==3955)
      		{ 
      		      cout<<"\n\t Employee id : "<<id;
      			cout<<"\n\t Employee Name : Jack ";
      			cout<<"\n\t Employee Age : 27 ";
      			if(option==1)
      			{
      				cout<<"\n\t Your weekly Working hour are :"<<14*7<<endl;
				}
				else if(option==2)
				{
					cout<<"\n\t Your Salary is : Rs. 22,000 only. ";
				}
				else if(option==3)
				{
					cout<<"\n\t Your request is accepted.\n";
					cout<<"\n\t Have a nice day :)";
				}
			}
			if(id==8101)
      		{ 
      		      cout<<"\n\t Employee id : "<<id;
      			cout<<"\n\t Employee Name : Robinson";
      			cout<<"\n\t Employee Age : 30 ";
      			if(option==1)
      			{
      				cout<<"\n\t Your weekly Working hour are :"<<14*7<<endl;
				}
				else if(option==2)
				{
					cout<<"\n\t Your Salary is : Rs. 25,000 only. ";
				}
				else if(option==3)
				{
					cout<<"\n\t Your request is accepted.";
					cout<<"\n\t Have a nice day :)";
				}
			}
			
		}
		else
		{   cout<<"\t Invalid input. \n";
		}
		break;
		}
 default:     //default of switch(type).
 	{
 	 	cout<<"\t Invalid id \n"<<endl;
		cout<<"\t Please try again .";	
	 }
}

q++;
}while(q<=100);
}





