CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++11
LDFLAGS=-lgtest -lgtest_main -pthread 
GCOVFLAGS=--coverage
GCOV_DIR=gcov



ifeq ($(shell uname), Linux)
	LDFLAGS += -lsubunit
endif

TEST_DIR=tests
SRC_TEST_FILES := $(wildcard $(TEST_DIR)/*.cpp)
SRC_FILES := $(wildcard *.cpp)
TEST := tests
TEST_EXECUTABLE := my_tests

all: print

test: $(SRC_TEST_FILES) $(SRC_FILES)
	$(CC) $(CFLAGS) $^ $(LDFLAGS) $(GCOVFLAGS) -o $(TEST_EXECUTABLE)

clean:
	rm -rf $(TEST_EXECUTABLE)
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf gcov
	


gcov_report: $(TEST_BUILD)
	make test
	./$(TEST_EXECUTABLE) || true
	mkdir -p $(GCOV_DIR)
	rm -rf $(GCOV_DIR)/*.gcda $(GCOV_DIR)/*.gcno
	gcovr --exclude='/usr/include/*' --html-details -o $(GCOV_DIR)/index.html --filter "$(SRC_DIR)/*" 
	sed -i 's/<td class="header">Branches<\/td>/<td class="header">Branches (excluded)<\/td>/g' $(GCOV_DIR)/index.html
	open $(GCOV_DIR)/index.html
