#include<bits/stdc++.h>
using namespace std;

//class of student details
class Student_details{
    public:
    string name = "My_Default_Name";//default conditions if details not provided
    int roll=00;
    int id=00;

//showrank function for only integer
void showRank(int r)
{
    cout << "\nFunction 1 ---\nOnly integer passed, therefore rank is : " << r << endl;
}
//showrank function for only student details
void showRank(string name, int roll, int id)
{
    cout << "\nFunction 2 ---\nNo integer passed, therefore student details are ---"<< endl;
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Id: " << id << endl;
}
//showrank function for both student details and integer
void showRank(string name, int roll, int id, int r)
{
    cout << "\nFunction 3 ---\nBoth rank and student details are ---"<< endl;
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Id: " << id << endl;
    cout << "Rank: " << r << endl;
}

void getInput()
{
        cout << "\nEnter student details --- \n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll no : ";
        cin >> roll;
        cout << "Id : ";
        cin >> id;   
}

};

int main()
{
    int rank;
    Student_details *s1 = new Student_details;     
    int user_in;

    s1->getInput();
    cout << "Enter a rank : ";
    cin >> rank;

    //calling three functions
    s1->showRank(rank);
    s1->showRank(s1->name, s1->roll, s1->id, rank);
    s1->showRank(s1->name, s1->roll, s1->id);

    return 0;
}