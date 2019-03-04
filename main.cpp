#include <iostream>

#include "vehicle.h"
#include "functions.h"




int main() {
	vector <Vehicle> list;
	int choice;
	
	
	while (true) {
		cout << "Type the number of the menu item you would like to choose." << endl;
		cout << "1. Display Inventory" << endl;
		cout << "2. Add to Inventory" << endl;
		cout << "3. Edit Vehicle" << endl;
		cout << "4. Delete Vehicle" << endl;
		cout << "5. Sort Inventory by VIN" << endl;
		cout << "6. Search Inventory by Model" << endl;
		cout << "7. Read Inventory from file" << endl;
		cout << "8. Write Inventory to file and exit" << endl;
		
		if (!(cin >> choice)) {
			cin.clear();
			cin.ignore();
			cout << "Not a menu choice. Try again." << endl;
		}

		else if (choice == 1) {
			DisplayInventory(list);
		}

		else if (choice == 2) {   //Added the & sign to the vector and it worked!.
			AddVehicle(list);
		}

		else if (choice == 3) {
			int editchoice;
			DisplayInventory(list);
			editchoice = ChooseVehicle(list);
			EditVehicle(editchoice, list);
			
		}

		else if (choice == 4) {
			int editchoice;
			DisplayInventory(list);
			editchoice = ChooseVehicle(list);
			DeleteVehicle(editchoice, list);
		}
	}
	


	return 0;
}



