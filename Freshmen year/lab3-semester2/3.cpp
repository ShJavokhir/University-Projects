//bits/stdc++ is the best library i can prefer :)
#include<bits/stdc++.h>
using namespace std;


class FullName;
//this is class to store users full name, like first name, middle name and last name;
class FullName{
    private:
        string firstName;
        string middleName;
        string lastName;
    public:
        //this is constructor to set initial values of class
        FullName(string firstName, string middleName, string lastName){
            this->firstName = firstName;
            this->middleName = middleName;
            this->lastName = lastName;
        }
        //this is destructor and can be used to delete object of class
        ~FullName(){
                cout<<"Object of FullName was deleted\n";
        }

        //the next 6 functions are boring getter and setter function :/
        void setFirstName(string firstName){
            this->firstName = firstName;
        }
        void setMiddleName(string middleName){
            this->middleName = middleName;
        }
        void setLastName(string lastName){
            this->lastName = lastName;
        }
        string getFirstName(){
            return firstName;
        }
        string getMiddleName(){
            return middleName;
        }
        string getLastName(){
            return lastName;
        }
        friend class Player;
};

//defining player class
class Player{
    private:
        string playerId;
        FullName *playerName; //this is the worst line that wasted my much time
        int matchesPlayed;
        int goalsScored;
    public:
        //this is constructor again
        Player(string playerId,FullName &playerName, int matchesPlayed, int goalsScored){
            this->playerId = playerId;
            this->playerName = new FullName(playerName);
            this->matchesPlayed = matchesPlayed;
            this->goalsScored = goalsScored;
        }
        //defining distructor
        ~Player(){
            cout<<"Object of Player class was deleted\n";
        }

        //below boring getter setters
        void setPlayerId(string playerId){
            this->playerId = playerId;
        }
        void setPlayerName(FullName playerName){
            this->playerName = new FullName(playerName);
        }
        void setMatchesPlayed(int matchesPlayed){
            this->matchesPlayed = matchesPlayed;
        }
        void setGoalsScored(int goalsScored){
            this->goalsScored = goalsScored;
        }

        string getPlayerId(){
            return playerId;
        }
        FullName getPlayerName(){
            return *playerName;
        }
        int getMatchesPlayed(){
            return matchesPlayed;
        }
        int getGoalsScored(){
            return goalsScored;
        }
        void printPlayerInfo(){
            cout
                <<"Player id: "<<playerId<<endl
                <<"First name: "<<(*playerName).firstName<<endl
                <<"Middle name: "<<(*playerName).middleName<<endl
                <<"Last name: "<<(*playerName).lastName<<endl
                <<"Matches played: "<<matchesPlayed<<endl
                <<"Goals scored: "<<goalsScored<<endl<<endl;


        }
        //main part is here which we are defining friend function that we learned
        friend void increaseScoredGoals(Player &player, int goalToIncrease);
};


//this function can be used to increase goals to increase
void increaseScoredGoals(Player &player, int goalToIncrease){
    player.goalsScored +=  goalToIncrease;
}

int main(){

    //main function

    //getting information of player
    cout<<"Please enter player informations:\n";
    string firstName, middleName, lastName, playerId;
    int matchesPlayed, goalsScored;
    cout<<"Enter player id: "; cin>>playerId;
    cout<<"Enter first name: "; cin>>firstName;
    cout<<"Enter middle name: "; cin>>middleName;
    cout<<"Enter last name: "; cin>>lastName;
    cout<<"Enter played matches: ";cin>>matchesPlayed;
    cout<<"Enter scored goals: ";cin>>goalsScored;

    FullName fullName(firstName, middleName, lastName);
    Player javokhir(playerId, fullName, matchesPlayed, goalsScored);

    javokhir.printPlayerInfo();

    cout<<"If you want to increase scored goals then type the score or type 0: ";
    cin>>goalsScored;

    increaseScoredGoals(javokhir, goalsScored);

    javokhir.printPlayerInfo();
}
