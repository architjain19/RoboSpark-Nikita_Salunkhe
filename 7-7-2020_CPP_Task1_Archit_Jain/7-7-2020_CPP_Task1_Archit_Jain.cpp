#include<bits/stdc++.h>
#include<string.h>

using namespace std;

//class definition
class User_string{
   private:
           //character array to denote string 
           char str[30];
   public:
  
          //function declarations 
          void getdata();
          void display();
          void operator== (User_string str1);
          void operator= (User_string str1);
          void operator+ (User_string str1);
          void operator<< (User_string str1);
          void operator>> (User_string str1);
        //   void operator* (int n);

User_string operator* (int n)
    {
              User_string c;
              char a[50]="";
              strcpy(a, this->str);
              for (int i = 0; i < n-1; i++)
              {
                  strcat(a, this->str);
              }
              cout << "\nString multiplication is : " << a << endl;   
    }
};
//input data
void User_string::getdata()
{
  cout<<"\nEnter the string : ";
  cin>>str;
}
//  ==
void User_string::operator== (User_string str1)
{
   strcpy(str1.str,str);
   cout<<"\nCopied String is : "<<str1.str;
}
//   =
void User_string::operator= (User_string str1)
{
   if(strcmp(str,str1.str)==0)
     cout << "\nThe Strings are equal";  //strings are equal
	 
     cout << "\nThe Strings are not equal";;  //strings are not equal
}
//   +
void User_string::operator+ (User_string str1)
{
   strcat(str,str1.str);
   cout<<"\nString After Concatination is : "<<str;
}
//   <<
void User_string::operator<< (User_string str1)
{
   cout<<"\nThe string you entered is :"<<str1.str;
}
//   >>
void User_string::operator>> (User_string str1)
{
   int i;
   cout<<"\nThe string after reversing is : ";
   for(i=strlen(str1.str);i>=0;i--)
   cout<<str1.str[i];
}


int main()
{
 	//object declaration
    User_string a, b;
	
    a.getdata();
    b.getdata();
    a==b;
    a+b;
    a=b;
    a<<b;
    a>>b;
    User_string c=b*3;
    
    return 0;
}