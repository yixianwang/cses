#INCLUDE := ./StanfordCPPLib/StanfordCPPLib/collections:./StanfordCPPLib/StanfordCPPLib/private

CC = g++
FLAG = -std=c++17 -Wall
LFLAG =  
SRC1 = a.cpp
EXEC = exec.out

all: clean compile

compile: 
	$(CC) $(FLAG) -o $(EXEC) $(SRC1) 
	# ./$(EXEC)

clean:
	rm -f $(EXEC) 

run:
	./$(EXEC)

