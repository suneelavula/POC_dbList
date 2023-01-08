CC = gcc
default: build
TARGET = riverlist
build: 
	$(CC) -I./databaseOPS/databaseOPSText -I./database_if -o $(TARGET) ./databaseOPS/databaseOPSText/database.c ./app/riverApp.c ./database_if/database_if.c
clean: 
	rm riverlist

