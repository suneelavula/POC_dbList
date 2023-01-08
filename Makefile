include databaseOPS/databaseops.mk database_if/databaseif.mk
CC = gcc
CFLAGS = 
LDFLAGS =
SOURCES += ./app/riverApp.c 
INCLUDE += 
TARGET = riverlist

default: build
build: 
	$(CC) $(INCLUDE) -o $(TARGET) $(SOURCES)
clean: 
	rm  riverlist

