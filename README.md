# ManagementApp
This application creates, updates, searches, deletes and displays all the information required to maintain a student database. 

Languages/tools/editors:
1.	Language : C++20 : ISO/IEC 14882:2020 (informally known as C++20)
2.	Tools : Codeblocks-20.03mingw-setup.exe
3.	Editor : Riya Nagpal

ALGORITHM :
START
1.	Declare struct Address
2.	Struct variables :  string street_Name, string city_Name, string postal_Code, string province
3.	Declare struct Person 
4.	Struct variables : string firstName, string lastName
5.	Declare struct Student 
6.	Struct variables : int stud_Number, Person person, Address address, string email, string ph_number
7.	Declare a vector <Student> VStudent
8.	Declare function add_student()
9.	Ask the user for student information
10.	Read the student information 
11.	Use VStudent.push_back() to add all the information in the vector
12.	End function add_student()
13.	Declare function search_student()
14.	Function Variables : int number, bool studentExists = false;
15.	Ask for the student number from user to search
16.	Read number
17.	FOR (int i=0; i<VStudent.size(); i++)
18.	IF(number == VStudent[i].stud_Number)
19.	Print the student information of that student number
20.	studentExists = true
21.	END IF 
22.	END FOR
23.	IF(!studentExists)
24.	Write “Student doesn’t exist”
25.	END IF
26.	END function search_student()
27.	Declare function modify_studentNumber()
28.	Function variables : int number, string firstName, string lastName, string addressNumberAndStreet, string addressCity, string addressPostalCode, string addressProvinceState, string email,  string phoneNumber, bool studentExists = false;
29.	Ask for the student number from user to modify
30.	Read number
31.	FOR(int i=0; i<VStudent.size(); i++)
32.	IF(number == VStudent[i].stud_Number)
33.	Display student information for the given student number 
34.	Ask user for the new student details they want to update
35.	IF(firstName != "")
36.	VStudent[i].person.firstName = firstName; 
37.	END IF
38.	REPEAT for all student info
39.	Display the new modified student information 
40.	END IF 
41.	END FOR
42.	IF(!studentExists)
43.	Write “Student doesn’t exist”
44.	END IF
45.	End function modify_studentNumber()
46.	Declare function delete_studentInformation()
47.	Function Variable : int studentNumber, bool studentValid = false;
48.	Ask for the student number from user to delete 
49.	Read number
50.	FOR(int i=0; i<VStudent.size(); i++)
51.	IF(studentNumber == VStudent[i].stud_Number)
52.	VStudent.erase(VStudent.begin() + i);
53.	Print “The information has been deleted”
54.	studentValid = true;
55.	END IF 
56.	END FOR
57.	IF(!studentValid)
58.	Write “Student doesn’t exist”
59.	END IF
60.	End function delete_studentInformation()
61.	Declare function display_Student()
62.	IF (VStudent.size() == 0)
63.	Print "Student list is empty" ;
64.	END IF
65.	ELSE
66.	FOR(int i=0 ; i< VStudent.size(); i++)
67.	Print all information
68.	END FOR
69.	END ELSE
70.	Declare MAIN ()
71.	PRINT name and information 
72.	Local variables : int option
73.	DO
74.	Print Menu
75.	Read option
76.	Write option
77.	SWITCH(option)
78.	Case 1: Call add_student()
79.	Case 2: Call search_student()
80.	Case 3: Call modify_studentNumber()
81.	Case 4: Call delete_studentInformation()
82.	Case 5: Call display_Student()
83.	END SWITCH
84.	WHILE option != 0
85.	END DO-WHILE

END

The functions (prototypes):

1.	void add_student() :	It adds the student data, i.e, asks user for student information and saves it in the array. 
2.	void search_student() :	It enables the user to search a student in the database from its student number, and also sends a message if there is not student with that student number.
3.	void modify_studentNumber()	: It enables the user to modify any student details except the student number and updates it in the system and also displays the updated information. 
4.	void delete_studentInformation() :	It enables the user to delete a particular student record by using its student number.
5.	void display_Student() :	It displays all the modified, updated student data that is entered in this application. Also, sends a message if the application doesn’t have any student data. 
