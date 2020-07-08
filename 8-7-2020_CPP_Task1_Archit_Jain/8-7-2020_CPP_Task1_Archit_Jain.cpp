#include<bits/stdc++.h>
#include<string.h>
using namespace std;

//class personal
class Personal
{
    //data members
    protected:
    string name, surname, address, dob;
    double mobile;
    //default constructor
    protected:
    Personal()
    {
        name = "Default name";
        surname = "Default_surname";
        address = " Default_address";
        mobile = 1112223334;
        dob = "01-01-2001";
    }
    //display output
    public:
    void personalDisplay()
    {
        cout << "\nPersonal details---";
        cout << "\nName : " << name;
        cout << "\nSurname : " << surname;
        cout << "\nAddress : " << address;
        cout << "\nMobile : " << mobile;
        cout << "\nDOB : " << dob;
    }
    //input data
    public:
    void getPersonalData()
    {
        cout << "\nEnter personal details---" << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Surname : ";
        cin >> surname;
        cout << "Address : ";
        cin >> address;
        cout << "Mobile : ";
        cin >> mobile;
        cout << "DOB : ";
        cin >> dob;   
    }
};

//class professional
class Professional
{
    //data members
    protected:
    string nameOfOrganization, jobProfile, project;
    //default constructor
    protected:
    Professional()
    {
        nameOfOrganization = "Default nameOfOrganization";
        jobProfile = "Default_jobProfile";
        project = " Default_project";
    }
    //display output
    public:
    void professionalDisplay()
    {
        cout << "\nProfessional details---";
        cout << "\nName of organization : " << nameOfOrganization;
        cout << "\nJob profile : " << jobProfile;
        cout << "\nProject : " << project;
    }
    //input data
    public:
    void getProfessionalData()
    {
        cout << "\nEnter professional details---" << endl;
        cout << "Name of organization: ";
        cin >> nameOfOrganization;
        cout << "Job profile : ";
        cin >> jobProfile;
        cout << "Project : ";
        cin >> project;
    }
};

//class academic
class Academic
{
    //data members
    protected:
    string yearOfPassing, collegeName, branch;
    double cgpa;
    //default constructor
    protected:
    Academic()
    {
        yearOfPassing = "Default year";
        collegeName = "Default_college_name";
        branch = " Default_branch";
        cgpa = 0;
    }
    //display output
    public:
    void academicDisplay()
    {
        cout << "\nAcademic details---";
        cout << "\nYear of passing : " << yearOfPassing;
        cout << "\nCollege name : " << collegeName;
        cout << "\nBranch : " << branch;
        cout << "\nCGPA : " << cgpa;
    }
    //input data
    public:
    void getAcademicData()
    {
        cout << "\nEnter personal details---" << endl;
        cout << "Year of passing : ";
        cin >> yearOfPassing;
        cout << "College name : ";
        cin >> collegeName;
        cout << "Branch : ";
        cin >> branch;
        cout << "CGPA : ";
        cin >> cgpa;  
    }
};


class BioData: public Personal, public Professional, public Academic
{
    public:
    void biodisplay() { int rollno; cout << "\nEnter the student roll no : "; cin >> rollno; }
};

int main()
{
    BioData b1;
    b1.biodisplay();
    b1.getPersonalData();
    b1.getProfessionalData();
    b1.getAcademicData();

    //output
    cout << "\n\nDETAILS---" << endl;
    b1.personalDisplay();
    b1.academicDisplay();
    b1.professionalDisplay();

}