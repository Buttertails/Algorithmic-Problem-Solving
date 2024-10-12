/*
 * Project 2
 * Write a program to implement a student information management system. The system is
 * used to manage students’ information, including student ID, name, and grade
 * Author: Drew Elliott
 * Date: Nov 21, 2023
*/
#include<iostream>

using namespace std;

void menu();
void addStudent(int id[], string name[], int grade[], int numStudents);
void idSearch(int grade[], string name[], int numStudents);
int averageGrade(int a[], int numStudents);
int highestGrade(int a[], int numStudents);
int lowestGrade(int a[], int numStudents);
void removeStudent(int id[], string name[], int grade[], int numStudents);
void display(int id[], string name[], int grade[], int numStudents);

int main()
{
    const int MAX = 100;
    int idArr[MAX], gradeArr[MAX], choice, grade, id, numStudents = 0;
    string nameArr[MAX], name;

    do
    {
        menu();
        cin >> choice;

        if(choice == 1) //Add student
        {
            cout << endl;
            addStudent(idArr, nameArr, gradeArr, numStudents);
            numStudents++;
        }
        else if(choice == 2) //search by ID
        {
            cout << endl;
            idSearch(gradeArr, nameArr, numStudents);           
        }
        else if(choice == 3) //grade statistics 
        {
            cout << endl;
            cout << "Grade Statistics" << endl;
            cout << "Average: " << averageGrade(gradeArr, numStudents) << endl;
            cout << "Lowest Grade: " << lowestGrade(gradeArr, numStudents) << endl;
            cout << "Highest Grade: " << highestGrade(gradeArr, numStudents) << endl;
        }
        else if(choice == 4) //remove student
        {
            cout << endl;
            removeStudent(idArr, nameArr, gradeArr, numStudents);
            numStudents--;
        }
        else if(choice == 5) //display students
        {
            display(idArr, nameArr, gradeArr, numStudents);
        }
        else if(choice == 6) //Exit program
        {
            cout << "Goodbye!" << endl;
        }
        else
        {
            cout << "ERROR: INVALID MENU ENTRY!" << endl;
        }
    }
    while(choice != 6 && numStudents <= MAX);

    if(numStudents >= 100)
    {
        cout << "ERROR: SYSTEM AT CAPACITY!" << endl;
    }

    return 0;
}

void menu()
{
    cout << "\n**** CSCI 1010 Student Information Management System ****" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Search by ID" << endl;
    cout << "3. Grades Statistics" << endl;
    cout << "4. Remove a student" << endl;
    cout << "5. Print all students" << endl;
    cout << "6. Exit the system" << endl;
    cout << "Selection: ";
}

void addStudent(int id[], string name[], int grade[], int numStudents)
{
    id[numStudents] = numStudents + 1;
    cout << "ID for new student: " << id[numStudents] << endl;

    cout << "Enter name of student (Lastname,Firstname): ";
    cin >> name[numStudents];

    cout << "Enter grade of student: ";
    cin >> grade[numStudents];
}

void idSearch(int grade[], string name[], int numStudents)
{
    int id;

    do
    {
        cout << "Please enter the ID: ";
        cin >> id;

        if(id < 1 || id > numStudents)
        {
            cout << "ERROR: ID OUT OF RANGE!" << endl;
        }
    }
    while(id < 1 || id > numStudents);

    cout << "\nStudent ID: " << id << endl;
    cout << "Student name: " << name[id - 1] << endl;
    cout << "Student grade: " << grade[id - 1] << endl;
}

int averageGrade(int a[], int numStudents)
{
    int sum = 0;

    for(int i = 0; i < numStudents; i++)
    {
        sum += a[i];
    }

    return (sum / numStudents);
}

int highestGrade(int a[], int numStudents)
{
    int highest = a[0];

    for(int i = 1; i < numStudents; i++)
    {
        if(a[i] > highest)
        {
            highest = a[i];
        }
    }
    
    return highest;
}

int lowestGrade(int a[], int numStudents)
{
    int lowest = a[0];

    for(int i = 1; i < numStudents; i++)
    {
        if(a[i] < lowest)
        {
            lowest = a[i];
        }
    }
    
    return lowest;
}

void removeStudent(int id[], string name[], int grade[], int numStudents)
{
    int idInput;
    do
    {
        cout << "Please enter the ID: ";
        cin >> idInput;

        if(idInput < 1 || idInput > numStudents)
        {
            cout << "ERROR: ID OUT OF RANGE" << endl;
        }
    }
    while(idInput < 1 || idInput > numStudents);

    for(int i = numStudents - 1; i > idInput - 1; i--)
    {
        id[i - 1] = id[i];
        grade[i - 1] = grade[i];
        name[i - 1] = name[i];
    }

    cout << "Student " << name[idInput - 1] << " has been removed from the database." << endl;
}

void display(int id[], string name[], int grade[], int numStudents)
{
    cout << endl;

    cout.width(5);
    cout.setf(ios_base::left);
    cout << "ID";

    cout.width(15);
    cout.setf(ios_base::left);
    cout << "Name" << "Grade" << endl;

    for(int i = 0; i < numStudents; i++)
    {
        cout.width(5);
        cout.setf(ios_base::left);
        cout << id[i];

        cout.width(15);
        cout.setf(ios_base::left);
        cout << name[i] << grade[i] << endl;
    }
}

