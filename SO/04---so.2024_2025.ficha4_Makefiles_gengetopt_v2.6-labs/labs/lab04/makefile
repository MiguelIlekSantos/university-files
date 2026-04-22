# EXECUTAR : gcc -MM *.c
# flags para o compilador
CFLAGS = -std=c11 -Wall -Wextra

# ficheiros objecto
OBJS = main.o funcoes.o funcoesAux.o debug.o
PROGRAM = program

all: $(PROGRAM)

#debugon: CFLAGS += -D SHOW_DEBUG
#debugon: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) -o $@ $(OBJS)

# Lista de dependências dos ficheiros código fonte
#debug.o: debug.c debug.h
main.o: main.c main.h funcoesAux.h
funcoesAux.o: funcoesAux.c funcoesAux.h funcoes.h 
funcoes.o: funcoes.c funcoes.h

# Indica como transformar um ficheiro .c num ficheiro .o
.c.o:
	$(CC) $(CFLAGS) -c $<

# remove ficheiros sem interesse
clean:
	rm -f *.o core.* *~ $(PROGRAM)
