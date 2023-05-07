name = megaphone
compiler = g++ -Wall -Werror -Wextra
source = $(wildcard *.cpp)

all:
	$(compiler) $(source) -o $(name)

clean:
	rm -rf megaphone

re: clean all

.PHONY = all clean re