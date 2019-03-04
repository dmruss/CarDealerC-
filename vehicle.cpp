#include <iostream>
#include <string>
#include <vector>
#include "vehicle.h"





void Dealer::setName(string name) {
	DealerName = name;
}

void Dealer::setAddress(string address) {
	DealerAddress = address;
}

string Dealer::getName() {
	return DealerName;
}

string Dealer::getAddress() {
	return DealerAddress;
}

Dealer::Dealer(string iName) {
	DealerName = iName;
}



Vehicle::Vehicle(string iVIN, string iMake, string iModel, int iYear, double iPrice) {
	VIN = iVIN;
	make = iMake;
	model = iModel;
	year = iYear;
	price = iPrice;
}

string Vehicle::getVIN() {
	return VIN;
}

string Vehicle::getMake() {
	return make;
}

string Vehicle::getModel() {
	return model;
}

int Vehicle::getYear() {
	return year;
}

double Vehicle::getPrice() {
	return price;
}

void Vehicle::setVIN(string input) {
	VIN = input;
}

void Vehicle::setMake(string input) {
	make = input;
}

void Vehicle::setModel(string input) {
	model = input;
}

void Vehicle::setYear(int input) {
	year = input;
}

void Vehicle::setPrice(double input) {
	price = input;
}

void Vehicle::printVehicleinfo(vector <Vehicle> list) {
	cout << "VIN: " << VIN << endl;
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
}

