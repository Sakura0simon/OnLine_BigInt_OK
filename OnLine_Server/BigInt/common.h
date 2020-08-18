#ifndef _COMMON_H_
#define _COMMON_H_

#include<iostream>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<time.h>
#include<stdio.h>
//#include<windows.h>

using namespace std;

typedef enum { POSITIVE, NEGATIVE } Symbol;

typedef unsigned char u_char;
typedef unsigned long u_long;

#define ERR_EXIT(m)\
	do\
	{\
		perror(m);\
		exit(EXIT_FAILURE);\
	}while(0)

template<class Type>
void Swap(Type &a, Type &b)
{
	Type tmp = a;
	a = b;
	b = tmp;
}


#endif /* _COMMON_H_ */