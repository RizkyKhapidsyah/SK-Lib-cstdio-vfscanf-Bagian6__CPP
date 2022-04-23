#pragma warning(disable:4996)

#include <cstdio>
#include <cstdarg>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

void ScanFormatted(FILE* stream, const char* format, ...) {
    va_list args;
    va_start(args, format);
    vfscanf(stream, format, args);
    va_end(args);
}

int main() {
    char name[80];
    int age, salary;

    //open the file in read mode
    FILE* pFile = fopen("employees.txt", "r");

    //reads data from the file until EOF is reached
    while (!feof(pFile)) {
        ScanFormatted(pFile, "%s %i %i", name, &age, &salary);
        printf("%s is %i years old and earns %i dollars.\n", name, age, salary);
    }

    //closing the file
    fclose(pFile);
    
    _getch();
    return 0;
}

