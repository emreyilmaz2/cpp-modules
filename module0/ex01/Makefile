name = buse
compiler = c++
flags = -Wall -Werror -Wextra -std=c++98
files = $(wildcard *.cpp)

all:$(files)
	$(compiler) $(flags) $(files) -o $(name)

clean:
	rm -rf phonebook

re: clean all

.PHONY= re clean all