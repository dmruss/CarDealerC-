#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <vector>
#include <string>
#include <algorithm>





void DisplayInventory(vector<Vehicle> vect) {
		if (vect.size() == 0) {
			cout << "Inventory empty.  Add a vehicle first." << endl;
			return;
		}
		cout << "\n" << endl;
		cout << "Vehicle Inventory" << endl;
		cout << "\n" << endl;

		for (int i = 0; i < vect.size(); i++) {
			cout << "Vehicle: #" << i+1 <<  endl;
			cout << "Make: " << vect[i].getMake() << endl;
			cout << "Model: " << vect[i].getModel() << endl;
			cout << "Year: "<< vect[i].getYear() << endl;
			cout <<"Price: $"<< vect[i].getPrice()<<  endl;
			cout << "VIN: " << vect[i].getVIN() << endl;
			cout << "Dealer: " << vect[i].getName() << endl;
			cout << "Address: " << vect[i].getAddress() << "\n" << endl;

		}

	
	}

int ChooseVehicle(vector <Vehicle> vect) {
	unsigned int choice = 0;

	while (choice == 0) {
		cout << "Type the Vehicle # of the vehicle you would like to select:  " << endl;
		
		
		if (!(cin >> choice) || choice > vect.size()) {
			cin.clear();
			cin.ignore();
			cout << "Not a valid choice." << endl;
			choice = 0;
		}
	}
	cout << "Vehicle: #" << choice << endl;
	cout << "Make: " << vect[choice -1].getMake() << endl;
	cout << "Model: " << vect[choice -1].getModel() << endl;
	cout << "Year: " << vect[choice -1].getYear() << endl;
	cout << "Price: $" << vect[choice -1].getPrice() << endl;
	cout << "VIN: " << vect[choice - 1].getVIN() << endl;
	cout << "Dealer: " << vect[choice -1].getName() << endl;
	cout << "Address: " << vect[choice -1].getAddress() << "\n" << endl;

	return (choice - 1);  //This makes all output the actual index of the vehicle, not the vehicle #
}    

void EditVehicle(int a, vector <Vehicle> &vect){
	string name;
	int number;
	int correct = 0;
	string answer;

	while (correct == 0) {
		cout << "Type the name of the attribute you would like to edit:  ";
		cin.ignore();
		cin.clear();
		getline(cin, name);     //(Fixed) BUG: Intial automatic incorrect attribute choice

		std::transform(name.begin(), name.end(), name.begin(), ::tolower);


		if (name == "make") {
			cout << "Enter the new make:  ";
			cin >> name;
			vect[a].setMake(name);
			cout << "Attribute updated successfully.  Do you want to update another for this vehicle? ";
			cin >> answer;
			std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			if (answer == "yes") {
				correct = 0;
			}
			else if (answer == "no") {
				correct = 1;
			}
			
		}
		else if (name == "model") {
			cout << "Enter the new model:  ";
			cin >> name;
			vect[a].setModel(name);
			cout << "Attribute updated successfully.  Do you want to update another for this vehicle? ";
			cin >> answer;
			std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			if (answer == "yes") {
				correct = 0;
			}
			else if (answer == "no") {
				correct = 1;
			}

		}
		else if (name == "year") {
			cout << "Enter the new year:  ";
			cin >> number;
			vect[a].setYear(number);
			cout << "Attribute updated successfully.  Do you want to update another for this vehicle? ";
			cin >> answer;
			std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			if (answer == "yes") {
				correct = 0;
			}
			else if (answer == "no") {
				correct = 1;
			}

		}
		else if (name == "price") {
			cout << "Enter the new price:  ";
			cin >> number;
			vect[a].setPrice(number);
			cout << "Attribute updated successfully.  Do you want to update another for this vehicle? ";
			cin >> answer;
			std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			if (answer == "yes") {
				correct = 0;
			}
			else if (answer == "no") {
				correct = 1;
			}

		}
		else if (name == "dealer") {
			cout << "Enter the new dealer:  ";
			cin.clear();
			getline(cin, name);
			vect[a].setName(name);
			cout << "Attribute updated successfully.  Do you want to update another for this vehicle? ";
			cin >> answer;
			std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			if (answer == "yes") {
				correct = 0;
			}
			else if (answer == "no") {
				correct = 1;
			}

		}
		else if (name == "address") {
			cout << "Enter the new address: ";
			//cin.ignore();   //caused the first character of the string to be omitted
			cin.clear();
			getline(cin,name);
			vect[a].setAddress(name);
			cout << "Attribute updated successfully.  Do you want to update another for this vehicle? ";
			cin >> answer;
			std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			if (answer == "yes") {
				correct = 0;
			}
			else if (answer == "no") {
				correct = 1;
			}

		}
		else {
			cout << "Invalid attribute choice." << endl;
		}
		//Could make Vehicle attributes print after every update
	}

	cout << "Vehicle Updated.\n" << endl;
	cout << "Vehicle: #" << a + 1 << endl;
	cout << "Make: " << vect[a].getMake() << endl;
	cout << "Model: " << vect[a].getModel() << endl;
	cout << "Year: " << vect[a].getYear() << endl;
	cout << "Price: $" << vect[a].getPrice() << endl;
	cout << "VIN: " << vect[a].getVIN() << endl;
	cout << "Dealer: " << vect[a].getName() << endl;
	cout << "Address: " << vect[a].getAddress() << "\n" << endl;



}

void AddVehicle(vector <Vehicle> &vect) {
	string mVIN, mMake, mModel, mDealer, mAddress;
	int mYear;
	double mPrice;

	Vehicle v1;

	cout << "Enter the values for your vehicle." << endl;
	cout << "VIN: ";
	cin >> mVIN;
	v1.setVIN(mVIN);
	cout << "Make: ";
	cin >> mMake;
	v1.setMake(mMake);
	cout << "Model: ";
	cin >> mModel;
	v1.setModel(mModel);
	cout << "Year: ";
	cin >> mYear;
	v1.setYear(mYear);
	cout << "Price: ";
	cin >> mPrice;
	v1.setPrice(mPrice);
	cout << "Dealer: ";
	cin >> mDealer;
	v1.setName(mDealer);
	cin.ignore();


	if (v1.getAddress().size() == 0) {

		cout << "What is " << mDealer << "'s address?" << endl;

		getline(cin, mAddress);
		v1.setAddress(mAddress);
	}

	vect.push_back(v1);

	cout << "Vehicle addition successful." << endl;
}

void DeleteVehicle(int a, vector <Vehicle> &vect) {
	int choice = 0;
	string name;
	
	cout << "Vehicle: #" << a + 1 << endl;
	cout << "Make: " << vect[a].getMake() << endl;
	cout << "Model: " << vect[a].getModel() << endl;
	cout << "Year: " << vect[a].getYear() << endl;
	cout << "Price: $" << vect[a].getPrice() << endl;
	cout << "VIN: " << vect[a].getVIN() << endl;
	cout << "Dealer: " << vect[a].getName() << endl;
	cout << "Address: " << vect[a].getAddress() << "\n" << endl;

	while (choice == 0) {
		cout << "Are you sure you want to delete this vehicle?" << endl;  //BUG: double prints 
		cin.clear();
		getline(cin, name);
		std::transform(name.begin(), name.end(), name.begin(), ::tolower);
		if (name == "yes") {
			vect.erase(vect.begin() + (a));
			cout << "Vehicle deleted successfully.";
			choice = 1;
		}
		else if (name == "no") {

			cout << "As you wish."<<endl;
			choice = 1;
		}
	}
	

}

void SortbyVIN(vector <Vehicle> &vect) {

	bool waytosort(vect.getVIN(), int j) { return i > j };
	bool sortByVIN(const Vehicle &lhs, const Vehicle &rhs) { return lhs.VIN < rhs.VIN; }

	sort(vect.begin(), vect.end(), sortbyVIN);
}
	





#endif

