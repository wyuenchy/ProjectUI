#include"stuffAndThings.h"

void showRec() {
	string demo[15] = { "Mr.","Trump","Donald","Male","1999-9-9","2994 Arbor Court","Mountain View","Washington","99999","United States","2","99999999","donaldtrump@world.com","President","Trump Co." };
	for (int i = 0; i < 3; i++) {
		cout << "Full Name : " << demo[0] << " " << demo[2] << " " << demo[1] << endl;
		cout << "Gender : " << demo[3] << endl;
		cout << "Birthday : " << demo[4] << endl;
		cout << "Full Address : " << demo[5] << "," << demo[6] << "," << demo[7] << "," << demo[9] << endl;
		cout << "ZipCode : " << demo[8] << endl;
		cout << "Telephone Number : " << "(" << demo[10] << ") " << demo[11] << endl;
		cout << "Email : " << demo[12] << endl;
		cout << "Occupation : " << demo[13] << " at " << demo[14] << endl << endl;
		breakLine();
	}
}
void modAscii() {
	system("CLS");
	cout << "  __  __           _ _  __       \n";
	cout << " |  \\/  | ___   __| (_)/ _|_   _ \n";
	cout << " | |\\/| |/ _ \\ / _` | | |_| | | |\n";
	cout << " | |  | | (_) | (_| | |  _| |_| |\n";
	cout << " |_|  |_|\\___/ \\__,_|_|_|  \\__, |\n";
	cout << "                           |___/ \n";
	breakLine();
}
void modRec() {
	system("CLS");
	//TODO Searching inplementation
	int selection;
	string query;
	string demo[15] = { "Mr.","Trump","Donald","Male","1999-9-9","2994 Arbor Court","Mountain View","Washington","99999","United States","2","99999999","donaldtrump@world.com","President","Trump Co." };
	string colName[15] = { "Title","Surname","Given Name","Gender","Birthday","StreetAddress","City","State","ZipCode","Country","Country Code","Telephone Number","Email","Occupation","Company" };
	modAscii();
	cout << "Filter content using: \n";
	for (int i = 0; i < sizeof(colName) / sizeof(colName[0]); i++) {
		cout << i + 1 << ". " << colName[i] << endl;

	}
	breakLine();
	cout << "Select the column you would like to use to filter out record: ";
	cin >> selection;
	modAscii();
	cout << "The column you have chosen to filter by are: " << colName[selection - 1] << endl;
	cout << "Please enter the keywords to be filter on: ";
	cin >> query;
	
	int totalResult = 7;
	int currResult = 0;
	int recOnPage = 0;
	modAscii();
	cout << "Entry(s) found with selected criteria: \n";
	do{
		if (recOnPage != 5 && currResult < totalResult) {
			//&&currResult<totalResult
			cout << "Index: " << currResult+1 << endl;
			cout << "1. Full Name : " << demo[0] << " " << demo[2] << " " << demo[1] << endl;
			//cout << "2. Gender : " << demo[3] << endl;
			//cout << "3. Birthday : " << demo[4] << endl;
			//cout << "4. Full Address : " << demo[5] << "," << demo[6] << "," << demo[7] << "," << demo[9] << endl;
			//cout << "5. ZipCode : " << demo[8] << endl;
			//cout << "6. Telephone Number : " << "(" << demo[10] << ") " << demo[11] << endl;
			//cout << "7. Email : " << demo[12] << endl;
			cout << "2. Occupation : " << demo[13] << " at " << demo[14] << endl;
			breakLine();
			currResult++;
			recOnPage++;
		}
		else {
			cout << "Input 'n' to go to next page,Input 'p' to go to preveous page \n";
			cout << "Input the Index to select that record to modify\n";
			cout << "Input Your Choice: ";
			cin >> query;
			if (query == "n" || query == "N") {
				if (currResult == totalResult) {
					modAscii();
					cout << "You have reach the end,return to last page...\n";
					system("pause");
					currResult = currResult - 5;
				}
				recOnPage = 0;
				modAscii();
				cout << "Entry(s) found with selected criteria: \n";

			}
			else if (query == "p" || query == "P") {
				if (currResult <= 5) {
					modAscii();
					cout << "There are no preveous page avalible, please re-enter your action.\n";
					system("pause");
					currResult = 0;
					recOnPage = 0;
					modAscii();
					cout << "Entry(s) found with selected criteria: \n";

				}
				else if (currResult >= totalResult) {
					currResult = currResult - ((currResult%5)+5);
					recOnPage = 0;
					modAscii();
					cout << "Entry(s) found with selected criteria: \n";
				}else {
					currResult = currResult - 10;
					recOnPage = 0;
					modAscii();
					cout << "Entry(s) found with selected criteria: \n";

				}
			}
			else {
				//TODO logic for moding stuff
				break;
			}
		}
	} while (currResult <= totalResult);

	breakLine();
}
string toLower(string temp) {
	//32
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i] <= 90) {
			temp[i] = temp[i] + 32;
		}
	}
	return temp;
}
void delRec() {
	bool errFlag;
	string selection;
	string demo[9] = { "Mr.","Donald","Trump","1999-9-9","whitehouse, washington DC,USA","99999999","donaldtrump@world.com","president of USA","United States of America" };
	do {
		errFlag = true;
		system("CLS");
		cout << "Current Data: \n";
		cout << "1. Title : " << demo[0] << endl;
		cout << "2. Surname : " << demo[1] << endl;
		cout << "3. GivenName : " << demo[2] << endl;
		cout << "4. DateOfBirth : " << demo[3] << endl;
		cout << "5. Address : " << demo[4] << endl;
		cout << "6. Phone No. : " << demo[5] << endl;
		cout << "7. Email : " << demo[6] << endl;
		cout << "8. Occupation : " << demo[7] << endl;
		cout << "9. Company : " << demo[8] << endl;
		breakLine();
		cout << "Are you sure you need to delete this record?(Y/N) ";
		cin >> selection;
		if (toLower(selection) == "y") {
			cout << "Type DELETE if you confirm the removal of this record ";
			cin >> selection;
			if (toLower(selection) == "delete") {
				system("CLS");
				cout << "Delete Complete\n";
			}
			else {
				errFlag = false;
			}
		}
		else if (toLower(selection) == "n") {
			system("CLS");
			cout << "returning to Homepage...\n";
		}
		else {
			errFlag = false;
		}
	} while (errFlag == false);
}
void insertMultiple() {
	insAscii();
	int count = 0;
	string colName[15] = { "Title","Surname","Given Name","Gender","Birthday","StreetAddress","City","State","ZipCode","Country","Country Code","Telephone Number","Email","Occupation","Company" };
	string insertData[15];
	cout << "How many data you want to insert? ";
	cin >> count;
	insAscii();
	for (int j = 0; j < count; j++) {
		cout << "Input the data in the order of ";
		for (int i = 0; i < 15; i++) {
			cout << colName[i] << " ";
		}
		for (int i = 0; i < 15; i++) {
			cin >> insertData[i];
		}
		//TODO insert Data Algorithm
		cout << "Data inserted\n";
	}

	system("pause");
}
void insAscii(){
	system("CLS");
	cout << "  ___                     _   \n";
	cout << " |_ _|_ __  ___  ___ _ __| |_ \n";
	cout << "  | || '_ \\/ __|/ _ \\ '__| __|\n";
	cout << "  | || | | \\__ \\  __/ |  | |_ \n";
	cout << " |___|_| |_|___/\\___|_|   \\__|\n";
	cout << "                              \n";
	breakLine();
}