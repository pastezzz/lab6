CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = calculator
SOURCES = scaffold.cpp mathfuncs.cpp randfuncs.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

scaffold.o: scaffold.cpp mathfuncs.h randfuncs.h
	$(CXX) $(CXXFLAGS) -c scaffold.cpp

mathfuncs.o: mathfuncs.cpp mathfuncs.h
	$(CXX) $(CXXFLAGS) -c mathfuncs.cpp

randfuncs.o: randfuncs.cpp randfuncs.h
	$(CXX) $(CXXFLAGS) -c randfuncs.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)