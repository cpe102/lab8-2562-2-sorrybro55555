#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	float money,interest,amount,payment,i,b,n;
	
	cout << "Enter intitial loan: ";
	cin >> money;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	float total = money+(money/100)*interest;
	n = money;
	int year = 1;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";	
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(n > 0){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << money;
		cout << setw(13) << left << (money/100)*interest;
		cout << setw(13) << left << total;
		
		if(total >= amount){
			payment = amount;
		
		}else{
		payment = total;
		}
		cout << setw(13) << left << payment;
		n = total - payment;
		money = n;
		cout << setw(13) << left << n;
		cout << "\n";	
		year ++;
		total = money+(money/100)*interest;
	} 
		
	
	
	return 0;
}
