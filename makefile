# Name of the project
PROJ_NAME=dist/Historico.exe

# Compiler
CC=@ gcc
 
# Flags for compiler   -c -W -Wall -ansi -pedantic
CC_FLAGS=-c -Iinclude

# Bibliotecas a serem linkadas
LIBS=-lstdc++

# .c files
SRC_FILES=$(wildcard src/*.cpp)
#remove principal da lista de sources, uma vez que este nao tem .h
CPP_SOURCE=$(filter-out src/principal.cpp, $(SRC_FILES))  
 
# .h files
H_SOURCE=$(wildcard include/*.h)
 
# Object files
OBJ=$(patsubst src/%.cpp, obj/%.o, $(CPP_SOURCE))

all: obj dist $(PROJ_NAME)

#posso criar essa regra especifica do principal, pq ele foi removido do CPP_SOURCE e nao aparece no OBJ
obj/principal.o: src/principal.cpp
	$(CC) $(CC_FLAGS) -o $@ $< 

$(OBJ): obj/%.o: src/%.cpp include/%.h
	@ echo Compilando Arquivo '$@' 
	$(CC) $(CC_FLAGS) -o $@ $<
	@ echo Arquivo '$@' compilado com sucesso
 


$(PROJ_NAME): $(OBJ) obj/principal.o
	@ echo Gerando Executavel 'processo de linkagem'
	$(CC) -o $@ $(OBJ) obj/principal.o $(LIBS)
	@ echo Arquivo '$@' gerado com sucesso


obj:
	@ mkdir obj
dist:
	@ mkdir dist

clean:
	@ echo Removendo arquivos compilados
	@ rm -rf obj/*.o $(PROJ_NAME)
	@ echo Arquivos removidos com sucesso

rebuild: clean all

.PHONY: all clean rebuild
