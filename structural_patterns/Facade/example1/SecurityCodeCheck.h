#ifndef SECURITYCODECHECK_H
#define SECURITYCODECHECK_H

class SecurityCodeCheck{
	private:
		int securityCode = 1234;
	public:
		int getSecurityCode(){return securityCode;}
		bool isCodeCorrect(int securityCodeToCheck){
			if(securityCodeToCheck == securityCode)
				return true;
			return false;
		}
	
};


#endif