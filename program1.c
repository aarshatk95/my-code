/*
Write a program to record notes entered by a user. The program should do the following things:
First asks the user’s name.
Asks the user to enter a single-line note. After the user enters the note, it should get stored in USERNAME_notes.txt on a new line.
The user will be asked to enter multiple notes in a loop till he/she types exit.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char name[100];
   char notes[100];
   char stop[] = "exit";
   int val = 1;
   FILE *fp1;
   printf("Enter the username:\n");
   scanf("%s",name);
   strcat(name,"_notes.txt");
   fp1 = fopen(name,"w");
   if(fp1 == NULL)
   {
      printf("Error");   
      exit(1);             
   }
   
   while(1){
	printf("Enter a single-line note:\n");
	scanf("%s",notes);
      val = strcmp(notes,stop);
      if(val == 0){
	fclose(fp1);
         exit(1);
      }else{
         fprintf(fp1, "%s\n", notes);
      }
   } 
   fclose(fp1);
   return 0;
}
