
#include <iostream>
#include <string>
using namespace std;


class Date {
    public:
    Date(int year, int month, int day) {
        this -> year = year;
        this -> month = month;
        this -> day = day;
    }
    int getYear() {
        return year;
    }
    int getMonth() {
        return month;
    }
    int getDay() {
        return day;
    }
    void printDate() {
        cout << year << "/" << month << "/" << day << endl;
    }

private:
    int year;
    int month;
    int day;
};
class HeartRate {
public:
    HeartRate(Date date, string firstName, string lastName){
        this->firstName = firstName;
        this->lastName = lastName;
        dateOfBirth = date;
    }

    int getMaxHeartRate() {
        return 220 - calculateAge(dateOfBirth.getYear());
    }
    int getTargetHeartRate() {
        return getMaxHeartRate() * 0.5;
    }

private:
    string firstName;
    string lastName;
    Date dateOfBirth = Date(0,0,0);
    int age;
    int calculateAge(int year) {
        return age = 2025 - year;
    }

};
int main() {
    string firstName;
    string lastName;

    int year;
    int month;
    int day;

    cout <<  "input you name : ";
    cin >> firstName;

    cout <<  "input you last name : ";
    cin >> lastName;

    cout <<  "input your date of brith : " << endl;
    cout << "input your year : ";
    cin >> year;

    while (true) {
        cout <<  "input your month : ";
        cin >> month;
        if (month > 12 || month < 1) {
            cout << "month should be between 1 and 12" << endl;
            continue;
        }
        break;
    }
    while (true){
        cout <<  "input your day : ";
        cin >> day;
        if (day > 31 || day < 1) {
            cout << "day should be between 1 and 31" << endl;
            continue;
        }
        break;
    }
    Date dateOfBirth = Date(year, month, day);
    HeartRate heartRate = HeartRate(dateOfBirth, firstName, lastName);

    cout << "maximum heart rate is : " << heartRate.getMaxHeartRate() << endl;
    cout << "target hear rate is : " << heartRate.getTargetHeartRate() << endl;


}