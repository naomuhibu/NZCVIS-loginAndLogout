#pragma once
#include <iostream>
#include <vector>

using namespace std;

class User {
protected:
	string userId;
private:
	string userPassword;
	string firstName;
	string lastName;
	string userEmailAddress;
	string dateOfBirth;
	string gender;

public:
	string registerDate;
	string userLogInDate;
	static vector<User>userData;
	User() {}
	User(string userId, string userPassword, string firstName, string lastName, string userEmailAddress, string dateOfBirth, string gender);
	void setUserId(string userId);
	void setUserPassword(string userPassword);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setDateOfBirth(string dateOfBirth);
	void setGender(string gender);
	string getUserId();
	string getUserPassword();
	string getFirstName();
	string getLastName();
	string getDateOfBirth();
	string getGender();
	void displayUserAccount();
	static void addUser(User newUser);
};

class CovidTestRecord: public User {
public:
	string covidTestDate;
	string covidTestResult;
	string covidTestNumber;
};

class VaccineRecord : public User {
public:
	string vaccineRecordDate;
	string vaccineTyoe;
	string vaccineNumber;
	string vaccineStatus;
protected:
	string qrCord;
};

class Admin {
private:
	string adminId;
	string adminPassword;
	string adminEmailAddress;

public:
	string adminLoginDate;
	void setAdminId(string adminId);
	void setAdminEmailAddress(string adminEmailAddress);
	void setAdminPassword(string adminPassword);
	string getAdminId();
	string getAdminEmailAddress();
	string getAdminPassword();
	
};