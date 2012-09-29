BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main1: Queue1_tester.cpp Queue1.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main1 Queue1_tester.cpp Queue1.o

Queue1.o: Queue1.h Queue1.cpp
	$(CPP) $(CPPFLAGS) -c Queue1.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main1
