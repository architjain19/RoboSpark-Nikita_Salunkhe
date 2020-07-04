#include<bits/stdc++.h>
using namespace std;

//class of student details
class Student_details{
    public:
    string name = "My_Default_Name";//default conditions if details not provided
    int roll=00;
    int id=00;
};

//showrank function for only integer
void showRank(int r)
{
    cout << r;
}
//showrank function for only student details
void showRank(string name, int roll, int id)
{
    cout << "\nNo integer passed, therefore student details are ---"<< endl;
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Id: " << id << endl;
}
//showrank function for both student details and integer
void showRank(string name, int roll, int id, int r)
{
    cout << "\nBoth rank and student details are ---"<< endl;
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Id: " << id << endl;
    cout << "Rank: " << r << endl;
}


int main()
{
    int rank;
    Student_details s1;     
    int user_in;

    //user input
    cout << "Enter---\n1. to print only rank.\n2. to print only student details.\n3. to print rank ank student details both.\nInput : ";
    cin >> user_in;

    //if elif condition
    if (user_in==1)
    {   //1
        cout << "Enter a rank : ";
        cin >> rank;
        cout << "Only integer passed, therefore rank is : ";
        showRank(rank);
    }
    else if (user_in==2)
    {   //2
        cout << "\nEnter student details --- \n";
        cout << "Name: ";
        cin >> s1.name;
        cout << "Roll no : ";
        cin >> s1.roll;
        cout << "Id : ";
        cin >> s1.id;   
        showRank(s1.name, s1.roll, s1.id);
    }
    else
    {   //3
        cout << "\nEnter student details --- \n";
        cout << "Name: ";
        cin >> s1.name;
        cout << "Roll no : ";
        cin >> s1.roll;
        cout << "Id : ";
        cin >> s1.id;
        cout << "Enter a rank : ";
        cin >> rank;
        showRank(s1.name, s1.roll, s1.id, rank);
    }

    return 0;
}