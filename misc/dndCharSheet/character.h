#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LNGTH 32

typedef struct Character {
    char cName[MAX_STR_LNGTH];
    // Character Level and Armor Level
    int cLevel;
    int armorClass;
    // Character Attributes
    int str;
    int dex;
    int con;
    int intel;
    int wis;
    int cha;
    // Character initiative and speed
    int speed;
    int init;
    // Hitpoints
    int maxHP;
    int currHP; 
} charSheet;

typedef struct Race {
    char raceName[MAX_STR_LNGTH];
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
} charRace;

// Character Classes
char * const BARBARIAN = {"Barbarain"};
char * const BARD = {"Bard"};
char * const CLERIC = {"Cleric"};
char * const DRUID = {"Druid"};
char * const FIGHTER = {"Fighter"};
char * const MONK = {"Monk"};
char * const PALADIN = {"Paladin"};
char * const RANGER = {"Ranger"};
char * const ROGUE = {"Rogue"};
char * const SORCERER = {"Sorcerer"};
char * const WARLOCK = {"Warlock"};
char * const WIZARD = {"Wizard"};


// Character Alignment
char * const LAWFULGOOD = {"Lawful Good"};
char * const LAWFULNEUTRAL = {"Lawful Neutral"};
char * const LAWFULEVIL = {"Lawful Evil"};
char * const NEUTRALGOOD = {"Nuetral Good"};
char * const NEUTRAL = {"Nuetral"};
char * const NEUTRALEVIL = {"Nuetral Evil"};
char * const CHAOTICGOOD = {"Chaotic Good"};
char * const CHAOTICNEUTRAL = {"Chaotic Nuetral"};
char * const CHAOTICEVIL = {"Chaotic Evil"};


// Character Races
const charRace DRAGONBORN = {
    "Dragonborn",
    2,
    0,
    0,
    0,
    0,
    1
};

const charRace DWARF = {
    "Dwarf",
    0,
    0,
    2,
    0,
    0,
    0
};

const charRace ELF = {
    "Elf",
    0,
    2,
    0,
    0,
    0,
    0
};

const charRace GNOME = {
    "Gnome",
    0,
    0,
    0,
    2,
    0,
    0
};

const charRace HALF_ELF = {
    "Half-Elf",
    0,
    1,
    0,
    1,
    0,
    2
};

const charRace HALFLING = {
    "Halfing",
    0,
    2,
    0,
    0,
    0,
    0
};

const charRace HALF_ORC = {
    "Half-Orc",
    2,
    0,
    1,
    0,
    0,
    0
};

const charRace HUMAN = {
    "Human",
    1,
    1,
    1,
    1,
    1,
    1
};

const charRace TIEFLING = {
    "Tiefling",
    0,
    0,
    1,
    0,
    0,
    2
};