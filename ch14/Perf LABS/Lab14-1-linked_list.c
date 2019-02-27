/*
*
*  name: Whelpley
*  date: 27 Feb 2019
*  project: Linked Lists Lab
*  
*  Requirments
*  
*      Utilize headers for all declarations
*      Utilize proper naming schemas
*      Document code
*      Push code to Github
*          Use branching! Create a development branch and push to there. Merge when all requirments are met
*      Break your code out into functions
*      Utilize multiple C files if needed
*  
*  Instructions
*  
*      /Create a linked list, the struct members should contain the following:
*          /Each students initals
*          /Each students favoriate musical artist
*          /Each students dream car
*          /Required data for linked list completion
*          /May be worth each student just posting their data into a slack channel so everyone can grab off of it
*      Create a menu allowing for the following:
*          Print out of all students and all of their data
*          Print out of all students and only one of their data members on request of user (ex. print out all students and their fav car)
*          Print out of only a specific student (This one can be challanging)
*      BONUS
*          Add additonal students to the end
*          Remove students at the end
*          Remove a specific student (This one is challanging)
*      Push code to Github and post the link in code (This is so that we can get more practice with git)
*          Ensure you are commiting often
*          Advice: Commit anything a moderate feature is added or changed
*              ex: You added the ability to print out a specific student
*              ex: You removed a section of code that was giving you issues
*          Advice: You can commit often without the need to push your code. It's recommended to push code after larger work is done
*              ex: You finished an entire requirment
*              ex: You changed a large amount of code
*              ex: You have a ton of commits
*
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Create a linked list, the struct members should contain the following:
*          Each students initals
*          Each students favoriate musical artist
*          Each students dream car
*          Required data for linked list completion
*/

typedef struct members {
    char * member_initials;
    char * member_favMusician;
    char * member_dreamCar;
    struct members *next;
} members;


int main() {
    
    char choice;
    char initials[4];
    char favMusician[32];
    char dreamCar[32];

    struct members* members = NULL;
    struct members* currentMember = members;

    // allocating all member nodes in the heap
    members = (struct members*)malloc(sizeof(struct members));

    members->member_initials = strdup(initials);
    members->member_favMusician = strdup(favMusician);
    members->member_dreamCar = strdup(dreamCar);
    members->next = NULL;

    // Linking all data to each other

    do {
        printf(",-.-.          |                       ,-.-.\n");                
        printf("| | |,---.,-.-.|---.,---.,---.,---.    | | |,---.,---..   .\n");
        printf("| | ||---'| | ||   ||---'|    `---.    | | ||---'|   ||   |\n"); 
        printf("` ' '`---'` ' '`---'`---'`    `---'    ` ' '`---'`   '`---'\n");
        printf("___________________________________________________________\n");   
        printf("1. Add Member.\n");
        printf("2. Print all data.\n");
        printf("3. Print specific Member's data.\n");
        printf("4. Print all Member's data\n");
        printf("5. Exit\n\n");
        printf("Enter your choice here: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (members != NULL) {
                    currentMember = currentMember->next;
                }
                currentMember = (struct members*)malloc(sizeof(struct members));
                printf("\n /\\  _| _|  |\\/| _  _ _ |_  _  _.\n");
                printf("/~~\\(_|(_|  |  |(/_| | ||_)(/_| .\n");
                printf("Answer a few questions, there are only 3.\n");
                printf("1. Member's initials: ");
                scanf("%3s", &initials);
                //members->member_initials = initials;
                printf("2. Member's favorite musician: ");
                scanf("%31s", &favMusician);
                //members->member_favMusician = strdup(favMusician);
                printf("3. Member's dream car: ");
                scanf("%31s", &dreamCar);
                //members->member_dreamCar = strdup(dreamCar);
                //members->next = NULL;
                printf("\nThanks! Info has been added to the Struct.\nReturning you to the Main Menu.\n\n");
                break;
            case 2:
                printf("case 2\n\n");
                break;
            case 3:
                printf("case 3\n\n");
                break;
            case 4:
                printf("%s\r\n", *(members->member_favMusician));
                break;
            case 5:
                printf("OK, thanks. Latez!\n");
                break;
            default:
                printf("Wrong choice.  Try again.\n");
                break;        
        } 
    } while (choice !=5);   
}