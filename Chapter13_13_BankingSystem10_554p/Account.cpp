/*
파일이름: Account.cpp
작성자 : 김용환
업데이트 정보 : 2018-11-09 파일 버전 09
*/
#include <iostream>
#include <cstring>
#include "Account.h"
#include "BankingCommonDecl.h"

/*생성자*/
Account::Account(int ID, int money, String name) :accID(ID), balance(money)
{
	cusName = name;
}

/*계좌ID 반환*/
int Account::GetAccID() const
{
	return accID;
}

/*입금*/
void Account::Deposit(int money)
{
	balance += money;
}

/*출금*/
int Account::Withdraw(int money)
{
	if (balance < money)
		return 0;
	balance -= money;
	return money;
}

/*개인정보 출력*/
void Account::ShowAccInfo() const
{
	cout << "계좌ID: " << accID << endl;
	cout << "이 름: " << cusName << endl;
	cout << "잔 액: " << balance << endl;
}
