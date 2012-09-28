BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: Queue3_tester.cpp Queue3.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main Queue3_tester.cpp Queue3.o

Stack.o: Queue3.h Queue3.cpp
	$(CPP) $(CPPFLAGS) -c Queue3.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
