name = bureaucrat
files = $(wildcard *.cpp)
compiler = g++
flags = -Wall -Werror -Wextra -std=c++98

all:$(files)
	$(compiler) $(flags) $(files) -o $(name)
clean:
	@rm -rf name

re: clean all

.PHONY: all clean re