#include<stdio.h> 
int main() 
{ 
 FILE *fp; 
 fp = fopen("C:\Users\Sreekanth\Documents\6. preemptive.cpp","r"); 
 if(!fp) 
 { 
 printf("Error in opening file\n"); 
 return 0; 
 } 
 
 printf("Position of the pointer : %ld\n",ftell(fp)); 
 
 char ch; 
 while(fread(&ch,sizeof(ch),1,fp)==1) 
 { 
 
 printf("%c",ch); 
 } 
 printf("\nPosition of the pointer : %ld\n",ftell(fp)); 
 
 
 rewind(fp); 
 printf("\n USING REWIND Position of the pointer : %ld\n",ftell(fp)); 
 
 printf("\nUSING FSEEK....."); 
 fseek(fp, 6, 0); 
 while(fread(&ch,sizeof(ch),1,fp)==1) 
 { 
 
 printf("%c",ch); 
 } 
 
 fclose(fp); 
 return 0; 
}
