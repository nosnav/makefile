C_FILE := $(wildcard *.c)
O_FILE := $(wildcard mom/*.o)
S_FILE := $(wildcard mom/son/*.s)
C_BIN := $(patsubst %.c, %.bin, $(C_FILE))
O_BIN := $(patsubst mom/%.o,%.bin,$(O_FILE))
S_BIN := $(patsubst mom/son%.s,%.bin,$(S_FILE))

all:
	@echo -n "C_FILE = "
	@echo $(C_FILE)
	@echo $(C_BIN)
	@echo -n "O_FILE = "
	@echo $(O_FILE)
	@echo $(O_BIN)
	@echo -n "S_FILE = "
	@echo $(S_FILE)
	@echo $(S_BIN)
