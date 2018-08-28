# $@: name_target
all: name_target foo.a(bar.o) foo bar bzz baa bcc

name_target:
	@echo $@
	@echo "----------"

foo.a(bar.o):
	@echo $@
	@echo $%
	@echo "----------"

foo: a.c b.c c.c
	@echo $<
	@echo "----------"

bar: a.c b.c c.c a.c
	@echo $^
	@echo "----------"

bzz: a.c b.c c.c a.c
	@echo $?
	@echo "----------"

baa: a.c b.c c.c a.c
	@echo $+
	@echo "----------"

bcc: a.c b.h c.c a.c b.c a.h
	@echo $+
	@echo "----------"