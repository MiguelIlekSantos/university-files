# makefile para programa vowels_v2
CFLAGS = -wall -Wextra
EXEC = vowels_v2
OBJS = main.o string_utils.o
LIBS = -lm

# $@ o alvo 
# $^lista de todas as dependencias

all: $(EXEC)

$(EXEC): $(OBJS)
	gcc -o $(EXEC) $@ $^
	
#$< a primeira dependencia

main.o: main.c string_utils.h        
string_utils.o: string_utils.c string_utils.h

.c.o:
	gcc -c $(CFLAGS) $<


clean:
	rm *.o $(EXEC) $(OBJS)