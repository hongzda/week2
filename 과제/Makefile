cc = gcc
target = starwars
objects = main.o Manipulation.o Output.o

$(target): $(objects)
	$(cc) -g -o $(target) $(objects)

.PHONY : clean
clean :
	rm $(target) $(objects)
