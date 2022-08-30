CXXFLAGS = --std=c++14 -O2
.PHONY: all clean

all: validParentheses

%.o: %.cpp %.h
	g++ $(CXXFLAGS) -c $<

validParentheses: stack.o validParentheses.o
	g++ $^ -o $@

clean:
	-rm *.o
