#include<stdio.h>
int main() {
// Think about the commented code? Is it correct?
/*
char name1[20]; //Can store one name with maximum of 20 characters including '\0' // So need n different variables to store n names
// But can we store n names under the same variable name???? --- Yes. Use 2D array */
char names[200][20];
int n;
printf("How many names you want to store?\n");
scanf("%d", &n);
int i;
printf("enter %d names\n", n); for(i=0;i<n;i++)
{
scanf("%s",names[i]);
 }
printf("U entered below names\n"); for(int i=0;i<n;i++) {
printf("%s\n",names[i]); }
return 0; }