#ifndef ACCOUNTNUMBERCHECK_H
#define ACCOUNTNUMBERCHECK_H

class AccountNumberCheck{
	private:
		int accountNumber = 12345678;
	public:
		int getAccountNumber(){return accountNumber;}
		bool accountActive(int acctNumToCheck){
			if(acctNumToCheck == getAccountNumber())
				return true;
			return false;
		}
	
};

#endif