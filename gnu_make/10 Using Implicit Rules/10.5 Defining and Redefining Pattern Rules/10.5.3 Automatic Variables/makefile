# $@: name_target
all: name_target foo.a(bar.o) foo

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