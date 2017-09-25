#pragma once
class BankOfPigs
{
private:
	float currentPigs;

public:
	BankOfPigs(float cp);

	void depositPigs(float pigs);
	float withdrawPigs();
	float balancePigs() const;
};