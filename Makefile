CXX = g++
CXXFLAGS = -O2 -std=c++17 -Wall
TARGET = code

all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

clean:
	rm -f $(TARGET)

.PHONY: all clean
