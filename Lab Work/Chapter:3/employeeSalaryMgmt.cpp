#include <iostream>
#include <iomanip>
using namespace std;


// Overload function for Full-time employee (basic salary only)
double calculateSalary(double basicSalary) {
    return basicSalary;
}

// Overload function for Employee with bonus
double calculateSalary(double basicSalary, double bonus) {
    return basicSalary + bonus;
}

// Overload function for Employee with bonus and overtime
double calculateSalary(double basicSalary, double bonus, double overtimeHours, double hourlyRate) {
    double overtimePay = overtimeHours * (hourlyRate * 1.5); // Overtime at 1.5x rate
    return basicSalary + bonus + overtimePay;
}



// Inline function to calculate 10% tax 
inline double taxDeduction(double salary) {
    return salary * 0.1; // 10% tax rate
}


// Function to display salary details
void displaySalaryDetails(double grossSalary) {
    double tax = taxDeduction(grossSalary);

    cout << "\n" << "=== Employee Salary ===" << endl;
    cout << fixed << setprecision(2);
    cout << "Gross Salary:  Rs. " << grossSalary << endl;
    cout << "Tax (10%):     Rs. " << tax << endl;
    cout << "Net Salary :    Rs. " << grossSalary - tax << endl;
}


int main() {

    cout << "   EMPLOYEE SALARY MANAGEMENT SYSTEM" << endl;
    double basicSalary, bonus, overtimeHours, hourlyRate;
    char workOvertime;

    cout << "Enter Basic Salary: Rs. ";
    cin >> basicSalary;
    cout << "Enter Bonus: Rs. ";
    cin >> bonus;
    
    // know if employee works overtime
    cout << "Does employee work overtime? (Y/N): ";
    cin >> workOvertime;
    
    if (workOvertime == 'Y' || workOvertime == 'y') {
        cout << "Enter Overtime Hours: ";
        cin >> overtimeHours;
        
        cout << "Enter Hourly Rate: Rs. ";
        cin >> hourlyRate;
    } else if (workOvertime == 'N' || workOvertime == 'n') {
        // No overtime
        overtimeHours = 0;
        hourlyRate = 0;
    }else {
        cout << "Invalid input for overtime. Assuming no overtime." << endl;
        overtimeHours = 0;
        hourlyRate = 0;
    }

    double grossSalary = calculateSalary(basicSalary, bonus, overtimeHours, hourlyRate);
    displaySalaryDetails(grossSalary);

    return 0;
}
