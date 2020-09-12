#include <iostream>
using namespace std;
struct student
{
    string name;
    int number;
    int birth;
    int admission;
};
struct ocenki
{
    string physic;
    string math;
    string programming;
    string history;
};

student InputInfo (student stud){
    cout << "Enter last name" << endl;
    cin >> stud.name;
    cout << "Enter number" << endl;
    cin >> stud.number;
    cout << "Enter birthday" << endl;
    cin >> stud.birth;
    cout << "enter the year of admission" << endl;
    cin >> stud.admission;
    return stud;
}
void PrintInfo (student stud) {
    cout << "Name:" << stud.name << endl;
    cout << "Number:" << stud.number << endl;
    cout << "Birthday:" << stud.birth << endl;
    cout << "Year admission:" << stud.admission << endl;
}
int main(){
    student frstCharacter, scndCharacter;
    cout << "1st person" << endl;
    frstCharacter = InputInfo(frstCharacter);
    cout << endl;
    PrintInfo(frstCharacter);
    cout << endl;
    cout << "2nd person" << endl;
    scndCharacter = InputInfo(scndCharacter);
    cout << endl;
    PrintInfo(scndCharacter);
    cout << endl;
    cout << "It’s true that the average score of both students is above 4.0?" << endl;
    cout << endl;

}




