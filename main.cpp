#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Address
{
    string street_Name;
    string city_Name;
    string postal_Code;
    string province;

};

struct Person
{
    string firstName;
    string lastName;

};

struct Student
{
    int stud_Number;
    Person person;
    Address address;
    string email;
    string ph_number;

};

Student student;

vector <Student> VStudent;

void add_student()
{
    cout << "Enter the Student number : " ;
    cin >> student.stud_Number;
    cout << "Enter the first name of student : ";
    cin.ignore();
    getline(cin, student.person.firstName);
    cout << "Enter the last name of student : ";
    getline(cin, student.person.lastName);
    cout << "Enter the Address of the student" << endl;
    cout << "Number and Street Name : ";
    getline(cin, student.address.street_Name);
    cout << "City Name : ";
    getline(cin, student.address.city_Name);
    cout << "Postal Code : ";
    getline(cin, student.address.postal_Code);
    cout << "Province/State : ";
    getline(cin, student.address.province);
    cout << "Enter the student email address : ";
    getline(cin, student.email);
    cout << "Enter the phone number : ";
    getline(cin, student.ph_number);

    VStudent.push_back({student.stud_Number, student.person.firstName, student.person.lastName,
                        student.address.street_Name, student.address.city_Name, student.address.postal_Code, student.address.province,
                        student.email, student.ph_number});

}

void search_student()
{
    int number;
    bool studentExists = false;

    cout << "Enter the student number to search : " ;
    cin >> number;

    for(int i=0; i<VStudent.size(); i++)
    {
        if(number == VStudent[i].stud_Number)
        {
            cout << "\n|-------------------------------------------------------------------------------| " << endl;
            cout << "| " << setw(12) << "| " << "Student Number : " << VStudent[i].stud_Number << endl;
            cout << "| " << setw(12) << "| "  << "Student Name : " << VStudent[i].person.firstName << " " << VStudent[i].person.lastName << endl;
            cout << "| " << setw(12) << "| "  << "Student Address : " << VStudent[i].address.street_Name << ", " << VStudent[i].address.city_Name << ", " <<
                 VStudent[i].address.postal_Code << ", " << VStudent[i].address.province << endl;
            cout << "| " << setw(12) << "| "  << "Student Email : " << VStudent[i].email << endl;
            cout << "| " << setw(12) << "| "  << "Student Phone Number : " << VStudent[i].ph_number << endl;
            cout << "|-------------------------------------------------------------------------------| " << endl;
            studentExists = true;
        }
    }
    if(!studentExists)
    {
        cout << "Student doesn't exist" << endl;
    }
}



void modify_studentNumber()
{
    int number;
    string firstName;
    string lastName;
    string addressNumberAndStreet;
    string addressCity;
    string addressPostalCode;
    string addressProvinceState;
    string email;
    string phoneNumber;
    bool studentExists = false;

    cout << "Enter the student number to modify : " ;
    cin >> number;

    for(int i=0; i<VStudent.size(); i++)
    {
        if(number == VStudent[i].stud_Number)
        {
            cout << "\n|-------------------------------------------------------------------------------| " << endl;
            cout << "| " << setw(12) << "| " << "Student Number : " << VStudent[i].stud_Number << endl;
            cout << "| " << setw(12) << "| "  << "Student Name : " << VStudent[i].person.firstName << " " << VStudent[i].person.lastName << endl;
            cout << "| " << setw(12) << "| "  << "Student Address : " << VStudent[i].address.street_Name << ", " << VStudent[i].address.city_Name << ", " <<
                 VStudent[i].address.postal_Code << ", " << VStudent[i].address.province << endl;
            cout << "| " << setw(12) << "| "  << "Student Email : " << VStudent[i].email << endl;
            cout << "| " << setw(12) << "| "  << "Student Phone Number : " << VStudent[i].ph_number << endl;
            cout << "|-------------------------------------------------------------------------------| " << endl;

            cout << VStudent[i].stud_Number << endl;

            cout << "Enter the new first name : " ;
            cin.ignore();
            getline(cin, firstName);

            if(firstName != "")
            {
                VStudent[i].person.firstName = firstName;
            }

            cout << "Enter the new last name : ";
            getline(cin, lastName);

            if(lastName != "")
            {
                VStudent[i].person.lastName = lastName;
            }

            cout << "Enter the new address- number and street name : ";
            getline(cin, addressNumberAndStreet);

            if(addressNumberAndStreet != "")
            {
                VStudent[i].address.street_Name = addressNumberAndStreet;
            }

            cout << "Enter the new city : ";
            getline(cin, addressCity);

            if(addressCity != "")
            {
                VStudent[i].address.city_Name = addressCity;
            }

            cout << "Enter the new postal code : ";
            getline(cin, addressPostalCode);

            if(addressPostalCode != "")
            {
                VStudent[i].address.postal_Code = addressPostalCode;
            }

            cout << "Enter the new Province : ";
            getline(cin, addressProvinceState);

            if(addressProvinceState != "")
            {
                VStudent[i].address.province = addressProvinceState;
            }

            cout << "Enter the New Email: ";
            getline(cin, email);
            if (email != "")
            {
                VStudent[i].email = email;
            }
            cout << "Enter the New Phone No.: ";
            getline(cin, phoneNumber);
            if (phoneNumber != "")
            {
                VStudent[i].ph_number = phoneNumber;
            }

            cout << "\nNew Student data has been saved." << endl << endl;
            cout << "|-------------------------------------------------------------------------------| " << endl;
            cout << "| " << setw(12) << "| " << "Student Number : " << VStudent[i].stud_Number << endl;
            cout << "| " << setw(12) << "| "  << "Student Name : " << VStudent[i].person.firstName << " " << VStudent[i].person.lastName << endl;
            cout << "| " << setw(12) << "| "  << "Student Address : " << VStudent[i].address.street_Name << ", " << VStudent[i].address.city_Name << ", " <<
                 VStudent[i].address.postal_Code << ", " << VStudent[i].address.province << endl;
            cout << "| " << setw(12) << "| "  << "Student Email : " << VStudent[i].email << endl;
            cout << "| " << setw(12) << "| "  << "Student Phone Number : " << VStudent[i].ph_number << endl;
            cout << "|-------------------------------------------------------------------------------| " << endl;

            studentExists = true;


        }
    }

    if(!studentExists)
    {
        cout << "Student doesn't exist" << endl;
    }
}

void delete_studentInformation()
{
    int studentNumber;
    bool studentValid = false;

    cout << "Enter Student number to erase : " ;
    cin >> studentNumber;

    for(int i=0; i<VStudent.size(); i++)
    {
        if(studentNumber == VStudent[i].stud_Number)
        {
            VStudent.erase(VStudent.begin() + i);
            cout << "The student information has been deleted" << endl ;
            studentValid = true;
        }
    }
    if(!studentValid)
    {
        cout << "Invalid student Information" << endl;
    }

}

void display_Student()
{
    if (VStudent.size() == 0)
    {
        cout << "Student list is empty" ;
    }

    else
    {
        for(int i=0 ; i< VStudent.size(); i++)
        {
            cout << "\n|-------------------------------------------------------------------------------| " << endl;
            cout << "| " << setw(12) << "| " << "Student Number : " << VStudent[i].stud_Number  << endl;
            cout << "| " << setw(12) << "| " << "Name : " << VStudent[i].person.firstName << " " << VStudent[i].person.lastName  << endl;
            cout << "| " << setw(12) << "| " << "Address : " << VStudent[i].address.street_Name << ", " << VStudent[i].address.city_Name << ", " <<
                 VStudent[i].address.postal_Code << ", " << VStudent[i].address.province  << endl;
            cout << "| " << setw(12) << "| " << "Email : " << VStudent[i].email << endl;
            cout << "| " << setw(12) << "| " << "Phone Number : " << VStudent[i].ph_number << endl;
            cout << "|-------------------------------------------------------------------------------| " << endl;

        }
    }
}

int main()
{
    cout << "|-------------------------------------------------------------------------------| " << endl;
    cout << "|------------------------------ Riya Nagpal - 2220097 --------------------------| "<< endl;
    cout << "|------------------- WELCOME TO STUDENT MANAGEMENT APPLICATION -----------------| "<< endl;
    cout << "|-------------------------------------------------------------------------------| " << endl ;
    cout << "|                                                                               |" << endl;

    int option;
    do
    {

        cout << "\n|---------------------------------- MENU ---------------------------------------| " << endl;
        cout << "|--> Press 1 to Create and add a student.                                       |" << endl;
        cout << "|--> Press 2 to Search for a student by number                                  |" << endl;
        cout << "|--> Press 3 to Modify the information of the student, but its number           |" << endl;
        cout << "|--> Press 4 to Delete the information of the student, with confirmation        |" << endl;
        cout << "|--> Press 5 to Display the student list.                                       |" << endl;
        cout << "|--> Press 0 to Exit the application with confirmation                          |" << endl;
        cout << "|--> Enter your choice :                                                        |" << endl;
        cout << "|-------------------------------------------------------------------------------| " << endl;
        cin >> option;

        switch(option)
        {
        case 1 :
            add_student();
            break;

        case 2 :
            search_student();
            break;

        case 3 :
            modify_studentNumber();
            break;

        case 4 :
            delete_studentInformation();
            break;

        case 5 :
            display_Student();
            break;

        }



    }
    while (option != 0);
    return 0;

}
