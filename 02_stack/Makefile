.PHONY: all clean

all: validParentheses

%.o: %.cpp %.h
	g++ --std=c++14 -O2 -c $<

validParentheses: stack.o validParentheses.o
	g++ $^ -o $@

clean:
	-rm *.o
