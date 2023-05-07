name = reference
compiler = c++
flags= -Wall -Werror -Wextra -std=c++98
files = $(wildcard *.cpp)

all:$(files)
	$(compiler) $(flags) $(files) -o $(name)

clean:
	rm -rf $(name)

re: clean all

.PHONY= re clean all