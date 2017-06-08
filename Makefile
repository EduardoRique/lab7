#Makefile for "Laboratorio 07" C++ aplication
#Created by Eduardo Rique

# Comandos do sistema operacional
# Linux: rm -rf
# Windows: cmd //C del
RM = rm -rf

# Compilador
CC = g++

# Variaveis para os subdiretorios
BIN_DIR = ./bin
OBJ_DIR = ./build
SRC_DIR = ./src
DOC_DIR = ./doc

# Opcoes de compilacao
CFLAGS = -Wall -pedantic -ansi -std=c++11

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean

# Define o alvo (target) para a compilacao completa.
# Ao final da compilacao, remove os arquivos objeto.
all: clean tarefa1 tarefa2 tarefa3 showprimos doxy
debug: CFLAGS += -g -O0
debug: clean tarefa1 tarefa2 tarefa3 showprimos

# Alvo (target) para a construcao do executavel tarefa1
# Define o arquivo tarefa1.o como dependencia
tarefa1: $(OBJ_DIR)/tarefa1.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel $@ criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto tarefa1.o
# Define o arquivo tarefa1.cpp como dependencia.
$(OBJ_DIR)/tarefa1.o: $(SRC_DIR)/tarefa1.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do executavel tarefa2
# Define o arquivo tarefa2.o como dependencia
tarefa2: $(OBJ_DIR)/tarefa2.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel $@ criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto tarefa2.o
# Define o arquivo tarefa2.cpp como dependencia.
$(OBJ_DIR)/tarefa2.o: $(SRC_DIR)/tarefa2.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do executavel tarefa3
# Define o arquivo tarefa3.o como dependencia
tarefa3: $(OBJ_DIR)/tarefa3.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel $@ criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto tarefa3.o
# Define o arquivo tarefa3.cpp como dependencia.
$(OBJ_DIR)/tarefa3.o: $(SRC_DIR)/tarefa3.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do executavel showprimos
# Define o arquivo showprimos.o como dependencia
showprimos: $(OBJ_DIR)/showprimos.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel $@ criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto showprimos.o
# Define o arquivo tarefa4.cpp como dependencia.
$(OBJ_DIR)/showprimos.o: $(SRC_DIR)/tarefa4.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*