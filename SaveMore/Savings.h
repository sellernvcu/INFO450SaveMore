#pragma once
#include "Account.h"
class Savings : public Account
{
private:
	float Interest;
	float CurrentBalance;


public:
	Savings(int Acct, float Balance);
	Savings();
	float Withdraw();
	float Deposit();
	void Display();
	float AssessInterest(float);
};

