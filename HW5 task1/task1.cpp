#include <iostream>
#include <string>
using namespace std;
class personData {
private:
	string lastname, firstname, address, city, state, zip, phone;
public:
	personData(string lastname1, string firstname1, string address1, string city1, string state1, string zip1, string phone1) {
		lastname = lastname1;
		firstname = firstname1;
		address = address1;
		city = city1;
		state = state1;
		zip = zip1;
		phone = phone1;
	}
	void setlastname(string lastname1) { lastname = lastname1; }
	void setfirstname(string firstname1){ firstname = firstname1; }
	void setaddress(string address1) { address = address1; }
	void setcity(string city1) { city = city1; }
	void setstate(string state1) { state = state1; }
	void setzip(string zip1) { zip = zip1; }
	void setphone(string phone1) { phone = phone1; }
	string getlastname() { return lastname; }
	string getfirstname() { return firstname; }
	string getaddress() { return address; }
	string getcity() { return city; }
	string getstate() { return state; }
	string getzip() { return zip; }
	string getphone() { return phone; }
	void displayperson() 
	{ cout << "Last name :" << getlastname() << endl;
	cout << "first name :" << getfirstname() << endl;
	cout << "address :" << getaddress() << endl;
	cout << "city :" << getcity() << endl;
	cout << "state :" << getstate() << endl;
	cout << "zip :" << getzip() << endl;
	cout << "phone :" << getphone() << endl;
	}
};
class CustomerData : public personData {
private:
	int number;
	bool mailing;
public:
	CustomerData(string lastname1, string firstname1, string address1, string city1, string state1, string zip1, string phone1, int number1, bool mailing1): personData( lastname1,  firstname1,  address1,  city1,  state1,  zip1,  phone1) {
		number = number1;
		mailing = mailing1;
	}
	void setnumber(int number1){ number = number1; }
	void setnumber(bool mailing1) { mailing = mailing1; }
	int getnumber() { return number; }
	bool getmailing() {return mailing;}
	void displayperson()
	{
		cout << "number :" << getnumber() << endl;
		cout << "mailing : ";
			if(getmailing()) {
				cout << "true" << endl;
		      }
			else {
				cout << "false" << endl;
			}
	 }
};
int main() {
	string lastname2, firstname2, address2, city2, state2, zip2, phone2;
	int number2,temp,x;
	int i = 0;
	int star = 0;
	bool mailing2;
	char choice, choice3, choice2;
	int *p = nullptr;
	p = new int[10];
	for (int x = 0; x < 10; x++) {
		p[x] = 0;
	}
	
	do {
		do {
			cout << "enter customer number:";
			cin >> number2;

			for (x = 0; x < 10; x++) {

				if (p[x] == number2) {
					cout << "already exist" << endl;
					choice = 'x';
					break;
				}
				else
				{
					choice = 'N';
				}
			}
		} while (choice != 'N');


		p[i] = number2;
		//cout << p[i] << endl;
		i++;
		//delete []p;
		cout << "enter last name:";
		cin >> lastname2;
		cout << "enter first name:";
		cin >> firstname2;
		cout << "enter address:";
		cin >> address2;
		cout << "enter city:";
		cin >> city2;
		cout << "enter state:";
		cin >> state2;
		cout << "enter zip:";
		cin >> zip2;
		cout << "enter phone:";
		cin >> phone2;
		cout << "enter are u want on mailing list? Y/N:";
		cin >> choice3;
		if (choice3 == 'Y') 
		{ 
			mailing2 = true; 
		}
		else
		{
			mailing2 = false;
		}
		
		personData personData1(lastname2, firstname2, address2, city2, state2, zip2, phone2);
		CustomerData CustomerData1(lastname2, firstname2, address2, city2, state2, zip2, phone2, number2, mailing2);
		personData1.displayperson();
		CustomerData1.displayperson();
		cout << "are u want another customer? Y/N";
		cin >> choice2;
	} while (choice2 != 'N'); 

}
