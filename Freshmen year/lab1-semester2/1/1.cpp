#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        string studentId;
        string studentName;
        double oop2_score;
        double math_score;
        double english_score;
        double totalScore;
        double ctotal(){
            return english_score + math_score + oop2_score;
        };

    public:
        takeData(
            string studentId,
            string studentName,
            double oop2_score,
            double math_score,
            double english_score
        ){
            this->studentId = studentId;
            this->studentName = studentName;
            this->oop2_score = oop2_score;
            this->math_score = math_score;
            this->english_score = english_score;
            this->totalScore = ctotal();
        };
        showData(){
            cout<<
                "Student ID: "<<studentId<<"\n"<<
                "Student Name: "<<studentName<<"\n"<<
                "OOP2 score: "<<oop2_score<<"\n"<<
                "Math score: "<<math_score<<"\n"<<
                "English score: "<<english_score<<"\n"<<
                "Total score: "<<totalScore;
        };
};

int main(){
    Student st;
    st.takeData("aa", "bb", 2, 3, 5);
    st.showData();
}
