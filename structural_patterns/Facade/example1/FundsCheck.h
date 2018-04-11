#ifndef FUNDSCHECK_H
#define FUNDSCHECK_H
#include <iostream>
using namespace std;
class FundsCheck{
	private:
		double cashInAccount = 1000.00;
	public:
		double getCashInAccount(){return cashInAccount;}
		void decreaseCashInAccount(double cashWithdrawn){
			cashInAccount -= cashWithdrawn;
		}
		void increaseCashInAccount(double cashWithdrawn){
			cashInAccount += cashWithdrawn;
		}
		bool haveEnoughMoney(double cashToWithdraw){
			if(cashToWithdraw > cashInAccount){
				cout<<"Not enough funds"<<endl;
				cout<<"Current balance: "<<cashInAccount<<endl;
				return false;
			}else{
				decreaseCashInAccount(cashToWithdraw);
				cout<<"Withdrawal complete: Current Balance is " << getCashInAccount()<<endl;
				return true;
			}
		}

		void makeDeposit(double cashToDeposit){
			increaseCashInAccount(cashToDeposit);
			cout<<"Deposit complete: Current Balance is " << getCashInAccount()<<endl;
		}
		
};

#endif