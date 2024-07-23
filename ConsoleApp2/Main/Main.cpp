// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>
#include <vector>

int main()
{

    // idea: classical dungeons and dragons style game

    vector<string> gameCheckpoints = {
        "Get out of cell",
        "Kill Warden",
        "Kill heroes in the heroes wasteland",
        "kill the judge",
        "go through the labryinth of the unworthy",
        "slay cerberus",
        "slay satan's generals",
        "slay satan",
    };

    int userProgress{ 0 };

    // Introduction / setup
    cout << "Welcome to HellSpawn!" << endl;

    cout << "What is your name?" << endl;

    // enter name
    string userName = {};

    cin >> userName;

    cout << "You have chosen the name " << userName << ". Is that OK?" << endl;
    cout << "type Y for Yes or N for No." << endl;


    string userConfirm = {};

    cin >> userConfirm;


    cout << "What is your class? \n";

    string characterClasses[5] = {"warrior", "mage", "paladin", "warlock", "priest"};

    string userChosenClass = {};
    cin >> userChosenClass;

    cout << "you have chosen " << userChosenClass << ". Is that OK? Y/n" << endl;

    string userConfirmation{};

    cin >> userConfirmation;

    if (userConfirmation == "Y" || userConfirmation == "y") {
        cout << "DEBUG: user confirmed selection." << endl;
    } else if (userConfirmation == "N" || userConfirmation == "n") {
        cout << "DEBUG: user did not want this class." << endl;
    }
    else {
        cout << "Your answer didn't match the requested format, defaulting to warrior. " << endl;

        // for now, default to warrior
        userChosenClass = "warrior";
    }

    string warriorStory = "You are the warrior. You were forged by the flames of the demon lord kaz'en. Fight on!";

    cout << warriorStory << endl;


    cout << "You wake up in what appears to be a prison cell. You don't remember how you got here." << endl;

    cout << "You can barely keep your eyes open, your head aches and moans but you feel the pain subside while your desire to kill comes rushing back." << endl;

    cout << "What say you." << endl;

    cout << "1. Feel the area around you." << endl;
    cout << "2. Get up and walk." << endl;
    cout << "3. Go back to sleep." << endl;

    

    
    int userChoice{ 0 };
    cin >> userChoice;

    switch (userChoice) {
    case 1:
        cout << "You have chosen option 1, which is incorrect." << endl;
        break;
    case 2:
        cout << "You have chosen option 2, which is incorrect." << endl;
        break;
    case 3:
        cout << "You have chosen option 3, which is correct." << endl;
        userProgress++;
        break;
    default:
        cout << "invalid response, please try again." << endl;
    }


    cout << "you now stand before the warden, what do you do?" << endl;

    cin >> userChoice;

    switch (userChoice) {
    case 1:
        cout << "You have chosen option 1, which is incorrect." << endl;
        break;
    case 2:
        cout << "You have chosen option 2, which is incorrect." << endl;
        break;
    case 3:
        cout << "You have chosen option 3, which is correct." << endl;
        userProgress++;
        break;
    default:
        cout << "invalid response, please try again.";
    }

    // event loop

    // present checkpoint event state
    cout << "You now stand in the wasteland of heroes, what do you do now?" << endl;

    // ask for user input
    cin >> userChoice;


    // evaluate user input for event state
    switch (userChoice) {
    case 1:
        cout << "You have chosen option 1, which is incorrect." << endl;
        break;
    case 2:
        cout << "You have chosen option 2, which is incorrect." << endl;
        break;
    case 3:
        cout << "You have chosen option 3, which is correct." << endl;
        userProgress++;
        break;
    default:
        cout << "invalid response, please try again.";
    }


    // present event state
    cout << "You now stand before the judge, what do you do now?" << endl;

    // ask for user input
    cin >> userChoice;


    // evaluate user input for event state
    switch (userChoice) {
    case 1:
        cout << "You have chosen option 1, which is incorrect." << endl;
        break;
    case 2:
        cout << "You have chosen option 2, which is incorrect." << endl;
        break;
    case 3:
        cout << "You have chosen option 3, which is correct." << endl;
        userProgress++;
        break;
    default:
        cout << "invalid response, please try again.";
    }


    cout << "You now stand before Satan, what do you do now?" << endl;

    // ask for user input
    cin >> userChoice;


    // evaluate user input for event state
    switch (userChoice) {
    case 1:
        cout << "You have chosen option 1, which is incorrect." << endl;
        break;
    case 2:
        cout << "You have chosen option 2, which is incorrect." << endl;
        break;
    case 3:
        cout << "You have chosen option 3, which is correct." << endl;
        userProgress++;
        break;
    default:
        cout << "invalid response, please try again.";
    }

    if (userProgress == gameCheckpoints.size()) {
        cout << "YOU WIN!" << endl;
    }

}


    // how do we manage seperate stories / outcomes? 
    // edit: not important this time around

    // will need to create "events" to go through

    // the game will have 10 events

    // 1. get through prison cell
    // * sleep (option 3) wait for prison guard to come by
    // -> when prison guard wakes up champion, champion grabs guard and snatches key as well as his equipment
    // -> warden hears noise in the distance
    // -> warden approaches champion 
    // 2. kill warden
    // -> retrieve wardens loot
    // -> includes a schedule of prisoners to be judged
    // -> you must go to the heroes wasteland to arrive for your trial date
    // 3. find the heroes wasteland
    // // * heroes that are awaiting judgement
    // // heroes that until judged are forced to walk aimlessly until they are judged
    // 
    // 4. defeat people in the heroes wasteland
    // 5. let "the judge" come out
    // 6. kill the judge
    // * find orders from Satan about killing more heroes to satisfy his hunger for heroes flesh
    // * "I'm gonna fucking kill Satan"
    // * killing the judge gives you special bloodlust powers where you can smash tf of your foes
    // * + 500 unarmed (lol idk) 
    // 7. go through the labryinth of the unworthy
    // 8. slay cerberus
    // 9. slay satan's generals
    // 10. slay satan
    // 11. become him 
    //

    // my theory is that if I can create a simple version of this where its literally getting user's to type Y as they go through the game, we can add complexity to it after knowing 
    // we have the end goal / general game's lore structure figured out




   




    // end Introduction/setup


    // Build world (?)
    // 

    // character is created...

    // Whats next? We're spawned into the dungeons and dragons world
    // what is "we" 

    // We are a champion with a name, clothes, inventory,
    // clothes - helmet, shoulder, necklace, shirt, chest, waist, pants, gloves, boots, and weapons
    // 
    // warrior starts with basic armor
    // -> warrior is a type of champion
    // champion has slots of type equipment -> (branch into weapons v armor)
    // 
    // Head - {{name?}}
    // 23 armor
     
    // Shoulder - {{name?}}
    // 35 armor

    // Neck - {{name?}}
    // 17 armor

    // Chest - {{name?}}
    // 37 armor

    // Waist - {{name?}}
    // 16 armor

    // Pants - {{name?}}
    // 32 armor

    // Feet - {{name?}}
    // 17 armor

    // Great, we've created a champion 

    // champion is given a story
    // 
    // champion is presented with options to progress through story
    // 

    // (no longer relevant)
    // story (in outlined terms)
    // you are a warrior that wakes up in a dungeon
    // you don't know how you got there

    // however, the reality is you're a fallen champion that is now in 
    // hell and you must answer for your crimes.
    // your official trial date is set for ___________, where you 
    // will come face to face with ___________, who will sentence you for your crimes
    // 
    // one path (the first path we'll develop) is to break free of your cell and bash your way 
    // into the head honcho, Satan. 
    // 
    // Along the way you'll find lots and lots of monsters, bosses,  etc.
    // 
    // so path 1, we break free from the cell
    // 
    // break free from cell by smashing the cell door  (with your herculean strength)
    // walk through cell door
    // 
    // in the hallway is your warden
    // warden charges you to fight
    // 
    // user can fight back
    // 
    // user smashes warden
    // user collects loot from warden, discover trial schedule
    // ....
    // ....
    // ....
    // ....
    // ....
    //
    // You find Satan and you smash his face in
    // You become the new ruler of hell 
    //



    