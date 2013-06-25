/*! utils.h
 *# A variety of utility functions.
 *# 
 *# Some of the functions are duplicates of well known C functions that are not 
 *# standard.
 *-
 *[
 *# Author: Werner Stoop
 *# This software is provided under the terms of the unlicense.
 *# See http://unlicense.org/ for more details.
 *]
 *-
 */

/*@ MY_MIN(a,b)
 *# Macro that returns the smallest of its parameters.\n
 *# As with all macros, {{a}} and {{b}} should not have side effects.
 */
#define MY_MIN(a,b) (((a)<(b))?(a):(b))
 
/*@ MY_MAX(a,b)
 *# Macro that returns the largest of its parameters.\n
 *# As with all macros, {{a}} and {{b}} should not have side effects.
 */
#define MY_MAX(a,b) (((a)>(b))?(a):(b))

/*@ int my_stricmp(const char *p, const char *q)
 *# Compares two strings {{p}} and {{q}} case insensitively.
 *#
 *# It returns 0 if the strings are the same, a positive number if {{p}} comes after {{q}},
 *# and negative if {{p}} comes before {{q}}.
 */
int my_stricmp(const char *p, const char *q);

/*@ char *my_strdup(const char *s)
 *# Creates a duplicate of a string {{s}} in a dynamic memory buffer.\n
 *# The returned buffer needs to be {{free()}}d after use. It may return
 *# {{NULL}} if the memory allocation fails.
 */
char *my_strdup(const char *s);

/*@ char *my_strlower (char *p)
 *# Converts a string {{p}} to lowercase in place.
 *# It returns {{p}}.
 */
char *my_strlower (char *p);

/*@ char *my_strupper (char *p)
 *# Converts a string {{p}} to uppercase in place.
 *# It returns {{p}}.
 */
char *my_strupper (char *p);

/*@ char *my_readfile (const char *fn)
 *# Reads an entire file identified by {{fn}} into a dynamically allocated memory buffer.\n
 *# The returned buffer needs to be {{free()}}d afterwards.\n
 *# It returns {{NULL}} if the file could not be read.
 */
char *my_readfile (const char *fn);
