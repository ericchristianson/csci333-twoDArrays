BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: Queue2_tester.cpp Queue2.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main Queue2_tester.cpp Queue2.o

Stack.o: Queue2.h Queue2.cpp
	$(CPP) $(CPPFLAGS) -c Queue2.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
