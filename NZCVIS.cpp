// NZCVIS.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <vector>
#include "nzcvis.h"

using namespace std;

vector<User> User::userData;

int main()
{
	//User user;
	//User registration

	string newUserId;
	string newUserPassword;
	string newFirstName;
	string newLastName;
	string newUserEmailAddress;
	string newDateOfBirth;
	string newGender;

	cout << "Enter your new userID : ";
	cin >> newUserId;
	//user.setUserId(newUserId);

	cout << "Enter your new password : ";
	cin >> newUserPassword;
	//user.setUserPassword(newUserPassword);

	cout << "Enter your first name : ";
	cin >> newFirstName;
	//user.setFirstName(newFirstName);

	cout << "Enter your last name : ";
	cin >> newLastName;
	//user.setLastName(newLastName);

	cout << "Enter your date of birth : ";
	cin >> newDateOfBirth;
	//user.setDateOfBirth(newDateOfBirth);

	cout << "Enter your gender : ";
	cin >> newGender;
	//user.setGender(newGender);

	User newUser(newUserId, newUserPassword, newFirstName, newLastName, newUserEmailAddress, newDateOfBirth, newGender);
	User::addUser(newUser);

	cout << "Your account was created";

	//User login

	string enterUserId;
	string enterUserPassword;

	cout << "Enter your userID : ";
	cin >> enterUserId;

	for (int i = 0; i < User::userData.size(); i++) {
		if (enterUserId == User::userData[i].getUserId()) {

			cout << "Enter your new password : ";
			cin >> enterUserPassword;

			if (enterUserPassword == User::userData[i].getUserPassword()) {
				cout << "Welcome" << User::userData[i].getFirstName() << "'s covid record" << endl;
			}
			else {
				cout << enterUserPassword <<" is not found. Please check your Password" << endl;
			}
		}
		else {
			cout << enterUserId <<" is not found. Please check your userID" << endl;
		}
	}

	// Admin login
	string enterAdminId;
	string enterAdminPassword;
	Admin administrator;

	cout << "Enter Admin ID : ";
	cin >> enterAdminId;
	administrator.setAdminId(enterAdminId);

	cout << "Enter Admin Password : ";
	cin >> enterAdminPassword;
	administrator.setAdminPassword(enterAdminPassword);

	if (administrator.getAdminId() == "Yoobee1234" && administrator.getAdminPassword() == "1234-5678") {
		cout << "My covid redord update document page"<< endl;
	}
	else {
		cout << "Please check yourID and Password" << endl;
	}
	system("pause>0");
}

