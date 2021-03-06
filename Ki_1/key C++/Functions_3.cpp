#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 
void swapString(char a[], char b[]) {
    char temp[40] = "";
    strcpy(temp, a);
    strcpy(a, "");
    strcpy(a,b);
    strcpy(b, "");
    strcpy(b, temp);
}
 
void split(char arr[][40], int &size, char s[]) {//cat(
    char *stok;
    size =0;
    stok = strtok(s, " ");
    while(stok != NULL) {
        strcpy(arr[size++], stok);
        stok = strtok(NULL, " ");
    }
}
 
void rebuild(char arr[][40], int size, char s[]) {//noi chuoi(
    char temp[40]="";
    for(int i = 0; i < size-1; i++) {
        strcat(temp, arr[i]);
        strcat(temp, " ");
    }
    strcat(temp, arr[size-1]);
    strcpy(s, "");
    strcpy(s, temp);
}
 
void deleteByPosition(char arr[][40], int &size, int pos) {/xoa 1 tu tai 1 vi tri bat ky
    if(pos < 0 || pos > size -1) {
        return;
    }
    for(int i=pos; i < size-1; i++) {
        swapString(arr[i],arr[i+1]);
    }
    size--;
}
 
void nomalizeName(char arr[][40], int size) {//in thuong
    for(int i = 0; i < size; i++) {
        strlwr(arr[i]);
        arr[i][0] = toupper(arr[i][0]);
    }
}
void ascendingString(char arr[][40], int size) {
    for(int i= 0; i < size -1; i++) {
        for(int j = i+1; j < size; j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                swapString(arr[i], arr[j]);
            }
        }
    }  
}
void decreasingString(char arr[][40], int size) {
    for(int i= 0; i < size -1; i++) {
        for(int j = i+1; j < size; j++) {
            if(strcmp(arr[i], arr[j]) < 0) {
                swapString(arr[i], arr[j]);
            }
        }
    }
}
void insertWord(char arr[][40], int &size, int pos, char string[]) {//them 1 tu vao 1 vi tri bat ky
    for(int i = size; i > pos; i--) {
        strcpy(arr[i], "");
        strcpy(arr[i], arr[i-1]);
    }
    strcpy(arr[pos], "");
    strcpy(arr[pos], string);
    size++;
}
int main(){
    char s[]= "Kind of dress you're wearing tonight";
    char arr[30][40];
    int size = 0;
    split(arr,size,s);
    //nomalizeName(arr,size);
    decreasingString(arr,size);
    //deleteByPosition(arr,size,0);
    //insertWord(arr,size,0,"1234");
    rebuild(arr,size, s);
    printf("%s", s);
}                                                                                                                                                                                                                                                                                                                                                                                                                                
