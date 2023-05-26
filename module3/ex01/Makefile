name = ScavTrap
files = $(wildcard *.cpp)
flags = -Wall -Werror -Wextra -std=c++98
compiler = g++

all:$(files)
	@$(compiler) $(flags) $(files) -o $(name)
	@echo "\033[32mcompiled\033[0m"
clean:
	@rm -rf $(name)

re: clean all

.PHONY= re clean all
