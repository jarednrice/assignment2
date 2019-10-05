CXX=g++
CXXFLAGS=-g -Wall -MMD -std=c++11
SOURCES=$(shell find . -name "*.cpp")
OBJECTS=$(SOURCES:%.cpp=%.o)
TARGET=sim

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(LINK.cpp) $^ $(LOADLIBES) $(LDLIBS) -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJECTS)

#makefile found on https://stackoverflow.com/questions/3576698/simple-makefile-generation-utility 
