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
void modRec() {
	system("CLS");
	//TODO ascii art with MODIFY
	//TODO Searching inplementation
	int selection;
	string demo[9] = { "Mr.","Donald","Trump","1999-9-9","whitehouse, washington DC,USA","99999999","donaldtrump@world.com","president of USA","United States of America" };
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
	cout << "Select the Column you want to Modify(input the corresponding number: ";
	cin >> selection;
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