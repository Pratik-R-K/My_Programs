#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

class Account
{
	private:
		int AccNo;
		string AccName;
		double Accbal;
		double Amount;
		

	public:
		Account()
		{
			AccNo = 0;
			AccName = "Account Name";
			Accbal = 0.0;
			Amount = 0.0;
			
			cout<<"Default constructor this is pointing to: "<<this<<endl;
		}

		Account(int AccNo, string AccName, double Accbal)
		{
			this->AccNo = AccNo;
			this->AccName = AccName;
			this->Accbal = Accbal;
			//this->count= count+1
			cout<<"Parameterized constructor this is pointing to: "<<this<<endl;
		}

		void AcceptRecords()
		{
			cout<<"Please enter your Account Number: "<<endl;
			cin>>AccNo;
			cin.ignore();
			cout<<"Please enter you Account Name: "<<endl;
			getline(cin,AccName);
			cin.ignore();
			cout<<"Please enter amount: "<<endl;
			

		}
		
		void Balance(double Amount, double Accbal)
		{
			cout<<"Enter 1. Deposite"<<endl;
			cout<<"Enter 2. Withdraw"<<endl;
			int num;
			cin>>num;
			if(num==1)
			Accbal= Accbal + Amount;
			else
				Accbal = Accbal-Amount;
			
		}
		
		int getAccNo(){
        		return AccNo;
    		}
    		
    		double getAccBal(){
        		return Accbal;
    		}
    		
    		double getAmount(){
        		return Amount;
    		}
    		
    		void setAccBal(double newBal){
        		Accbal=newBal;
    		}
	
		


		void DisplayRecords()
		{
			//cout<<"Count: "<<count<<endl;
			cout<<"Your Account Number: "<<AccNo<<endl;
			cout<<"Your Account Name: "<<AccName<<endl;
			cout<<"Your Account Balance: "<<Accbal<<endl;
		}
		
		

};
bool findAccount(int accNum);
Account* acc=nullptr;
int main()
{
	int choice;
	
	int search;

	do{
		cout<<"Enter choice for\n 1.Create account \n2. Display Account\n3. Find Account\n4. Depsite or Withdraw amount "<<endl;
		
		cin>>choice;
		
		
	switch(choice){
		case 1:{
			if(acc!=nullptr)
			{
				delete (acc);
			}
			else
			{
				acc = new Account();
			}
		acc->AcceptRecords();
		break;
		 }
		 case 2:{
			if(acc==nullptr)
				cout<<"Account doesnt exists please first create an Account";
			else
				acc->DisplayRecords();
			break;
		}

		case 3:{
			       if(acc==nullptr)
				       cout<<"Account doesnt Exists please create an Account first";
			       else
			       {
				       cout<<"Enter Account number: ";
				       cin>>search;
					if(findAccount(search))
					{
						cout<<"Account found";
						acc->DisplayRecords();
					}	
					else
						cout<<"Account not found";
				}			
		 }
		case 4:{
				if(acc==nullptr)
					cout<<"Account doesnt exists please create account first";
				else
				{
					acc->Balance(acc->getAmount(), acc->getAccBal());
					acc->setAccBal(acc->getAccBal());
				}	
			}
		/*case 5:{
				exit(0);	
		}*/
	} 
	}		
		while(choice!=6);

}

bool findAccount(int search)
{
	if(acc == nullptr)
	return false;
	else
			return acc->getAccNo();
}	


			
				


		

