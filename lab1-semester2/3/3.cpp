#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        string studentId;
        string studentName;
        double oop2Score;
        double mathScore;
        double englishScore;
    public:
        void setStudentId(string studentId){
            this->studentId = studentId;
        }
        string getStudentId(){
            return this->studentId;
        }

        void setStudentName(string studentName){
            this->studentName = studentName;
        }
        string getStudentName(){
            return this->studentName;
        }

        void setOOP2Score(double oop2Score){
            this->oop2Score = oop2Score;
        }
        double getOOP2Score(){
            return this->oop2Score;
        }

        void setEnglishScore(double englishScore){
            this->englishScore = englishScore;
        }
        double getEnglishScore(){
            return this->englishScore;
        }

        void setMathScore(double mathScore){
            this->mathScore = mathScore;
        }
        double getMathScore(){
            return this->mathScore;
        }

        double getTotalScore(){
            return (oop2Score + mathScore + englishScore);
        }
        double getAvarageScore(){
            return (getTotalScore())/3.0;
        }


};

int main(){
    Student me;

    string studentId;
    string studentName;
    int englishScore;
    int mathScore;
    int oop2Score;

    cout<<"Student ID: ";
    cin>>studentId;
    cout<<"Student Name: ";
    cin>>studentName;
    cout<<"English score: ";
    cin>>englishScore;
    cout<<"Math score: ";
    cin>>mathScore;
    cout<<"OOP2 score: ";
    cin>>oop2Score;


    me.setStudentId(studentId);
    me.setStudentName(studentName);
    me.setEnglishScore(englishScore);
    me.setMathScore(mathScore);
    me.setOOP2Score(oop2Score);

    cout<<
        "Student id: "<<me.getStudentId()<<"\n"<<
        "Student name: "<<me.getStudentName()<<"\n"<<
        "Math score: "<<me.getMathScore()<<"\n"<<
        "English score: "<<me.getEnglishScore()<<"\n"<<
        "OOP2 score: "<<me.getOOP2Score()<<"\n"<<
        "Total score: "<<me.getTotalScore()<<"\n"<<
        "Avarage score: "<<me.getAvarageScore()<<"\n";

}
