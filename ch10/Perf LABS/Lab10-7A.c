/*
* name: Whelpley
* date: 20 Feb 2019
* project: Lab10.6A - CONDITONAL COMPILATION
* 
* 
* Redefine EOF as 66 (without compiler warnings)
* Use preprocessor directive(s) to:
*     - Only compile in "release" and only compile if _INC_STDIO is defined
*     - Prints the name of a MACRO and also print the integer value of that MACRO
*     - Use a #else 'fall through' for ease of use and safety
* Use your preprocessor directives on FOPEN_MAX, FILENAME_MAX, and EOF
*
* 
*/

#define EOF 66