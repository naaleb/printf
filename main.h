#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
  *By Hermas and Almond
  */

#define UNUSED(x)(void)(x)
#define BUFF_SIZE 1024

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16


int _printf(const char *format, ...);

#endif  
