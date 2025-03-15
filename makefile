CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: crypto

crypto: main.o aes.o rsa.o sha256.o dh.o
	$(CXX) $(CXXFLAGS) -o crypto main.o aes.o rsa.o sha256.o dh.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

aes.o: aes.cpp
	$(CXX) $(CXXFLAGS) -c aes.cpp

rsa.o: rsa.cpp
	$(CXX) $(CXXFLAGS) -c rsa.cpp

sha256.o: sha256.cpp
	$(CXX) $(CXXFLAGS) -c sha256.cpp

dh.o: dh.cpp
	$(CXX) $(CXXFLAGS) -c dh.cpp

clean:
	rm -f *.o crypto
