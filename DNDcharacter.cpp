#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "colormod.h"
using namespace std;

    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
    int hitpoints;
    int baseArmorClass;
    int passive;
    int speed;
    bool darkvision;
    string name;
    string initiativeBonus;
    string strMod;
    string dexMod;
    string conMod;
    string intMod;
    string wisMod;
    string chaMod;
    string charClass;
    string race;
    int strST;
    int dexST;
    int conST;
    int intST;
    int wisST;
    int chaST;
    int acrobatics,animalHandling,arcana,athletics,deception,history,insight,intimidation,investigation,medicine,nature,perception,
    performance,persuasion,religion,sleightOfHand,stealth,survival;

// colors 
    string ANSI_RESET = "\x1B[0m";
    string ANSI_BLACK = "\x1B[30m";
    string ANSI_RED = "\x1B[31m";
    string ANSI_GREEN = "\x1B[32m";
    string ANSI_YELLOW = "\x1B[33m";
    string ANSI_BLUE = "\x1B[34m";
    string ANSI_PURPLE = "\x1B[35m";
    string ANSI_CYAN = "\x1B[36m";
    string ANSI_WHITE = "\x1B[37m";
    string ANSI_BRIGHT_BLACK = "\x1B[30;1m";
    string ANSI_BRIGHT_RED = "\x1B[31;1m";
    string ANSI_BRIGHT_GREEN = "\x1B[32;1m";
    string ANSI_BRIGHT_YELLOW = "\x1B[33;1m";
    string ANSI_BRIGHT_BLUE = "\x1B[34;1m";
    string ANSI_BRIGHT_PURPLE = "\x1B[35;1m";
    string ANSI_BRIGHT_CYAN = "\x1B[36;1m";
    string ANSI_BRIGHT_WHITE = "\x1B[37;1m";
    string ANSI_ORANGE = "\x1B[38;5;208m";
    string ANSI_PINK = "\x1B[38;5;206m";
    string ANSI_YELLOW_GREEN = "\x1B[38;5;154m";
    string ANSI_BRIGHT_ORANGE = "\x1B[38;2;255;165;0;1m";
    string ANSI_BRIGHT_MAGENTA = "\x1B[35;1m";
    string ANSI_BRIGHT_TEAL = "\x1B[36;1m";
    string ANSI_BRIGHT_LAVENDER = "\x1B[38;5;207m";
    string ANSI_BRIGHT_CORAL = "\x1B[38;5;203m";
    string ANSI_BRIGHT_GOLD = "\x1B[38;5;220m";
    string ANSI_BRIGHT_OLIVE = "\x1B[38;5;190m";
    string ANSI_BRIGHT_PEACH = "\x1B[38;5;209m";

string calculateSkillMod(int balls) {
        string str;
            if (balls > 0) {
                str = to_string(balls);
                str = "+" + str;
            }
            else {
                str = to_string(balls);
            }
    return str;
}

string makeYes(bool yes) {
    if (yes == true) {
        return "Yes";
    }
        return "No";
}


void printStat() {

    cout << ANSI_BRIGHT_BLACK <<"╭───────────┬────────┬───────────╮" << ANSI_RESET<< endl;
    cout << ANSI_BRIGHT_BLACK <<"│    NAME   │  CLASS │   RACE    │" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLACK<< "╰───────────┴────────┴───────────╯" << ANSI_RESET<< endl;
    cout << ANSI_BRIGHT_GOLD << "Name: " << name << "     " << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_GOLD << "Class: " << charClass << "     " << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_GOLD << "Race: " << race << "     " << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLACK <<"╭───────────┬────────┬───────────╮" << ANSI_RESET<< endl;
    cout << ANSI_BRIGHT_BLACK <<"│ ABILITIES │ SCORES │ MODIFIERS │" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLACK<< "╰───────────┴────────┴───────────╯" << ANSI_RESET<< endl;
    cout << ANSI_BRIGHT_RED     << "Strength:      [" << strength     << "]" << "      (" << strMod << ")" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_ORANGE << "Dexterity:     ["   << dexterity    << "]" << "      (" << dexMod << ")" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_YELLOW  << "Constitution:  [" << constitution <<"]"  << "      (" << conMod << ")" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_GREEN<< "Intelligence:  [" << intelligence <<"]"  << "      (" << intMod << ")" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLUE    << "Wisdom:        [" << wisdom       << "]" << "      (" << wisMod << ")" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_PURPLE << "Charisma:      [" << charisma     << "]" << "      (" << chaMod << ")" <<ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLACK << "──────────────────────────────────" << ANSI_RESET <<endl;
    cout << ANSI_BRIGHT_RED <<    "Hit Points:    [" << hitpoints << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_ORANGE << "Armor Class:   [" << baseArmorClass << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_YELLOW << "Initiative:    [" << initiativeBonus << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_GREEN <<  "Speed:         [" << speed << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLUE    << "Passive P:     [" << hitpoints << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_PURPLE    << "Dark Vision:   [" << makeYes(darkvision) << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLACK <<"╭────────────────────────────────╮" << ANSI_RESET<< endl;
    cout << ANSI_BRIGHT_BLACK <<"│       SAVING THROW MODS        │" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLACK<< "╰────────────────────────────────╯" << ANSI_RESET<< endl;
    cout << ANSI_BRIGHT_RED     << "Strength:      [" << calculateSkillMod(strST)     << "]" <<  ANSI_RESET << endl;
    cout << ANSI_BRIGHT_ORANGE << "Dexterity:     ["   << calculateSkillMod(dexST)    << "]" <<  ANSI_RESET << endl;
    cout << ANSI_BRIGHT_YELLOW  << "Constitution:  [" << calculateSkillMod(conST) <<"]"  << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_GREEN<< "Intelligence:  [" << calculateSkillMod(intST) <<"]"  <<  ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLUE    << "Wisdom:        [" << calculateSkillMod(wisST)       << "]"  << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_PURPLE << "Charisma:      [" << calculateSkillMod(chaST)     << "]"  <<ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLACK <<"╭────────────────────────────────╮" << ANSI_RESET<< endl;
    cout << ANSI_BRIGHT_BLACK <<"│       SKILL PROFICIENCY        │" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLACK<< "╰────────────────────────────────╯" << ANSI_RESET<< endl;
    cout << ANSI_BRIGHT_RED     << "Acrobatics:       [" <<  calculateSkillMod(acrobatics)   << "]"  << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_ORANGE  << "Animal Handling:  ["   << calculateSkillMod(animalHandling)   << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_YELLOW  << "Arcana:           [" << calculateSkillMod(arcana) <<"]"  <<  ANSI_RESET << endl;
    cout << ANSI_BRIGHT_GREEN   << "Athletics:        [" << calculateSkillMod(athletics) <<"]"   << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLUE    << "Deception:        [" << calculateSkillMod(deception)      << "]"  << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_PURPLE  << "History:          [" << calculateSkillMod(history)     << "]"  <<ANSI_RESET << endl;
    cout << ANSI_BRIGHT_RED     << "Insight:          [" << calculateSkillMod(insight)     << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_ORANGE  << "Intimidation:     ["   << calculateSkillMod(intimidation)    << "]"  << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_YELLOW  << "Investigation:    [" << calculateSkillMod(investigation) <<"]"   << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_GREEN   << "Medicine:         [" << calculateSkillMod(medicine) <<"]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLUE    << "Nature:           [" << calculateSkillMod(nature)       << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_PURPLE  << "Perception:       [" << calculateSkillMod(perception)     << "]"  <<ANSI_RESET << endl;
    cout << ANSI_BRIGHT_RED     << "Performance:      [" << calculateSkillMod(performance)     << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_ORANGE  << "Persuasion:       ["   << calculateSkillMod(persuasion)    << "]"  << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_YELLOW  << "Religion:         [" << calculateSkillMod(religion) <<"]"  << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_GREEN   << "Sleight of Hand:  [" << calculateSkillMod(sleightOfHand) <<"]"  << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_BLUE    << "Stealth:          [" << calculateSkillMod(stealth)       << "]" << ANSI_RESET << endl;
    cout << ANSI_BRIGHT_PURPLE  << "Survival:         [" << calculateSkillMod(survival)     << "]" <<ANSI_RESET << endl;
    
    
}



void printLine() {
    cout << ANSI_BRIGHT_BLACK << "\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << ANSI_RESET << endl;
}


int calculateHP(int hitDice, string conMod) {
    int hp = hitDice + stoi(conMod);
    return hp;
}

int calculatePassive(int per) {
    int passive = 10 + per;
    return passive;
}

string calculateModifier(int stat) {
    int mod = (stat - 10) / 2;
        string str;
            if (mod > 0) {
                str = to_string(mod);
                str = "+" + str;
            }
            else {
                str = to_string(mod);
            }
    return str;
}

int calculateArmorClass(string characterClass, int conMod, int wisMod, int dexMod) {
    int baseAC = 10;
    baseAC = baseAC + dexMod;
    if (characterClass == "Monk") {
        baseAC = baseAC + wisMod;
    }
    if (characterClass == "Barbarian") {
        baseAC = baseAC + conMod;
    }
    return baseAC;
}

int main() {
    int roll[6];

    srand(time(NULL));

   

    cout << ANSI_BRIGHT_YELLOW << "What would you like to name your character?" << ANSI_RESET <<endl;
    cin>>name;

    string personality;
    cout << ANSI_BRIGHT_YELLOW << "\nWould you like your character to be a nerd, a jock, or a holy person?" << ANSI_YELLOW << "\nPlease input N for nerd, J for jock, or H for holy person." << ANSI_RESET << endl;
    cin >> personality;
    charClass;
    if (personality == "N" || personality == "n") {
        string nerd_choice;
        do{
            cout << ANSI_BRIGHT_YELLOW << "\nWould you like your character to be a learner or a do-er?" << ANSI_RESET<< endl;
            cout << ANSI_YELLOW << "a. Learner" << ANSI_RESET << endl;
            cout << ANSI_YELLOW << "b. Do-er" << ANSI_RESET << endl;
            cin >> nerd_choice;
            if (nerd_choice == "a") {
                string science_choice;
                do{
                    cout << ANSI_BRIGHT_YELLOW << "\nDo you want your character to be a student or a researcher?" << ANSI_RESET<< endl;
                    cout << ANSI_YELLOW << "a. Student" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "b. Researcher" << ANSI_RESET<< endl;
                    cin >> science_choice;
                    if (science_choice == "a") {cout << ANSI_BRIGHT_YELLOW <<"Your character will be a Wizard." << ANSI_RESET << endl; charClass = "Wizard"; break;} 
                    if (science_choice == "b") {cout << ANSI_BRIGHT_YELLOW <<"Your character will be a Monk." << ANSI_RESET << endl; charClass = "Monk"; break;}
                }while(science_choice != "a" || "b");
                break;
            }
            else if (nerd_choice == "b") {
                string practical_choice;
                do{
                    cout << ANSI_BRIGHT_YELLOW << "\nDo you think your character would be better as an artist or as a tinkerer?" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "a. Artist" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "b. Tinkerer" << ANSI_RESET << endl;
                    cin >> practical_choice;
                    if (practical_choice == "a") {cout << ANSI_BRIGHT_YELLOW << "Your character will be a Bard." << ANSI_RESET << endl; charClass = "Bard"; break;}
                    if (practical_choice == "b") {cout << ANSI_BRIGHT_YELLOW << "Your character will be an Rogue." << ANSI_RESET << endl; charClass = "Rogue"; break;}
                }while(practical_choice != "a" || "b");
                break;
            } 
            else cout << ANSI_BRIGHT_RED << "Invalid option." << ANSI_RESET;
        }while(nerd_choice != "a" || "b");
    }

    else if (personality == "J" || personality == "j") {
        string jock_choice;
        do{
            cout << ANSI_BRIGHT_YELLOW << "\nWould you like your character to be skilled in physical combat or otherwise?" << ANSI_RESET << endl;
            cout << ANSI_YELLOW << "a. Physical combat" << ANSI_RESET << endl;
            cout << ANSI_YELLOW << "b. Otherwise" << ANSI_RESET << endl;
            cin >> jock_choice;

            if (jock_choice == "a") {
                string magic_choice;
                do{
                    cout << ANSI_BRIGHT_YELLOW << "\nShould your character be super strong or skilled with weapons?" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "a. Strong" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "b. Skilled" << ANSI_RESET << endl;
                    cin >> magic_choice;
                        if (magic_choice == "a") {cout << ANSI_BRIGHT_YELLOW << "Your character will be a Barbarian." << ANSI_RESET << endl; charClass = "Barbarian"; break;}
                        if (magic_choice == "b") {cout << ANSI_BRIGHT_YELLOW << "Your character will be a Fighter." << ANSI_RESET << endl; charClass = "Fighter"; break;}
                }while(magic_choice != "a" || "b");
                break;
            }
            else if (jock_choice == "b") {
                string nonmagic_choice;
                do{
                    cout << ANSI_BRIGHT_YELLOW << "\nWould you rather your character deal damage primarily close range or long range?" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "a. Close" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "b. Long" << ANSI_RESET << endl;
                    cin >> nonmagic_choice;
                    if (nonmagic_choice == "a") {cout << ANSI_BRIGHT_YELLOW << "Your character will be a Sorcerer." << ANSI_RESET << endl; charClass = "Sorcerer"; break;}
                    if (nonmagic_choice == "b") {cout << ANSI_BRIGHT_YELLOW << "Your character will be a Ranger." << ANSI_RESET << endl; charClass = "Ranger"; break;}
                }while(nonmagic_choice != "a" || "b");
                break;
            } 
        else cout << ANSI_BRIGHT_RED << "Invalid option."<< ANSI_RESET << endl;
        }while(jock_choice != "a" || "b");
    }

    else if (personality == "H" || personality == "h") {
        string holy_choice;
        do{
            cout << ANSI_BRIGHT_YELLOW << "\nWould you like your character to have a conventional relationship with religion?" << ANSI_RESET << endl;
            cout << ANSI_YELLOW << "a. Yes" << ANSI_RESET << endl;
            cout << ANSI_YELLOW << "b. No" << ANSI_RESET << endl;
            holy_choice;
            cin >> holy_choice;
            if (holy_choice == "a") {
                string artmagic_choice;
                do{
                    cout << ANSI_BRIGHT_YELLOW << "\nShould your character be a healer or a fighter?" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "a. Healer" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "b. Fighter" << ANSI_RESET << endl;
                    cin >> artmagic_choice;
                        if (artmagic_choice == "a") {cout << ANSI_BRIGHT_YELLOW << "Your character will be a Cleric." << ANSI_RESET << endl; charClass = "Cleric";break; }
                        else if (artmagic_choice == "b") {cout << ANSI_BRIGHT_YELLOW << "Your character will be a Paladin." << ANSI_RESET << endl; charClass = "Paladin"; break;}
                        else {
                            cout<<ANSI_BRIGHT_RED << "Invalid" << ANSI_RESET <<endl;
                        }
                }while(artmagic_choice != "a" || "b");
                break;
            }
            else if (holy_choice == "b") {
                string nonmagic_choice;
                do{
                    cout << ANSI_BRIGHT_YELLOW << "\nShould your character be strengthened by nature or an outside patron?" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "a. Nature" << ANSI_RESET << endl;
                    cout << ANSI_YELLOW << "b. Patron" << ANSI_RESET << endl;
                    cin >> nonmagic_choice;
                    if (nonmagic_choice == "a") {cout << ANSI_BRIGHT_YELLOW << "Your character will be a Druid." << ANSI_RESET << endl; charClass = "Druid";break;}
                    if (nonmagic_choice == "b") {cout << ANSI_BRIGHT_YELLOW << "Your character will be a Warlock." << ANSI_RESET << endl; charClass = "Warlock"; break;}
                
                }while(nonmagic_choice!= "a" || "b");
                break;
            } 
            else{
                cout<<"Invalid"<<endl;
            }
        }while(holy_choice != "a" || "b");
    }
      
      else {
        cout << ANSI_BRIGHT_RED << "Invalid option." << ANSI_RESET <<endl;
        return 0;
      }
      
      int hitDie = 0;
      string topStatRec = "null";
      string secStatRec = "null";

      if (charClass == "Wizard") {
          topStatRec = "intelligence";
          secStatRec = "constitution or dexterity";
          hitDie = 6;
      }
      else if (charClass == "Monk") {
          topStatRec = "dexterity";
          secStatRec = "wisdom";
          hitDie = 8;
      }      
      else if (charClass == "Rogue") {
          topStatRec = "dexterity";
          secStatRec = "intelligence or charisma";
          hitDie = 8;
      }      
      else if (charClass == "Bard") {
          topStatRec = "charisma";
          secStatRec = "dexterity";
          hitDie = 8;
      }      
      else if (charClass == "Barbarian") {
          topStatRec = "strength";
          secStatRec = "constitution";
          hitDie = 12;
      }      
      else if (charClass == "Fighter") {
          topStatRec = "strength or dexterity";
          secStatRec = "constitution or intelligence";
          hitDie = 10;
      }      
      else if (charClass == "Ranger") {
          topStatRec = "dexterity";
          secStatRec = "wisdom";
          hitDie = 10;
      }      
      else if (charClass == "Sorcerer") {
          topStatRec = "charisma";
          secStatRec = "constitution";
          hitDie = 6;
      }      
      else if (charClass == "Cleric") {
          topStatRec = "wisdom";
          secStatRec = "constitution or strength";
          hitDie = 8;
      }      
      else if (charClass == "Warlock") {
          topStatRec = "charisma";
          secStatRec = "constitution";
          hitDie = 8;
      }      
      else if (charClass == "Paladin") {
          topStatRec = "strength";
          secStatRec = "charisma";
          hitDie = 10;
      }      
      else if (charClass == "Druid") {
          topStatRec = "wisdom";
          secStatRec = "constitution";
          hitDie = 8;
      }
    

      cout << ANSI_BRIGHT_BLUE << "\nTime to assign your rolls to your character stats!" << ANSI_RESET << endl;
      cout << ANSI_BLUE << "As a note, because your character class is " << charClass << ", we have a few recommendations." << ANSI_RESET << endl;
      cout << ANSI_BLUE << "Firstly, your highest roll should likely go into " << topStatRec << "." << ANSI_RESET << endl;
      cout << ANSI_BLUE << "Your second highest roll should likely go into " << secStatRec << ". However, build the character however you like!" << ANSI_RESET << endl;

    //Roll 6 times
    for (int i = 0; i < 6; i++) {
        int random1 = rand() % 6 + 1;
        int random2 = rand() % 6 + 1;
        int random3 = rand() % 6 + 1;
        int random4 = rand() % 6 + 1;

        int min = random1;
        if (min > random2) min = random2;
        if (min > random3) min = random3;
        if (min > random4) min = random4;

        int total = random1 + random2 + random3 + random4 - min;
        roll[i] = total;
    }

    int choice;
    
    printLine();
    // STRENGTH STAT
    do {
        cout << ANSI_BRIGHT_RED << "Which roll would you like to put into *STRENGTH*" << ANSI_RESET << endl;
        cout << "(choose a number between 1-6)" << endl;
        for (int i = 0; i < 6; i++) {
            cout << ANSI_BLACK << "Roll [" << i+1 << "]: " << roll[i] << ANSI_RESET << endl;
        }
        cin >> choice;
    } while (choice < 1 || choice > 6);
    strength = roll[choice-1];

    // updating what stat you chose
    for (int i = choice-1; i < 5; i++) {
        roll[i] = roll[i+1];
    }
    // outputting
    cout << ANSI_BRIGHT_RED << "Strength: " << strength << ANSI_RESET << endl;
    printLine();

    // dex stat
    do {
        cout << ANSI_BRIGHT_CYAN << "Which roll would you like to put into *DEXTERITY*" << ANSI_RESET<< endl;
        cout << "(choose a number between 1-5)" << endl;
        for (int i = 0; i < 5; i++) {
            cout << ANSI_BLACK << "Roll [" << i+1 << "]: " << roll[i] << ANSI_RESET << endl;
        }
        cin >> choice;
    } while (choice < 1 || choice > 5);
    dexterity = roll[choice-1];

    // updating the rolls
    for (int i = choice-1; i < 4; i++) {
        roll[i] = roll[i+1];
    }
    // outputting
    cout << ANSI_BRIGHT_CYAN << "Dexterity: " << dexterity << ANSI_RESET << endl;
    printLine();

    // con stat
    do {
        cout << ANSI_BRIGHT_GREEN << "Which roll would you like to put into *CONSTITUTION*" << ANSI_RESET << endl;
        cout << ANSI_BRIGHT_GREEN << "(choose a number between 1-4)" << ANSI_RESET << endl;
        for (int i = 0; i < 4; i++) {
            cout << ANSI_BLACK << "Roll [" << i+1 << "]: " << roll[i] << ANSI_RESET << endl;
        }
        cin >> choice;
    } while (choice < 1 || choice > 4);
    constitution = roll[choice-1];
    // updating rolls
    for (int i = choice-1; i < 3; i++) {
        roll[i] = roll[i+1];
    }
    // outputting
    cout << ANSI_BRIGHT_GREEN << "Constitution: " << constitution << ANSI_RESET << endl;
    printLine();

    // int stat
    do {
        cout << ANSI_BRIGHT_PURPLE << "Which roll would you like to put into *INTELLIGENCE*" << ANSI_RESET << endl;
        cout << ANSI_BRIGHT_PURPLE << "(choose a number between 1-3)" << ANSI_RESET << endl;
        for (int i = 0; i < 3; i++) {
            cout << ANSI_BLACK << "Roll [" << i+1 << "]: " << roll[i] << ANSI_RESET << endl;
        }
        cin >> choice;
    } while (choice < 1 || choice > 3);
    intelligence = roll[choice-1];
    // updating rolls
    for (int i = choice-1; i < 2; i++) {
        roll[i] = roll[i+1];
    }
    // outputting
    cout << ANSI_BRIGHT_PURPLE << "Intelligence: " << intelligence << ANSI_RESET << endl;
    printLine();

    do {
        cout << ANSI_BRIGHT_YELLOW << "Which roll would you like to put into *WISDOM*" << ANSI_RESET << endl;
        cout << ANSI_BRIGHT_YELLOW << "(choose a number between 1-2)" << ANSI_RESET << endl;
        for (int i = 0; i < 2; i++) {
            cout << ANSI_BLACK << "Roll [" << i+1 << "]: " << roll[i] << ANSI_RESET << endl;
        }
        cin >> choice;
    } while (choice < 1 || choice > 2);
    wisdom = roll[choice-1];
    for (int i = choice-1; i < 1; i++) {
        roll[i] = roll[i+1];
    }
    cout << ANSI_BRIGHT_YELLOW << "Wisdom: " << wisdom << ANSI_RESET << endl;
    printLine();

    do {
        cout << ANSI_BRIGHT_ORANGE << "Which roll would you like to put into *CHARISMA*" << ANSI_RESET << endl;
        cout << ANSI_BRIGHT_ORANGE << "(choose 1)" << ANSI_RESET << endl;

        for (int i = 0; i < 1; i++) {
            cout << ANSI_BLACK << "Roll [" << i+1 << "]: " << roll[i] << ANSI_RESET << endl;
            cin >> choice;
        }
    } while (choice < 1 || choice > 1);

    charisma = roll[choice-1];
    cout << ANSI_BRIGHT_ORANGE << "Charisma: " << charisma << ANSI_RESET << endl;

    cout << ANSI_BRIGHT_LAVENDER << "Time to assign a race for your character. Please choose between half-elf, tiefling, and dragonborn. \n Please enter H for half-elf, T for tiefling, or D for dragonborn." << ANSI_RESET << endl;
    speed = 0;
    darkvision = false;
    race = "null";
    cin >> race;
    if (race == "h" || race == "H") {
        race = "Half-elf";
        speed = 30;
        darkvision = true;
        charisma = charisma + 2;
        intelligence = intelligence + 1;
        wisdom = wisdom + 1;
    }
    else if (race == "T" || race == "t") {
        race = "Tiefling";
        speed = 30;
        darkvision = true;
        intelligence = intelligence + 1;
        charisma = charisma + 2;
    }
    else if (race == "d" || race == "D") {
        race = "Dragonborn";
        speed = 30;
        darkvision = false;
        strength = strength + 2;
        charisma = charisma + 1;
    }

    //CALCULATE MODIFIERS
    strMod = calculateModifier(strength);
    dexMod = calculateModifier(dexterity);
    conMod = calculateModifier(constitution);
    intMod = calculateModifier(intelligence);
    wisMod = calculateModifier(wisdom);
    chaMod = calculateModifier(charisma);

    //CALCULATE HIT POINTS
    hitpoints = calculateHP(hitDie, conMod);

    //CALCULATE BASE AC
    baseArmorClass = calculateArmorClass(charClass, stoi(conMod), stoi(wisMod), stoi(dexMod));

    //CALCULATE INITIATIVE
    initiativeBonus = dexMod;
    
    //CALCULATE SKILL PROFICIENCIES
    acrobatics = stoi(dexMod),animalHandling = stoi(wisMod),arcana = stoi(intMod),athletics = stoi(strMod),deception = stoi(chaMod),
    history = stoi(intMod),insight = stoi(wisMod),intimidation = stoi(chaMod),investigation = stoi(intMod),medicine = stoi(wisMod),
    nature = stoi(intMod),perception = stoi(wisMod),performance = stoi(chaMod),persuasion = stoi(chaMod),religion = stoi(intMod),
    sleightOfHand = stoi(dexMod),stealth = stoi(dexMod),survival = stoi(wisMod);
    int profBonus=2;

    cout<<ANSI_GREEN<<"\nPick 3 Skills: "<<ANSI_RESET<<endl;
    cout<<ANSI_BLACK<<"1. Acrobatics\n2. Animal Handling\n3. Arcana"<<endl;
    cout<<"4. Athletics\n5. Deception\n6. History"<<endl;
    cout<<"7. Insight\n8. Intimidation\n9. Investigation"<<endl;
    cout<<"10. Medicine\n11. Nature\n12. Perception"<<endl;
    cout<<"13. Performance\n14. Persuasion\n15. Religion"<<endl;
    cout<<"16. Sleight of Hand\n17. Stealth\n18. Survival\n"<<ANSI_RESET<<endl;


    vector<int> choices;
    for (int i = 0; i < 3; i++)
    {
        int choice;
        bool choiceAlreadyMade = false; 
        cin >> choice;
        
        // Check if choice has already been made
        for (int j = 0; j < choices.size(); j++) {
            if (choice == choices[j]) {
                cout << "Choice already made. Try again." << endl;
                choiceAlreadyMade = true;
                break;
            }
        }
        
        // Repeat current iteration if choice has already been made
        if (choiceAlreadyMade) {
            i--;
            continue;
        }
        
        choices.push_back(choice);  // Add choice to vector

        bool facts = true;
        while(facts){
            switch(choice){
                case 1:
                    acrobatics+=profBonus;
                    cout<<"Added 2 points to acrobatics!"<<endl;
                    facts = false;
                break;

                case 2:
                    animalHandling+=profBonus;
                    cout<<"Added 2 points to Animal Handling!"<<endl;
                    facts = false;
                break;

                case 3:
                    arcana+=profBonus;
                    cout<<"Added 2 points to Arcana!"<<endl;
                    facts = false;
                break;

                case 4:
                    athletics+=profBonus;
                    cout<<"Added 2 points to Athletics!"<<endl;
                    facts = false;
                break;

                case 5:
                    deception+=profBonus;
                    cout<<"Added 2 points to Deception!"<<endl;
                    facts = false;
                break;

                case 6:
                    history+=profBonus;
                    cout<<"Added 2 points to History!"<<endl;
                    facts = false;
                break;

                case 7:
                    insight+=profBonus;
                    cout<<"Added 2 points to Insight!"<<endl;
                    facts = false;
                break;

                case 8:
                    intimidation+=profBonus;
                    cout<<"Added 2 points to Intimidation!"<<endl;
                    facts = false;
                break;

                case 9:
                    investigation+=profBonus;
                    cout<<"Added 2 points to Investigation!"<<endl;
                    facts = false;
                break;

                case 10:
                    medicine+=profBonus;
                    cout<<"Added 2 points to Medicine!"<<endl;
                    facts = false;
                break;

                case 11:
                    nature+=profBonus;
                    cout<<"Added 2 points to Nature!"<<endl;
                    facts = false;
                break;

                case 12:
                    perception+=profBonus;
                    cout<<"Added 2 points to Perception!"<<endl;
                    facts = false;
                break;

                case 13:
                    performance+=profBonus;
                    cout<<"Added 2 points to Performance!"<<endl;
                    facts = false;
                break;

                case 14:
                    persuasion+=profBonus;
                    cout<<"Added 2 points to Persuasion!"<<endl;
                    facts = false;
                break;

                case 15:
                    religion+=profBonus;
                    cout<<"Added 2 points to Religion!"<<endl;
                    facts = false;
                break;

                case 16:
                    sleightOfHand+=profBonus;
                    cout<<"Added 2 points to Sleight of Hand!"<<endl;
                    facts = false;
                break;

                case 17:
                    stealth+=profBonus;
                    cout<<"Added 2 points to Stealth!"<<endl;
                    facts = false;
                break;

                case 18:
                    survival+=profBonus;
                    cout<<"Added 2 points to Survival!"<<endl;
                    facts = false;
                break;

                default:
                    cout<<"Invalid. Try again."<<endl;
                    cin>>choice;
                break;
            }
        }
    }

    //CALCULATE PASSIVE
    passive = calculatePassive(perception);
    
    //CALCULATE SAVING THROWS
    strST = stoi(strMod);
    dexST = stoi(dexMod);
    conST = stoi(conMod);
    intST = stoi(intMod);
    wisST = stoi(wisMod);
    chaST = stoi(chaMod);

    if (charClass == "Monk") {strST = strST + profBonus; dexST = dexST + profBonus;}
    else if (charClass == "Wizard") {intST = intST + profBonus; wisST = wisST + profBonus;}
    else if (charClass == "Rogue") {dexST = dexST + profBonus; intST = intST + profBonus;}
    else if (charClass == "Bard") {dexST = dexST + profBonus; chaST = chaST + profBonus;}
    else if (charClass == "Barbarian") {strST = strST + profBonus; conST = conST + profBonus;}
    else if (charClass == "Fighter") {strST = strST + profBonus; conST = conST + profBonus;}
    else if (charClass == "Ranger") {strST = strST + profBonus; dexST = dexST + profBonus;}
    else if (charClass == "Sorcerer") {conST = conST + profBonus; chaST = chaST + profBonus; }
    else if (charClass == "Cleric") {wisST = wisST + profBonus; chaST = chaST + profBonus;}
    else if (charClass == "Warlock") {wisST = wisST + profBonus; chaST = chaST + profBonus;}
    else if (charClass == "Paladin") {wisST = wisST + profBonus; chaST = chaST + profBonus;}
    else if (charClass == "Druid") {intST = intST + profBonus; wisST = wisST + profBonus;}

    printStat();

    return 0;
}