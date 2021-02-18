#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

string fullNames[100];
int ages[100];
string telNumbers[100];

int counter=0;


int main()
{
  system("Color 0D");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
  cout << "\t\t\t\t\t@@*****************************************************************************************@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                  WELCOME TO                                           *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                           HOSPITAL MANAGEMENT SYSTEM                                  *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*                                                                                       *@@\n";
  cout << "\t\t\t\t\t@@*****************************************************************************************@@\n";
  cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
  system("pause");
  
  beginning:
  system("cls");
  int a;
  cout << "                            HOSPITAL MANAGEMENT SYSTEM\n ";
  cout << "\t\t\t\t\t\t _________________________________________________________________ \n";
  cout << "\t\t\t\t\t\t|                                                                |\n";
  cout << "\t\t\t\t\t\t|             1  >> Add New Patient information                  |\n";
  cout << "\t\t\t\t\t\t|             2  >> Registered patients                          |\n";
  cout << "\t\t\t\t\t\t|             3  >> Doctors informations                         |\n";
  cout << "\t\t\t\t\t\t|             4  >> Information About the Hospital               |\n";
  cout << "\t\t\t\t\t\t|             5  >> Exit the Program                             |\n";
  cout << "\t\t\t\t\t\t|________________________________________________________________|\n";
  cout << "Please choose following options" << endl; cin >> a;
  if (a > 5 || a < 1)
  {
    cout << "PLease enter the correct option!" << endl;
  }
  if(a==1)
  {
        system("cls");
      string fullName,contactNumber;
      int age;
      cout << "Please fill following conditions in order to add new patient !" << endl;
    cin.ignore();
      cout << "Name: "; getline(cin, fullName);
      cout << "Age: "; cin>>age;
          cout << "Contact number: "; cin>>contactNumber;
      
      fullNames[counter] = fullName;
      ages[counter] = age;
      telNumbers[counter] = contactNumber;
      counter ++;
    }
  if (a == 2)
  {
      system("cls");
      cout<<" These are registered patients:"<<endl;
      for(int i=0;i<counter; i++){
          cout<<" ["<<i+1<<"] Patient name: "<<fullNames[i]<<" | Age: "<<ages[i]<<" | Contact: "<<telNumbers[i]<<endl;
      }
      
  }
  if (a == 3)
  {    
      system("cls");
    int m;

    cout << "\t\t\t\t\t\t _________________________________________________________________ \n";
    cout << "\t\t\t\t\t\t|                                                               |\n";
    cout << "\t\t\t\t\t\t|             1 ->> Optic                                        |\n";
    cout << "\t\t\t\t\t\t|             2 ->> Therapy                                      |\n";
    cout << "\t\t\t\t\t\t|             3 ->> Neurology                                    |\n";
    cout << "\t\t\t\t\t\t|             4 ->> Surgeon                                      |\n";
    cout << "\t\t\t\t\t\t|             5 ->> Cardiologist                                 |\n";
      cout << "\t\t\t\t\t\t|             6 ->> Pediatrics                                                  |\n";
    cout << "\t\t\t\t\t\t|________________________________________________________________|\n\n";
    cout << "Choose doctor: "; cin >> m;
    switch (m)
    {
    case 1: cout << "Name: Jack Smith\nAge: 32\nSpecialist: Specialist in Optician\n Contact number: +21233122" << endl;
      break;
    case 2: cout << "Name: Lassio\nAge: 38\nSpecialist: Specialist in Therapyontact number: +34442323" << endl;
      break;
    case 3:cout << "Name: Smurchakson Cho\n Age: 45\nSpecialist: Specialist in Neurology\nContact number: +23223330" << endl;
      break;
    case 4:cout << "Name: Adriana\nAge: 37\nSpecialist: Specialist in Surgeon\nContact number: +23123432 " << endl;
      break;
    case 5:cout << "Name: Clare\nAge: 29\nSpecialist: Specialist in Cardiologist\nContact number: +7628777 " << endl;
      break;
    case 6:cout << "Name: Ali\nAge: 25\nSpecialist: Specialist in Pediatrics\nContact number: +4342849 " << endl;
    }
  }
  if (a == 4)
  {
    cout<<"Shifo Nur Clinic has been operating since 2001. In those years, the clinic was a pioneer in Uzbekistan in the use of laser energyand the technology of small incisions for cataract surgery, and for the first time in the country introduced excimer - laser vision correction.During its existence, the clinic has become one of the leading medical institutions in the country, emerging as a modern multidisciplinary institution providing a full range of high - tech services for adultsand children, serving their patients with due respectand confidence.The clinic has provided highly qualified diagnostic care to tens of thousands of patients, performed thousands of microsurgical, laser, refractive, reconstructive plastic surgeries at the highest technological level.Achieving this simple task was made possible by the team’s constant work to improve their knowledge, improve the clinic’s technical equipment, and improve the quality of patient care.Special attention is paid to the provision of specialized ophthalmologicaland otorhinolaryngological care to the population of remoteand densely populated areas of the country.For this purpose, four branches of the clinic in Samarkand, Bukhara, Karshiand Urgench are equipped with modern equipmentand train highly qualified personnel.In March 2017, the construction of a new building of the main clinic in Tashkent was completed.This complex is one of the most modern medical institutions"<<endl;
  }
  if(a == 5) return 0;
  system("pause");
  goto beginning;
  
  return 0;
}