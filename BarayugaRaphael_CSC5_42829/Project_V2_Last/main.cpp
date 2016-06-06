/*
 * File: main.cpp
 * Author: Raphael M.B. Barayuga
 * Purpose: Game Project_V2
 * Updated June 4, 2016, 10:11 AM
 * 
 */

#include <iostream>
#include <cstdlib>  //Rand and Set Random
#include <ctime>  
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
//

//Functions


//Begins

using namespace std;

void ratbatl(int&, vector<int>v, int&, int&, string[][3]);
void gobbatl(int&, vector<int>v, int&, int&, string[][3]);
void orcbatl(int&, vector<int>v, int&, int&, string[][3]);

int main() {
    srand(static_cast<unsigned int> (time(0)));
    string file[500][3];
    int counter = 0;
    int win = 0;
    int lose = 0;
    char *a[counter];
    vector<int>v;
    //Variables
    char qst;
    
    
    
    
    int battle;

    // Ask player for input
    cout << "Press Y to start or Press anything else to quit" << endl;
    cin >> qst;

    // If the player wants to start or not
    if (qst == 'y' || qst == 'Y') {
        cout << "You start with and have 25 health after every battle" << endl;
        cout << "You must roll a 20 sided dice to determine if attacks land"
                << endl;

        do { //Loop to repeat battle

            //Ask what battle
            cout << "Please select what monster you would like to fight"
                    << endl;

            cout << "Battle (1) rat" << endl;
            cout << "Battle (2) goblin" << endl;
            cout << "Battle (3) orc" << endl;
            cin >> battle;
            cout << "Your battle will begin shortly" << endl;

            //Choose Monster to fight
            switch (battle) {
                    cout << "Please select what monster you would like to fight"
                            << endl;
                case 1: ratbatl(counter, v, win, lose, file)
                            ;
                    break;
                case 2: gobbatl(counter, v, win, lose, file)
                            ;
                    break;
                case 3: orcbatl(counter, v, win, lose, file)
                            ;
                    break;

            }



            cout << "Play again? Y/N ? " << endl;
            cin >> qst;

        } while (qst == 'Y' || qst == 'y');
    }
    return 0;
}

void ratbatl(int& counter, vector<int>v, int& win, int& lose, string file[][3]) {

    ifstream infile; //f stream 
    ofstream outfile;
    infile.open("RatScore.txt"); // opening streams
    outfile.open("RatScore.txt");
    char c = infile.get(); // getting data
    while (infile.good()) {
        c = infile.get();
        cout << "Past data:" << c; // Won't work

    }
    infile.close(); // closing infile


    //Declare variables


    srand(static_cast<unsigned int> (time(0)));

    int playhp = 25;
    int rathp = 10;
    int sword = 4;
    int ratdmg = 2;


    //for Player
    cout << "You have 25 health and your sword does 4 damage" << endl;
    cout << "The rat has approached you." << endl;
    cout << "The rat has 10 health and does 2 damage" << endl;
    cout << "begin combat" << endl;

    //Loop for combat
    do {
        int d20, md20; //Dice
        int roll;
        d20 = rand() % 20 + 1; //The Roll
        md20 = rand() % 20 + 1; //Monster Roll

        cout << "Press any number to roll" << endl;
        cin >> roll;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Please Enter A Number" << endl;
            cin >> roll;
        }
        if (d20 >= 10) {
            cout << "You rolled a " << d20 << endl;
            cout << "Hit" << endl;
            rathp = (rathp - sword);
            cout << "Remaining health for Rat = " << rathp << endl;
        } else if (d20 < 10) {
            cout << "You rolled a " << d20 << " You missed" << endl;
        }
        if (rathp <= 0) {
            cout << "You have defeated the Rat!" << endl;
            v.push_back(0);
            for (int i = 0; i < counter + 1; i++) {


                file[i][counter] = "Round "; // Column index 0
                outfile << file[i][counter];
                string temp;
                ostringstream convert;
                int num = i + 1;
                convert << (num);
                temp = convert.str(); //Converting int to string
                file[i][counter + 1] = temp;
                outfile << file[i][counter + 1]; //Outputting Round # to the file

                file[i][counter + 2] = "  Rat"; // Column index 2, all available rows
                outfile << file[i][counter + 2] << endl;


            }

            counter++; //incrementors for games played and wins
            win++;
            cout << "Check match history? Y or y for yes" << endl;
            string resp;
            cin >> resp; // user response
            if (resp == "Y" || "y") {
                cout << "Wins: " << win << endl; // Total wins and losses
                cout << "Loses: " << lose << endl;
                outfile << "Total Wins: " << win << "     Total Losses: " << lose
                        << endl;
            }
            return;
        }

        cout << "Roll for Rat" << endl;
        cin >> roll;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Please Enter A Number" << endl;
            cin >> roll;
        }
        if (md20 >= 10) {
            cout << "Rat rolled a " << md20 << endl;
            cout << "You have been hit" << endl;
            playhp = (playhp - ratdmg);
            cout << "You have " << playhp << " health left" << endl;
        } else if (md20 < 10) {
            cout << "Rat rolled a " << md20 << endl;
            cout << "The Rat missed you" << endl;
        }

        if (playhp <= 0) {
            v.push_back(1);
            for (int i = 0; i < counter + 1; i++) {

                file[i][counter] = "Round "; // Same code as above.. Should've
                outfile << file[i][counter]; // made a function
                string temp; // temporary value to hold converted int
                ostringstream convert;
                int num = i + 1;
                convert << (num);
                temp = convert.str();
                file[i][counter + 1] = temp;
                outfile << file[i][counter + 1];

                file[i][counter + 2] = "  Rat";
                outfile << file[i][counter + 2] << endl;

            }
            counter++; //Games played incrementor -1 actually
            lose++; // losses incremetor
            cout << "Check match history? Y or y for yes" << endl;
            string resp;
            cin >> resp;
            if (resp == "Y" || "y") {
                cout << "Wins: " << win << endl;
                cout << "Loses: " << lose << endl;
                outfile << "Total Wins: " << win << "     Total Losses: " << lose
                        << endl;
            }

            return;
        }

    } while (playhp >= 0 && rathp >= 0);


    outfile.close(); //closing ofstream

    return;
}

void gobbatl(int& counter, vector<int>v, int& win, int& lose, string file[][3]) {

    ifstream infile; //f stream 
    ofstream outfile;
    infile.open("GobScore.txt"); // opening streams
    outfile.open("GobScore.txt");
    char c = infile.get(); // getting data
    while (infile.good()) {
        c = infile.get();
        cout << "Past data:" << c; // Won't work

    }
    infile.close(); // closing infile


    srand(static_cast<unsigned int> (time(0)));

    //Variables
    int playhp = 25;
    int gobhp = 15;
    int sword = 4;
    int gobdmg = 2;

    //for Player
    cout << "Press any number to roll" << endl;
    cout << "You have 25 health and your sword does 4 damage" << endl;
    cout << "The goblin has approached you." << endl;
    cout << "The goblin has 15 health and does 2 damage" << endl;
    cout << "begin combat" << endl;

    for (playhp = 25, gobhp = 15; playhp >= 0 && gobhp >= 0;) {

        int d20, md20; //Dice
        int roll; //user input

        d20 = rand() % 20 + 1; //The Roll
        md20 = rand() % 20 + 1; //Monster Roll

        cout << "Press any number to roll" << endl;
        cin >> roll;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Please Enter A Number" << endl;
            cin >> roll;
        }
        if (d20 >= 10) {
            cout << "You rolled a " << d20 << endl;
            cout << "Hit" << endl;

            gobhp = (gobhp - sword); // calculate the hp that is left after attack

            cout << "Remaining health for Goblin = " << gobhp << endl;
        } else if (d20 < 10) {
            cout << "You rolled a " << d20 << " You missed" << endl;
        }

        if (gobhp <= 0) {
            cout << "You have defeated the Goblin!" << endl;
            v.push_back(0);
            for (int i = 0; i < counter + 1; i++) {


                file[i][counter] = "Round "; // Column index 0
                outfile << file[i][counter];
                string temp;
                ostringstream convert;
                int num = i + 1;
                convert << (num);
                temp = convert.str(); //Converting int to string
                file[i][counter + 1] = temp;
                outfile << file[i][counter + 1]; //Outputting Round # to the file

                file[i][counter + 2] = "  Goblin"; // Column index 2, all available rows
                outfile << file[i][counter + 2] << endl;


            }

            counter++; //incrementors for games played and wins
            win++;
            cout << "Check match history? Y or y for yes" << endl;
            string resp;
            cin >> resp; // user response
            if (resp == "Y" || "y") {
                cout << "Wins: " << win << endl; // Total wins and losses
                cout << "Loses: " << lose << endl;
                outfile << "Total Wins: " << win << "     Total Losses: " << lose
                        << endl;
            }
            return;
        }


        cout << "Roll for Goblin" << endl;
        cin >> roll;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Please Enter A Number" << endl;
            cin >> roll;
        }
        if (md20 >= 10) {
            cout << "Goblin rolled a " << md20 << endl;
            cout << "You have been hit" << endl;

            playhp = (playhp - gobdmg); // calculate the hp that is left after attack

            cout << "You have " << playhp << " health left" << endl;
        } else if (md20 < 10) {
            cout << "Goblin rolled a " << md20 << endl;
            cout << "The Goblin missed you" << endl;
        }

        if (playhp <= 0) {
            cout << "You have died" << endl;
            v.push_back(1);
            for (int i = 0; i < counter + 1; i++) {

                file[i][counter] = "Round "; // Same code as above.. Should've
                outfile << file[i][counter]; // made a function
                string temp; // temporary value to hold converted int
                ostringstream convert;
                int num = i + 1;
                convert << (num);
                temp = convert.str();
                file[i][counter + 1] = temp;
                outfile << file[i][counter + 1];

                file[i][counter + 2] = "  Goblin";
                outfile << file[i][counter + 2] << endl;

            }


            counter++; //Games played incrementor -1 actually
            lose++; // losses incremetor
            cout << "Check match history? Y or y for yes" << endl;
            string resp;
            cin >> resp;
            if (resp == "Y" || "y") {
                cout << "Wins: " << win << endl;
                cout << "Loses: " << lose << endl;
                outfile << "Total Wins: " << win << "     Total Losses: " << lose
                        << endl;
            }

            outfile.close(); //closing ofstream

            return;
        }
    }
}

void orcbatl(int& counter, vector<int>v, int& win, int& lose, string file[][3]) {

    ifstream infile; //f stream 
    ofstream outfile;
    infile.open("OrcScore.txt"); // opening streams
    outfile.open("OrcScore.txt");
    char c = infile.get(); // getting data
    while (infile.good()) {
        c = infile.get();
        cout << "Past data:" << c; // Won't work

    }
    infile.close(); // closing infile


    srand(static_cast<unsigned int> (time(0)));

    //variables
    int d20;
    int md20;
    int playhp = 25;
    int orchp = 20;
    int sword = 4;
    int orcdmg = 3;

    //Info for player
    cout << "Press any number to roll" << endl;
    cout << "You have 25 health and your sword does 4 damage" << endl;
    cout << "The orc has approached you." << endl;
    cout << "The orc has 20 health and does 3 damage" << endl;
    cout << "begin combat" << endl;

    //Loop for combat
    while (playhp >= 0 && orchp >= 0) {
        d20 = rand() % 20 + 1; //The Roll
        md20 = rand() % 20 + 1; //Monster Roll
        int roll;

        cout << "Press any number to roll" << endl;
        cin >> roll;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Please Enter A Number" << endl;
            cin >> roll;
        }
        if (d20 >= 10) {
            cout << "You rolled a " << d20 << endl;
            cout << "Hit" << endl;

            orchp = (orchp - sword); // calculate the hp that is left after attack

            cout << "Remaining health for Orc = " << orchp << endl;
        } else if (d20 < 10) {
            cout << "You rolled a " << d20 << " You missed" << endl;
        }

        if (orchp <= 0) {
            cout << "You have defeated the Orc!" << endl;
            v.push_back(0);
            for (int i = 0; i < counter + 1; i++) {


                file[i][counter] = "Round "; // Column index 0
                outfile << file[i][counter];
                string temp;
                ostringstream convert;
                int num = i + 1;
                convert << (num);
                temp = convert.str(); //Converting int to string
                file[i][counter + 1] = temp;
                outfile << file[i][counter + 1]; //Outputting Round # to the file

                file[i][counter + 2] = "  Orc"; // Column index 2, all available rows
                outfile << file[i][counter + 2] << endl;


            }

            counter++; //incrementors for games played and wins
            win++;
            cout << "Check match history? Y or y for yes" << endl;
            string resp;
            cin >> resp; // user response
            if (resp == "Y" || "y") {
                cout << "Wins: " << win << endl; // Total wins and losses
                cout << "Loses: " << lose << endl;
                outfile << "Total Wins: " << win << "     Total Losses: " << lose << endl;
            }
            return;
        }

        cout << "Roll for Orc" << endl;
        cin >> roll;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Please Enter A Number" << endl;
            cin >> roll;
        }
        if (md20 >= 10) {
            cout << "Orc rolled a " << md20 << endl;
            cout << "You have been hit" << endl;

            playhp = (playhp - orcdmg); // calculate the hp that is left after attack

            cout << "You have " << playhp << " health left" << endl;
        } else if (md20 < 10) {
            cout << "Orc rolled a " << md20 << endl;
            cout << "The Orc missed you" << endl;
        }
        if (playhp <= 0) {
            v.push_back(1);
            for (int i = 0; i < counter + 1; i++) {

                file[i][counter] = "Round "; // Same code as above.. Should've
                outfile << file[i][counter]; // made a function
                string temp; // temporary value to hold converted int
                ostringstream convert;
                int num = i + 1;
                convert << (num);
                temp = convert.str();
                file[i][counter + 1] = temp;
                outfile << file[i][counter + 1];

                file[i][counter + 2] = "  Orc";
                outfile << file[i][counter + 2] << endl;

            }

            counter++; //Games played incrementor -1 actually
            lose++; // losses incremetor
            cout << "Check match history? Y or y for yes" << endl;
            string resp;
            cin >> resp;
            if (resp == "Y" || "y") {
                cout << "Wins: " << win << endl;
                cout << "Loses: " << lose << endl;
                outfile << "Total Wins: " << win << "     Total Losses: " << lose
                        << endl;
            }

            outfile.close(); //closing ofstream

            return;
        }
    }
}


