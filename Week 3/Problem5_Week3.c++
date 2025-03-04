#include<iostream>
using namespace std;

class Voter{
private:
    int age;
    string name, address, voterID, password;

public:
    void registerVoter();
    void login();
    void vote();
};

class Candidate{
private:
    string name, party, candidateID;

public:
    void registerCandidate();
    void displayCandidate();
};

class Election{
private:
    string electionID, electionName, electionDate, electionResult;

public:
    void createElection();
    void displayElection();
};

class Admin{
private:
    string adminID, password;

public:
    void login();
    void addVoter();
    void addCandidate();
    void addElection();
    void displayVoter();
    void displayCandidate();
    void displayElection();
};

int main(){
    return 0;
}
