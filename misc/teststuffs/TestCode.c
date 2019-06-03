#include <Windows.h>
#include <stdio.h>
#include "TestCode.h"

/////////////////////////////////////////////////////////////////////////////////////////////
// Test 1: For this task, you will receive a pointer to NULL terminated string: 
//		   The objective will be to fix any words incorrectly spelled words by replacing
//         every occurence of the letter 'y' with 's'.
//
// Expected Return Values:
//		- the task is successful: should return ERROR_SUCCESS (0).
//		- provided parameters are bad: should return ERROR_INVALID_PARAMETER (87)
//		- the letter 'y' is not part of 'sentence': should return ERROR_NOT_FOUND (1168)
/////////////////////////////////////////////////////////////////////////////////////////////
int changeLetterInString(char *sentence)
{
	int success = ERROR_SUCCESS;
	if (!sentence) {
		return ERROR_INVALID_PARAMETER;
	}

	if (strchr(sentence, 'y') != NULL) {
		for (int i = 0; i < strlen(sentence); i++) {
			if (sentence[i] == 'y') {
				sentence[i] = 's';
			}
		}
		return success;
	}
	else {
		return ERROR_NOT_FOUND;
	}

}
/////////////////////////////////////////////////////////////////////////////////////////////
// Test 2: For this task, you will receive a pointer to NULL terminated string: 
//		   The objective will be to fix the sentence by reversing every occurence of
//         "drow" with "word"
//
// Expected Return Values:
//		- the task is successful: should return ERROR_SUCCESS (0).
//		- provided parameters are bad: should return ERROR_INVALID_PARAMETER (87)
//		- the word "drow" is not part of 'sentence': should return ERROR_NOT_FOUND (1168)
/////////////////////////////////////////////////////////////////////////////////////////////
int reverseWord(char *sentence)
{
	int success = ERROR_SUCCESS;
	char word[] = "drow";

	if (!sentence) {
		return ERROR_INVALID_PARAMETER;
	}

	if (strstr(sentence, word) != NULL) {
		for (int i = 0; i < strlen(sentence); i++) {
			if ((sentence[i] == 'd') && (sentence[i + 1] == 'r') && (sentence[i + 2] == 'o') && (sentence[i + 3] == 'w')) {
				sentence[i] = 'w';
				sentence[i + 1] = 'o';
				sentence[i + 2] = 'r';
				sentence[i + 3] = 'd';
				return success;
			}
		}
	}
	else {
		return ERROR_NOT_FOUND;
	}
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
// Test 3: For this task, you will receive a pointer to NULL terminated string: 
//		   The objective will be to obfuscate the sentence by "ZORing" (XORing) each byte with the
//         given key
//
// Expected Return Values:
//		- the task is successful: should return ERROR_SUCCESS (0).
//		- provided parameters are bad: should return ERROR_INVALID_PARAMETER (87)
/////////////////////////////////////////////////////////////////////////////////////////////
int obfuscateString(char *sentence, char key)
{
	int success = ERROR_SUCCESS;
	if ((!sentence) || (!key)) {
		return ERROR_INVALID_PARAMETER;
	}

	for (int i = 0; i < strlen(sentence); i++) {
		sentence[i] = sentence[i] ^ key;
	}

	return success;
}
/////////////////////////////////////////////////////////////////////////////////////////////
// Test 4: For this task, you will receive a pointer to NULL terminated string: 
//		   The objective will be to concatenate sentence1 and sentence2
//         sentence1 will hold the concatenated strings
//
// Expected Return Values:
//		- the task is successful: should return ERROR_SUCCESS (0).
//		- provided parameters are bad: should return ERROR_INVALID_PARAMETER (87)
/////////////////////////////////////////////////////////////////////////////////////////////
int combineStrings(char *sentence1, int sentence1Length, char *sentence2, int sentence2Length, int bufferSize)
{
	int success = ERROR_SUCCESS;
	if ((!sentence1) || (!sentence1Length) || (!sentence2) || (!sentence2Length) || (!bufferSize)) {
		return ERROR_INVALID_PARAMETER;
	}

	sentence1 = strcat(sentence1, sentence2);
	return success;
}
/////////////////////////////////////////////////////////////////////////////////////////////
// Test 5: For this task, you will receive a pointer to NULL terminated string: 
//		   The objective will be to insert the missing word into the sentence.
//         "O'er the land of the <insert> and the home of the brave."
//			The word "free" is missing and needs to be inserted
//
// Expected Return Values:
//		- the task is successful: should return ERROR_SUCCESS (0).
//		- provided parameters are bad: should return ERROR_INVALID_PARAMETER (87)
/////////////////////////////////////////////////////////////////////////////////////////////
int insertWord(char *sentence, int sentenceLength, char *word, int wordLength, int loc)
{
	int success = ERROR_SUCCESS;
	char temp[128];

	// Error Handling
	if ((!sentence) || (!sentenceLength) || (!word) || (!wordLength) || (!loc)) {
		return ERROR_INVALID_PARAMETER;
	}

	for (int i = 0; i < loc; i++) {
		temp[i] = sentence[i];
	}

	for (int i = 0; i < wordLength; i++) {
		temp[i + loc] = word[i];
	}

	for (int i = 0; i < sentenceLength; i++) {
		temp[i + loc + wordLength] = sentence[i + loc + 1];
	}
		
	strcpy(sentence, temp);

	return success;
}



////////////////////////////////////////////////////////////////////////////////////////////////
// Test 6: For this task, you will be given a comma separated string containing letters from the
//			alphabet that you must split into individual elements and assign each one to a singly
//			linked list node. The linked list must be in alphabetical order. You should then
//			traverse the linked list and return a string containing the letters, without commas
//			or spaces. For example, given the input string "t,u,v,w", you should split it into 4
//			elements, traverse over those nodes, and return the string "tuvw".
//			
//			HINT: You should probably use all or some of the below functions to help with the
//					function letterList. The function should return a head pointer that the tester 
//					is able to use to verify the order of your linked list.
//			
//			The linked list structure "node" and the linked list head structure "list" are given
//			in the header file.
/////////////////////////////////////////////////////////////////////////////////////////////////

// Return the size of the comma-separated input string after you have parsed it
size_t determineSize(char input[])
{
	size_t length = 0;

	return length;
}

// This method should create an empty list and return the list pointer with the head initialized
plist createList()
{
	plist nodeList = NULL;

	return nodeList;
}

// This method should append a node *TO THE FRONT* of the list. Pay attention to the special case
// of when the list is empty
pnode appendNode(plist nodeList, char nodeData)
{
	pnode newNode = NULL;

	return newNode;
}

pnode insertNode(plist nodeList, char nodeData, int position)
{
	pnode newNode = NULL;

	return newNode;
}

char removeNode(plist nodeList, int position)
{
	char data = { 0 };

	return data;
}

// Implement this last using the previous methods
pnode letterList(char input[])
{
	plist nodeList = NULL;


	return nodeList->head;
}