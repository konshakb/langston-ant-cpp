
CXX = g++
CXXFLAGS += -std=c++0x
#CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
LDFLAGS = -lboost_date_time

OBJS = main

SRCS = main.cpp Ant.cpp menu.cpp printBoard.cpp board.cpp inputVal.cpp

HEADERS = Ant.hpp menu.hpp board.hpp printBoard.hpp inputVal.hpp

#target:  dependencies
#	rule to build
#


main:   $(SRCS) $(HEADERS)
	${CXX} ${CXXFLAGS} main.cpp inputVal.cpp Ant.cpp menu.cpp printBoard.cpp board.cpp -o main

clean:
	rm $(OBJS)
