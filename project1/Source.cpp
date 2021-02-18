/*JUSHKINBEK BEKNIYOZOV U2010047
 HOSPITAL MANAGEMENT PROJECT*/
#include<iostream>//header file
#include<windows.h>
#include<string>
using namespace std;
int main()//main function
{/*Print welcome hospital management system in square*/
	system("Color 0A");//color text in green
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout << "\t\t\t\t\t@@*****************************************************************************************@@\n";
	cout << "\t\t\t\t\t@@*                                           		                                  *@@\n";
	cout << "\t\t\t\t\t@@*                                           		                                  *@@\n";
	cout << "\t\t\t\t\t@@*                                           		                                  *@@\n";
	cout << "\t\t\t\t\t@@*                                           		                                  *@@\n";
	cout << "\t\t\t\t\t@@*                                           		                                  *@@\n";
	cout << "\t\t\t\t\t@@*                                           		                                  *@@\n";
	cout << "\t\t\t\t\t@@*                                  WELCOME TO                                           *@@\n";
	cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
	cout << "\t\t\t\t\t@@*                           HOSPITAL MANAGEMENT SYSTEM                                  *@@\n";
	cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
	cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
	cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
	cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
	cout << "\t\t\t\t\t@@                                                                                        *@@\n";
	cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
	cout << "\t\t\t\t\t@@*****************************************************************************************@@\n";
	cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	cout << "                            HOSPITAL MANAGEMENT SYSTEM\n ";
	system("pause");
	system("cls");
	int a;                  /*for add information patient or doctors information and hospital information*/
	cout << "\t\t\t\t\t\t _________________________________________________________________ \n";
	cout << "\t\t\t\t\t\t|                                           	                  |\n";
	cout << "\t\t\t\t\t\t|             1  >> Add New Patient information                  |\n";
	cout << "\t\t\t\t\t\t|             2  >> Doctors informations                         |\n";
	cout << "\t\t\t\t\t\t|             3  >> Information of Hospital Management           |\n";
	cout << "\t\t\t\t\t\t|             4  >> Exit the Program                             |\n";
	cout << "\t\t\t\t\t\t|             5  >> Contact Admin                                |\n";
	cout << "\t\t\t\t\t\t|________________________________________________________________|\n";
	cout << "Please choose following options" << endl; cin >> a;//choose following option and input from the user
	if (a > 5 || a < 1)// if input >5 or <1 then print please enter the correct option
	{
		cout << "PLease enter the correct option!" << endl;
	}
	if (a == 1)//if a=1 then fill form of patient
	{
		string fullname;
		cout << "Please fill following conditions!" << endl;
		cout << "Enter your information:"; getline(cin, fullname);
		cout << "Name: "; getline(cin, fullname);
		cout << "Age: "; getline(cin, fullname);
		cout << "Adress: "; getline(cin, fullname);
		cout << "Contact number: "; getline(cin, fullname);
		cout << "Blood Group: "; getline(cin, fullname);
		cout << "Which sick you before: "; getline(cin, fullname);
		cout << "Patient's ID: "; getline(cin, fullname);
		cout << "You have successfully registered! " << endl;
	}
	if (a == 2)//if a=2 to show doctor's information
	{
		system("cls");
		int m;
		cout << "\t\t\t\t\t\t _________________________________________________________________ \n";
		cout << "\t\t\t\t\t\t|                                           	                  |\n";
		cout << "\t\t\t\t\t\t|             1 ->> Optic                                        |\n";
		cout << "\t\t\t\t\t\t|             2 ->> Therapy                                      |\n";
		cout << "\t\t\t\t\t\t|             3 ->> Neurology                                    |\n";
		cout << "\t\t\t\t\t\t|             4 ->> Surgeon                                      |\n";
		cout << "\t\t\t\t\t\t|             5 ->> Cardiologist                                 |\n";
		cout << "\t\t\t\t\t\t|             6 ->> Pediatrics                                   |\n";
		cout << "\t\t\t\t\t\t|             7 ->> Dentist                                      |\n\n";
		cout << "\t\t\t\t\t\t|________________________________________________________________|\n\n";
		cout << "Choose option: "; cin >> m;
		switch (m)//using switch statement
		{
		case 1: cout << "Name: Jack Smith\nAge: 32\nSpecialist: Specialist in Optician\nContact number: +21233122\nworking days: Monday, Tuesday, Wednesday" << endl;
			break;
		case 2: cout << "Name: Lassio\nAge: 38\nSpecialist: Specialist in Therapy Contact number: +34442323\nWorking days: Monday, Wednesday, Friday" << endl;
			break;
		case 3:cout << "Name: Smurchakson Cho\n Age: 45\nSpecialist: Specialist in Neurology\nContact number: +23223330\nWorking days: Tuesday, Wednesday, Friday" << endl;
			break;
		case 4:cout << "Name: Adriana\nAge: 37\nSpecialist: Specialist in Surgeon\nContact number: +23123432\nWorking days: Monday, Friday, Saturday " << endl;
			break;
		case 5:cout << "Name: Clare\nAge: 29\nSpecialist: Specialist in Cardiologist\nContact number: +7628777\nWorking days: Monday,Tuesday, Thursday " << endl;
			break;
		case 6:cout << "Name: Ali\nAge: 25\nSpecialist: Specialist in Pediatrics\nContact number: +4342849\nWorking days: Monday,Tuesday,Friday " << endl;
			break;
		case 7:cout << "Name: Jamshid\nAge: 34\nSpecialist: Specialist in Dentist\nContact number: +29383918\nWorking days: Monday,Tuesday,Wednesday " << endl;
			break;
		}
	}
	if (a == 3)//if a=3 print information of hospital
	{
		cout << "Shifo Nur Clinic has been operating since 2001. In those years, the clinic was a pioneer in Uzbekistan in the use of laser energyand the technology of small incisions for cataract surgery, and for the first time in the country introduced excimer - laser vision correction.During its existence, the clinic has become one of the leading medical institutions in the country, emerging as a modern multidisciplinary institution providing a full range of high - tech services for adultsand children, serving their patients with due respectand confidence.The clinic has provided highly qualified diagnostic care to tens of thousands of patients, performed thousands of microsurgical, laser, refractive, reconstructive plastic surgeries at the highest technological level.Achieving this simple task was made possible by the team’s constant work to improve their knowledge, improve the clinic’s technical equipment, and improve the quality of patient care.Special attention is paid to the provision of specialized ophthalmologicaland otorhinolaryngological care to the population of remoteand densely populated areas of the country.For this purpose, four branches of the clinic in Samarkand, Bukhara, Karshiand Urgench are equipped with modern equipmentand train highly qualified personnel.In March 2017, the construction of a new building of the main clinic in Tashkent was completed.This complex is one of the most modern medical institutions" << endl;
	}
	if (a == 4)
	{
		cout << "Error 404" << endl;
	}
	if (a == 5)
	{
		cout << "*Created by JUSHKINBEK BEKNIYOZOV\nTelegram: @Jushkinbek_Rashidovich\nContact number : +998994766432" << endl;
	}
	system("pause");
}
