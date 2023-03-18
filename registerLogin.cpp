#include <iostream>
#include <string>
#include <vector>
#include "nzcvis.h"

using namespace std;
/*User::User() {
	userId = "";
	userPassword = "";
	firstName = "";
	lastName = "";
	dateOfBirth = "";
	gender = "";
}*/
User::User(string userId, string userPassword,string firstName, string lastName, string userEmailAddress, string dateOfBirth, string gender) {
	this->userId = userId;
	this->userPassword = userPassword;
	this->firstName = firstName;
	this->lastName = lastName;
	this->dateOfBirth = dateOfBirth;
	this->gender = gender;
}

string User::getUserId() {
	return userId;
}
string User::getUserPassword() {
	return userPassword;
}
string User::getFirstName() {
	return firstName;
}
string User::getLastName() {
	return lastName;
}
string User::getDateOfBirth() {
	return dateOfBirth;
}
string User::getGender() {
	return gender;
}
void User::displayUserAccount() {

}
void User::setUserId(string userId) {
	this->userId = userId;
}
void User::setUserPassword(string userPassword) {
	this->userPassword = userPassword;
}
void User::setFirstName(string firstName) {
	this->firstName = firstName;
}
void User::setLastName(string lastName) {
	this->lastName = lastName;
}
void User::setDateOfBirth(string dateOfBirth) {
	this->dateOfBirth = dateOfBirth;
}
void User::setGender(string gender) {
	this->gender = gender;
}
void User::addUser(User newUser) {
	userData.push_back(newUser);
}


string Admin::getAdminId() {
	return adminId;
}
string Admin::getAdminEmailAddress() {
	return adminEmailAddress;
}
string Admin::getAdminPassword() {
	return adminPassword;
}
void Admin::setAdminId(string adminId) {
	this->adminId = adminId;
}
void Admin::setAdminEmailAddress(string adminEmailAddress) {
	this->adminEmailAddress = adminEmailAddress;
}
void Admin::setAdminPassword(string adminPassword) {
	this->adminPassword = adminPassword;
}
