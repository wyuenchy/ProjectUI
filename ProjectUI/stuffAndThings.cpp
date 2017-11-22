#include"stuffAndThings.h"

void showRec() {
	string demo[9] = { "Mr.","Donald","Trump","1999-9-9","whitehouse, washington DC,USA","99999999","donaldtrump@world.com","president of USA","United States of America" };
	for (int i = 0; i < 3; i++) {
		cout << "Full Name : " << demo[0] << " " << demo[1] << " " << demo[2] << endl;
		//cout << "Title : " << demo[0] << endl;
		//cout << "Surname : " << demo[1] << endl;
		//cout << "GivenName : " << demo[2] << endl;
		cout << "DateOfBirth : " << demo[3] << endl;
		cout << "address : " << demo[4] << endl;
		cout << "Phone No. : " << demo[5] << endl;
		cout << "Email : " << demo[6] << endl;
		cout << "Occupation : " << demo[7] << endl;
		cout << "Company : " << demo[8] << endl;
		breakLine();
	}
}
void modAscii() {
	system("CLS");
	cout << "  __  __           _ _ _    __       \n";
	cout << " |  \\/  | ___   __| (_) |_ / _|_   _ \n";
	cout << " | |\\/| |/ _ \\ / _` | | __| |_| | | |\n";
	cout << " | |  | | (_) | (_| | | |_|  _| |_| |\n";
	cout << " |_|  |_|\\___/ \\__,_|_|\\__|_|  \\__, |\n";
	cout << "                               |___/ \n";
	breakLine();
}
void modRec() {
	system("CLS");
	//TODO Searching inplementation
	int selection;
	string query;
	string demo[9] = { "Mr.","Donald","Trump","1999-9-9","whitehouse, washington DC,USA","99999999","donaldtrump@world.com","president of USA","United States of America" };
	string colName[9] = { "Title","Given Name","Surname","Date Of Birth","Address","Phone No.","Email","Occupation","Company" };
	modAscii();
	cout << "filter content using: \n";
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
	
	int totalResult = 6;
	int currResult = 0;
	int recOnPage = 0;
	modAscii();
	cout << "Entry(s) found with selected criteria: \n";
	while (currResult<=totalResult) {
		if (recOnPage != 2&&currResult<totalResult) {
			cout << "Index: " << currResult+1 << endl;
			cout << "Full Name : " << demo[0] << " " << demo[1] << " " << demo[2] << endl;
			//cout << "1. Title : " << demo[0] << endl;
			//cout << "2. Surname : " << demo[1] << endl;
			//cout << "3. GivenName : " << demo[2] << endl;
			cout << "4. DateOfBirth : " << demo[3] << endl;
			cout << "5. Address : " << demo[4] << endl;
			cout << "6. Phone No. : " << demo[5] << endl;
			cout << "7. Email : " << demo[6] << endl;
			cout << "8. Occupation : " << demo[7] << endl;
			cout << "9. Company : " << demo[8] << endl << endl;
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
					currResult = currResult - 2;
				}
				recOnPage = 0;
				modAscii();
				cout << "Entry(s) found with selected criteria: \n";

			}
			else if (query == "p" || query == "P") {
				if (currResult <= 2) {
					modAscii();
					cout << "There are no preveous page avalible, please re-enter your action.\n";
					system("pause");
					currResult = 0;
					recOnPage = 0;
					modAscii();
					cout << "Entry(s) found with selected criteria: \n";

				}
				else {
					currResult = currResult - 4;
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
	}

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