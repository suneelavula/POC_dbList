CC = gcc
default: build
build: 
	$(CC) -I./databaseOPS/databaseOPSText -I./database_if -o riverlist ./databaseOPS/databaseOPSText/database.c ./app/riverApp.c ./database_if/database_if.c
clean: 
	rm riverlist

