EXEC := run_tests
MAIN := test_lib
SRC :=
TESTS := test_size test_span
FIXTURES :=


CC := g++
CC_ARGS := -std=c++11 -Wall -Wextra -pedantic -fno-access-control


OBJS := $(addsuffix .o, $(SRC) $(TESTS) $(FIXTURES))

.PHONY: all check clean distclean


all: $(EXEC)

$(EXEC): $(MAIN).cc $(OBJS)
	$(CC) $(CC_ARGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CC_ARGS) -o $@ -c $<

%.o: %.cc
	$(CC) $(CC_ARGS) -o $@ -c $<

check: all
	valgrind --error-exitcode=1 --track-origins=yes ./$(EXEC)

clean:
	rm -f $(OBJS)

distclean: clean
	rm -f $(EXEC)
