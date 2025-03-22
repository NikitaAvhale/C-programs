#include <iostream.h>
#include <conio.h>
const int EMP_PROJ = 100;
const int NAME_LENGTH = 50;
const int PROJECT_ID_LENGTH = 20;
const int TITLE_LENGTH = 100;
class Employee {
public:
char name[NAME_LENGTH];
char designation[NAME_LENGTH];
};
class Project {
public:
char project_id[PROJECT_ID_LENGTH];
char title[TITLE_LENGTH];
};
class Emp_Proj : public Employee, public Project {
public:
int duration;
};
Emp_Proj master_table[EMP_PROJ];
int num_projects = 0;
void build_master_table() {
if (num_projects >= EMP_PROJ) {
cout << "Maximum number of projects reached." << endl;
return;
}
cout << "Enter employee name: ";
cin >> master_table[num_projects].name;
cout << "Enter employee designation: ";
cin >> master_table[num_projects].designation;
cout << "Enter project ID: ";
cin >> master_table[num_projects].project_id;
cout << "Enter project title: ";
cin >> master_table[num_projects].title;
cout << "Enter project duration: ";
cin >> master_table[num_projects].duration;
num_projects++;
}
void display_master_table() {
cout << "\nMaster Table:" << endl;
for (int i = 0; i < num_projects; i++) {
cout << "Name: " << master_table[i].name << ", Designation: " <<
master_table[i].designation << endl;
cout << "Project ID: " << master_table[i].project_id << ", Title: " << master_table[i].title <<
endl;
cout << "Duration: " << master_table[i].duration << " days" << endl;
}
}
void bubble_sort_by_duration() {
for (int i = 0; i < num_projects - 1; i++) {
for (int j = 0; j < num_projects - i - 1; j++) {
if (master_table[j].duration > master_table[j + 1].duration) {
Emp_Proj temp = master_table[j];
master_table[j] = master_table[j + 1];
master_table[j + 1] = temp;
}
}
}
}
void display_projects_sorted_by_duration() {
bubble_sort_by_duration();
cout << "\nProjects sorted by duration:" << endl;
display_master_table(); }
int main() {
char choice;
do {
cout << "\nMenu:" << endl;
cout << "a. Build master table" << endl;
cout << "b. Display master table" << endl;
cout << "c. Display projects sorted by duration" << endl;
cout << "x. Exit" << endl;
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 'a':
build_master_table();
break;
case 'b':
display_master_table();
break;
case 'c':
display_projects_sorted_by_duration();
break;
case 'x':
cout << "Exiting program." << endl;
break;
default:
cout << "Invalid choice. Please try again." << endl;
}
} while (choice != 'x');
getch();
return 0;
}