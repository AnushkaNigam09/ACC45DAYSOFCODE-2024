#include <iostream>
using namespace std;

//Function declaration to check if the team qualifies or not 
void qualificationcheck(int score){
    //Check if the score is 12 or more
    if (score>=12)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
     cout<<"No"<<endl;   
    }
}
int main() {
    int TeamScore;
    //cout<<"Enter the team's score: "<<endl;     
    cin>>TeamScore;         //Input score from the user
    qualificationcheck(TeamScore);
    return 0;
}  

