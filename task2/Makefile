# reduce duplicatin and to simplify making modications 
CC = gcc
CFLAGS = -Wall -std=c99 -pedantic
MAIN = array_list_tests
OBJS = array_list_tests.o array_list.o

# number of rules that specify how to build a program
all : $(MAIN)

# (OBJS) is like array_list.o and array_lists_tests.o and array_list.h
$(MAIN) : $(OBJS) array_list.h
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

array_list_tests.o : array_list_tests.c array_list.h
	$(CC) $(CFLAGS) -c array_list_tests.c

array_list.o : array_list.c array_list.h
	$(CC) $(CFLAGS) -c array_list.c

# remove compiled files
clean :
	rm *.o $(MAIN) core
