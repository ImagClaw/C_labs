#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LNGTH 32

typedef struct Character {
    char cName[MAX_STR_LNGTH];
   
    int cLevel;
    int armorClass;

    int str;
    int dex;
    int con;
    int intel;
    int wis;
    int cha;

    int speed;
    int init;

    int maxHP;
    int currHP; 
} charSheet;

typedef struct Classes {
    char className[MAX_STR_LNGTH];
} charClass;

typedef struct Alignment {
    int id;
    char alignName[MAX_STR_LNGTH];
} charAlign;

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
extern const charClass BARBARIAN = {"Barbarain"};
extern const charClass BARD = {"Bard"};
extern const charClass CLERIC = {"Cleric"};
extern const charClass DRUID = {"Druid"};
extern const charClass FIGHTER = {"Fighter"};
extern const charClass MONK = {"Monk"};
extern const charClass PALADIN = {"Paladin"};
extern const charClass RANGER = {"Ranger"};
extern const charClass ROGUE = {"Rogue"};
extern const charClass SORCERER = {"Sorcerer"};
extern const charClass WARLOCK = {"Warlock"};
extern const charClass WIZARD = {"Wizard"};


// Character Alignment
extern const charAlign LAWFULGOOD = {0, "Lawful Good"};
extern const charAlign LAWFULNEUTRAL = {1, "Lawful Neutral"};
extern const charAlign LAWFULEVIL = {2, "Lawful Evil"};
extern const charAlign NUETRALGOOD = {3, "Nuetral Good"};
extern const charAlign NUETRAL = {4, "Nuetral"};
extern const charAlign NUETRALEVIL = {5, "Nuetral Evil"};
extern const charAlign CHAOTICGOOD = {6, "Chaotic Good"};
extern const charAlign CHAOTICNUETRAL = {7, "Chaotic Nuetral"};
extern const charAlign CHAOTICEVIL = {8, "Chaotic EVIL"};


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