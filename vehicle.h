#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Dealer {

protected:
	string DealerName;
	string DealerAddress;



public:
	void setName(string name);
	void setAddress(string);

	string getName();
	string getAddress();
	
	Dealer() = default;

	Dealer(string iName);


};



class Vehicle : public Dealer {

private:
	string VIN;
	string make;
	string model;
	int year;
	double price;

public:
	string getVIN();
	string getMake();
	string getModel();
	int getYear();
	double getPrice();

	void setVIN(string input);
	void setMake(string input);
	void setModel(string input);
	void setYear(int input);
	void setPrice(double input);

	Vehicle(string iVIN, string iMake, string iModel, int iYear, double iPrice);
	
	Vehicle() = default;

	void printVehicleinfo(vector <Vehicle> list);

	


};




#endif