cc = gcc
target = fmt
objects = main.o Output.o String_Manipulation.o

$(target): $(objects)
	$(cc) -g -o $(target) $(objects)

.PHONY : clean
clean :
	rm $(target) $(objects)
