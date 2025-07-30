// Inversão de uma string.

#include <stdio.h>
#include <string.h>

char[] invertStr0(char[] str, char[] newStr, int i, int j) {
    if(i == strlen(str)) return newStr;
    newStr[j] = str[i];
    return invertStr0(str, newStr, i+1, j-1);
    
}

char[] invertStr(char[] str) {
    int i = 0;
    char[] newStr = strcpy(str);
    return invertStr0(str, newStr, i, strlen(str));
}

int main() {

    return 0;
}