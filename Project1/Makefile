BUILD = ./build
TEST = ./test
LIB = ./lib
SRC1 = ./src/Queue1
SRC2 = ./src/Queue2
SRC3 = ./src/Queue3

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main1 $(BUILD)/main2 $(BUILD)/main3 $(TEST)/queue_test

$(BUILD)/main1: $(SRC1)/Queue1.cpp $(SRC1)/Queue1.o
	cd $(SRC1); $(MAKE)

$(BUILD)/main2: $(SRC2)/Queue2.cpp $(SRC2)/Queue2.o
	cd $(SRC2); $(MAKE)

$(BUILD)/main3: $(SRC3)/Queue3.cpp $(SRC3)/Queue3.o
	cd $(SRC3); $(MAKE)

$(TEST)/queue_test: $(TEST)/Queue.cpp $(SRC1)/Queue1.o $(SRC2)/Queue2.o $(SRC3)/Queue3.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC1); $(MAKE) clean
	cd $(SRC2); $(MAKE) clean
	cd $(SRC3); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

