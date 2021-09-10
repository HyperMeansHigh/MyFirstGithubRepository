CC ?= gcc

#CFLAGS+=-Wall -Wextra -pedantic
#SANITY_FLAGS=-Wfloat-equal -Wshadow -Wpointer-arith

SOURCE_C=src/main.c
SOURCE_H=src/main.h
TARGET=test

$(TARGET): $(SOURCE_C) $(SOURCE_H)
      $(CC) $(SOURCE_C) -o $(TARGET)

run: $(TARGET)
      ./$(TARFET)
