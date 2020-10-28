#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void swap1(int, int);
void swap2(int &, int &);
void swap3(int *, int *);
int strlen1(const char *);
int strlen2(const char *);

int main(){
/*
	int a = 1, b = 5;
    cout << "Before--> a:" << a << " b:" << b << endl;
	swap1(a, b);
    cout << "Swap1--> a:" << a << " b:" << b << endl;
    swap2(a, b);
    cout << "Swap2--> a:" << a << " b:" << b << endl;
    swap3(&a, &b);
    cout << "Swap3--> a:" << a << " b:" << b << endl;
*/

	char a[10] = "array";
    int k;
    char *ptr = a;
    cout << "strlen1: " << strlen1("hello world") <<endl;
    cout << "strlen1: " << strlen1(a) <<endl;
    cout << "strlen1: " << strlen1(ptr) <<endl;

    cout << "strlen2: " << strlen2("hello world") <<endl;
    cout << "strlen2: " << strlen2(a) <<endl;
    cout << "strlen2: " << strlen2(ptr) <<endl;

    getchar();
	return EXIT_SUCCESS;   //-->stdlib.h

}

void swap1(int x, int y){
        int temp;
        temp = x;
        x = y;
        y = temp;
}

void swap2(int &x, int &y){
        int temp;
        temp = x;
	     x = y;
        y = temp;
}

void swap3(int *xptr, int *yptr){
        int temp;
        temp = *xptr;
	     *xptr = *yptr;
        *yptr = temp;
}


int strlen1(const char *s){
        int n = 0;
        for (n = 0; *s != '\0'; s++)
             n++;
        return n;
}

int strlen2(const char *s){
        int n = 0;
        while (*s){
             s++;
             n++;
       }
        return n;
}
