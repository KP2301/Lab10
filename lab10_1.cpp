#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double Loan, Percent_inter , Pay;
	cout << "Enter initial loan: ";
	cin >> Loan;
	cout << "Enter interest rate per year (%): ";
	cin >> Percent_inter;
	cout << "Enter amount you can pay per year: ";
	cin >> Pay;

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
	int n = 1 ; 
	double Interest , Total , NewBalance = 1 ;
	while(Pay != Total){
	cout << fixed << setprecision(2); 

	Interest = (Loan*Percent_inter)/100;

	Total = Loan + Interest;
	if(Pay > Total){
		Pay = Total;
	}
	NewBalance = Total - Pay;
	cout << setw(13) << left << n ; 
	cout << setw(13) << left << Loan ;
	cout << setw(13) << left << Interest ;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Pay;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	n++;
	if(NewBalance != 0){
	Loan = NewBalance;
	}

	}
	return 0;
}