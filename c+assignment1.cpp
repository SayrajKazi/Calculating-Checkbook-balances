#include <iostream>
using namespace std;
	

int askUser()
{
	 int balance;
	 cout << "Please enter the current balance in checkbook: " << endl;
	 cin >> balance;
	 return balance;
}
	

int addMoney(int& deposits, int& withdrawals )
{
	int total = 0;
	cout << "Enter a negative integer to indicate a withdrawal.\n"<< endl;
	int money;
	do
	 {
	      cout << "Please deposit or withdraw money into the account: 0 ends the transaction " << endl;
	      cin >> money;
	      total += money;
	      if (money > 0 ) 
		  ++deposits;
	      else if (money < 0) ++withdrawals;
	 } while (money != 0);
	   return total;
}   

	 

char OutputData(int balance, int withdrawals, int deposits, int total)
{
	char a;
	cout << "Opening balance: " << balance << endl;
	cout << "Number of Deposits: " << deposits << endl;
	cout << "Number of Withdrawls: " << withdrawals << endl;
    balance += total;
	cout << "Closing Balance: " << balance << endl;
	cout << "To balance another checkbook press y, otherwise press n to quit the program: " << endl;
	cin >> a;
	return a;
}
	 

int main()
{
	char a = 0;
	    do						
	    {
			
	    	int balance, withdrawals, deposits, total, money;
			money = 0;
			balance = 0;
			deposits = 0;
			withdrawals = 0;
			total = 0;
	        balance = askUser();
		    total = addMoney(deposits, withdrawals);
	        a = OutputData(balance, withdrawals, deposits, total);
        }
	    while (a == 'y');

		

	
}