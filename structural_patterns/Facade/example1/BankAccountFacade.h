#ifndef BANKACCOUNTFACADE_H
#define BANKACCOUNTFACADE_H

#include "AccountNumberCheck.h"
#include "SecurityCodeCheck.h"
#include "FundsCheck.h"
#include "WelcomeToBank.h"
class BankAccountFacade{
	private:
		int accountNumber;
		int securityCode;

	public:
		AccountNumberCheck* acctChecker;
		SecurityCodeCheck* codeChecker;
		FundsCheck* fundChecker;
		WelcomeToBank* bankWelcome;
		BankAccountFacade(int newAcctNum, int newSecCode){
			accountNumber = newAcctNum;
			securityCode = newSecCode;

			bankWelcome = new WelcomeToBank();
			acctChecker = new AccountNumberCheck();
			codeChecker = new SecurityCodeCheck();
			fundChecker = new FundsCheck();
		}
		

		int getAccountNumber(){return accountNumber;}
		int getSecurityNumber(){return securityCode;}
		void withdrawCash(double cashToGet){
			if(acctChecker -> accountActive(getAccountNumber()) && codeChecker -> isCodeCorrect(getSecurityNumber()) 
				&& fundChecker -> haveEnoughMoney(cashToGet)){
				cout<<"Transaction complete"<<endl;
			}else{
				cout<<"Transaction failed"<<endl;
			}
		}
		void depositCash(double cashToDeposit){
			if(acctChecker -> accountActive(getAccountNumber()) && codeChecker -> isCodeCorrect(getSecurityNumber())) {
				fundChecker -> makeDeposit(cashToDeposit);
				cout<<"Transaction complete"<<endl;
			}else{
				cout<<"Transaction failed"<<endl;
			}
		}

	
};

#endif