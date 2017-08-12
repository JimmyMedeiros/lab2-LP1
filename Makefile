CC = g++
CPPFLAGS = -Wall -pedantic -ansi -std=c++11
RM = rm -rf

# Variaveis para os subdiretorios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

# Opção para depurar (só a questão 03)
debug: CPPFLAGS += -g -O0
debug: questao03

####	Questão 02		####
questao02: $(OBJ_DIR)/main2.o $(OBJ_DIR)/primalidade.o $(OBJ_DIR)/fatorial.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/anterior $^
	@echo "+++ [Executavel questao02 criado em $(BIN_DIR)] +++"
	@echo "============="
$(OBJ_DIR)/main2.o: $(SRC_DIR)/questao02/main2.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<
$(OBJ_DIR)/primalidade.o: $(SRC_DIR)/questao02/primalidade.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<
$(OBJ_DIR)/fatorial.o: $(SRC_DIR)/questao02/fatorial.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

####	Questão 03		####
# Define os arquivos classe31.o e main3.o como dependências.
questao03: $(OBJ_DIR)/main3.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel questao03 criado em $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/main3.o: $(SRC_DIR)/questao03/main3.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

# Limpar os arquivos objetos e executáveis
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*

