.PHONY: all clean

# Compiler and flags
CC = gcc
CXX = g++ 
CFLAGS = -Wall -g -fPIC
CXXFLAGS = -Wall -g -fPIC
LDFLAGS = -L.

# Libraries
C_LIBRARY = libtempconverter.a
CPP_LIBRARY = libarithmetic.so

# Source and object files
C_SOURCES = temp.c
CPP_SOURCES = arithmetic.cpp
OBJECTS = $(C_SOURCES:.c=.o) $(CPP_SOURCES:.cpp=.o)
EXECUTABLE = example


# Default target
all: $(C_LIBRARY) $(CPP_LIBRARY) $(EXECUTABLE)
ENV LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH # assure programs can access libraries. Thanks Mr. Ortega.

# C static library
$(C_LIBRARY): $(C_SOURCES)
	$(CC) $(CFLAGS) -c $(C_SOURCES) -o temp.o
	$(AR) rcs $@ temp.o
	@echo "Static library created: $(C_LIBRARY)"

# C++ shared library
$(CPP_LIBRARY): $(CPP_OBJECTS)
	$(CXX) $(CXXFLAGS) -c $(CPP_SOURCES) -o arithmetic.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^ arithmetic.o 

# Main executable, -l for library
$(EXECUTABLE): main.c
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^ -larithmetic -ltempconverter 
	@echo "Executable created: $(EXECUTABLE)"

# Clean up
clean:
	rm -f $(EXECUTABLE) $(OBJECTS) $(C_LIBRARY) $(CPP_LIBRARY)
	@echo "Cleaned up."
