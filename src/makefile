# Executable (.exe) file name
EXECUTABLE := yenniferSB

# Which Compiler to use
CXX := g++

# Variables for sources and header files
SRC_FILES := $(wildcard *.cpp)
HEADER_FILES := $(wildcard *.h)

# Variable for object files (.o)
OBJECT_FILES := $(patsubst %.cpp,%.o,$(SRC_FILES))

# Flags for compiler optimize for speed
CPP_FLAGS := -oFast

# Compile .cpp files
%.o: %.cpp $(HEADER_FILES)
	@${CXX} $(CPP_FLAGS) -c -o $@ $<

# Run and Build executables
${EXECUTABLE}: $(OBJECT_FILES)
	@${CXX} $(CPP_FLAGS) -o $@ $^

# Delete object files (.o)
clean: 
	rm -f $(wildcard *.o)